from flask import Flask, render_template, redirect, jsonify
from flask_wtf import FlaskForm
from flask_bootstrap import Bootstrap
from wtforms import StringField, FloatField, SelectField
from wtforms.validators import InputRequired
from utils import getDadosInterpolados
import numpy as np
from scipy.integrate import odeint
import matplotlib.pyplot as plt
from random import randint
from teste3 import TemperatureModel

app = Flask(__name__)
Bootstrap(app)
app.secret_key = 'admin'

@app.route("/simulador", methods=['GET', 'POST'])
def simulador():
    #initial condicitions
    dados_interpolados = getDadosInterpolados()
    dados_interpolados.to_csv("dados_i2")
    size = len(dados_interpolados)
    tIn = 13.7
    n=size
    #time points
    t = np.linspace(0,size, n)
    #store soluciton
    x = np.empty_like(t)
    x[0] = tIn
    l_tOut = np.empty_like(t)


    u = []
    for i in range(0,size,1):
        configuracao = dados_interpolados.iloc[[i]]
        l_tOut[i] = configuracao["tOut"].values[0]
        t0= {
            "tOut" : configuracao["tOut"].values[0],
            "heidth" : 6.3,
            "etPlantas" : 7.4/(24*60*60),
            "etCooling" : 0,
            "glassArea" : 674,
            "groundArea" : 300,
            "transmitance_g_m" : 0.9,
            "qGRout" : configuracao["srOut"].values[0],
            "number_heater" : randint(0,0),
            "heater_capacity" : 75000,
            "qv_ventilation_rate" : 0.0005, #0.003,
            "k" : 6.2
        }

        # print(t0["tOut"],"-",t0["qGRout"])

        u.append(t0)

    for i in range(1,n,1):
        tspan= [t[i-1],t[i]]
        z = odeint(TemperatureModel, tIn, tspan, args=(u[i],))
        x[i]=z[1][0]
        tIn= z[1][0]

    plt.plot(t,x)
    plt.plot(t, l_tOut)
    plt.xlabel('time')
    plt.ylabel('tIn(t)')
    plt.show()

    return "OK"

def simuladorComControle(maxTemperatura, minTemperatura):
    #initial condicitions
    print("Interpolando")
    dados_interpolados = getDadosInterpolados()
    dados_interpolados.to_csv("dados_i2")
    size = len(dados_interpolados)
    tIn = 13.7
    n=size
    #time points
    t = np.linspace(0,size, n)
    #store soluciton
    x = np.empty_like(t)
    x[0] = tIn
    l_tOut = np.empty_like(t)

    u = []
    print("Gerando Pontos")
    for i in range(0,size,1):
        configuracao = dados_interpolados.iloc[[i]]
        l_tOut[i] = configuracao["tOut"].values[0]

        t0= {
            "tOut" : configuracao["tOut"].values[0],
            "heidth" : 6.3,
            "etPlantas" : 7.4/(24*60*60),
            "etCooling" : 0, #Não esta usando (Calculado no a partir do GRout)
            "glassArea" : 674,
            "groundArea" : 300,
            "transmitance_g_m" : 0.9,
            "qGRout" : configuracao["srOut"].values[0],
            "number_heater" : randint(0,0),
            "heater_capacity" : 75000,
            "qv_ventilation_rate" : 0.0005, #0.003,
            "k" : 6.2
        }

        # print(t0["tOut"],"-",t0["qGRout"])

        u.append(t0)


    for i in range(1,n,1):
        tspan= [t[i-1],t[i]]
        # if tIn:
        #     print(tIn,u[i]['tOut'])
        #     if tIn<minTemperatura:
        #         u[i]["number_heater"]=2
        #         # u[i]["qv_ventilation_rate"]=0.0005
        #     elif tIn>maxTemperatura:
        #         u[i]["number_heater"]=0
        #         # u[i]["qv_ventilation_rate"]=0.003
        z = odeint(TemperatureModel, tIn, tspan, args=(u[i],))
        x[i]=z[1][0]
        tIn= z[1][0]

    plt.plot(t,x)
    plt.plot(t,l_tOut)
    plt.xlabel('time')
    plt.ylabel('tIn(t)')
    plt.show()

class VirtForm(FlaskForm):
    menorTemperatura = FloatField('Menor Temperatura', validators=[InputRequired])
    maiorTemperatura = FloatField('Maior Temperatura', validators=[InputRequired])

@app.route('/main', methods=["GET", "POST"])
def main():
    main = VirtForm()
    print(main.menorTemperatura.data)
    if main.maiorTemperatura.data != None and main.menorTemperatura.data != None:
        menorTemperatura = main.menorTemperatura.data
        maiorTemperatura = main.maiorTemperatura.data

        result = {}
        result['MaxTemperatura'] = maiorTemperatura
        result['MinTemperatura'] = menorTemperatura

        print(menorTemperatura,maiorTemperatura)

        simuladorComControle(maiorTemperatura,menorTemperatura)

        return jsonify(result)

    return render_template('main.html', main=main)

@app.route('/')
def root():
    return redirect("/main", code=302)

if __name__ == "__main__":
    app.run(debug=True)