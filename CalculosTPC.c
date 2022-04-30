#include <stdio.h>
#include <stdlib.h>
#include "TrabajoPractico-h.h"
#include "CalculosTPh.h"


float calcularConTarjetaDeDebito(float precioIngresado)
{
    int descuento=10;
    float precioFinalDebito;

    precioFinalDebito = (float)(precioIngresado*descuento)/100;

    precioFinalDebito = precioIngresado - precioFinalDebito;
    return precioFinalDebito;

}

float calcularConTarjetaDeCredito(float precioIngresado)
{
    int interes=25;
    float precioFinalCredito;

    precioFinalCredito = (float)(precioIngresado*interes)/100;

    precioFinalCredito = precioFinalCredito + precioIngresado;

    return precioFinalCredito;
}

float calcularConBitCoin(float precioIngresado)
{
    float bitCoinAPesos=4606954.55;
    float precioFinal;

    precioFinal = precioIngresado/bitCoinAPesos;

    return precioFinal;

}

float calcularPrecioUnitario(float precioIngresado, int kilometros)
{
    float precioUnitario;

    precioUnitario = precioIngresado/kilometros;

    return precioUnitario;
}

float mostrarDiferenciaDePrecioIngresada(float precioUno, float precioDos)
{
    float diferencia;

    diferencia= precioDos - precioUno;

    return diferencia;

}

void calcularCostos(float precioUno, float precioDos, int kilometros)
{
    printf("*** 3.CALCULAR TODOS LOS COSTOS ***\n\n");

    printf("a) Tarjeta de debito (descuento 10%%)\n");
    printf("b) Tarjeta de credito (interes 25%%)\n");
    printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
    printf("d) Mostrar precio por km (precio unitario)\n");
    printf("e) Mostrar diferencia de precio ingresada (Latam - Aerolineas)\n\n");

    printf("Precios de Aerolineas y Latam calculados\n\n");

}


void informarResultados(float precioUno, float precioDos, int kilometros)
{
    printf("*** 4-INFORMAR RESULTADOS ***\n\n");

    printf("LATAM: $ %.2f\n",precioDos);
    printf(" a) Precio con tarjeta de debito: $ %.2f \n",calcularConTarjetaDeDebito(precioDos));
    printf(" b) Precio con tarjeta de credito: $ %.2f \n",calcularConTarjetaDeCredito(precioDos));
    printf(" c) Precio con Bit Coin: %f BTC\n",calcularConBitCoin(precioDos));
    printf(" d) Mostrar precio Unitario: $ %.2f x Km\n\n",calcularPrecioUnitario(precioDos,kilometros));

    printf("AEROLINEAS: $ %.2f\n",precioUno);
    printf(" a) Precio con tarjeta de debito: $ %.2f \n",calcularConTarjetaDeDebito(precioUno));
    printf(" b) Precio con tarjeta de credito: $ %.2f \n",calcularConTarjetaDeCredito(precioUno));
    printf(" c) Precio con Bit Coin: %f BTC\n",calcularConBitCoin(precioUno));
    printf(" d) Mostrar precio Unitario: $ %.2f x Km \n",calcularPrecioUnitario(precioUno,kilometros));
    printf(" d) Mostrar Diferencia: %.2f \n",mostrarDiferenciaDePrecioIngresada(precioUno,precioDos));


}

