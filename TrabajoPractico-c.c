#include <stdio.h>
#include <stdlib.h>
#include "TrabajoPractico-h.h"
#include "CalculosTPh.h"
#define TAM 3

int menu()
{
    int opcion;

    system("pause");
    printf(" ***** Menu de Opciones *****\n\n");
    printf("1. Ingresar Kilómetros: \n");
    printf("2. Ingresar Precio de Vuelos:\n");
    printf("3. Calcular todos los costos:\n");
    printf("4. Informar Resultados:\n");
    printf("5. Carga forzada de datos:\n");
    printf("6. Salir\n");
    printf("Ingrese Opcion: ");
    scanf("%d",&opcion);

    system("pause");

    return opcion;

}


void ingresarKilometros(int* kilometrosIngresados)
{

    int cantidadDeKilometros=1;

    printf("1- INGRESAR KILOMETROS\n\n");

    printf("Ingrese cantidad de Kilometros a recorrer: ");
    scanf("%d", &cantidadDeKilometros);

    printf("La cantidad de kilometros ingresada son: %d km\n", cantidadDeKilometros);

    *kilometrosIngresados=cantidadDeKilometros;

}

void ingresarPrecioAerolineas(float* pPrecioAerolineas)
{
    printf("2- INGRESAR PRECIO DE VUELOS\n\n");

    float precioAerolineas;//variables locales

    if(pPrecioAerolineas!= NULL)
    {
        printf("Ingresar precio AEROLINEAS: ");
        scanf("%f", &precioAerolineas);
        printf("Precio ingresado para AEROLINEAS : %.2f\n\n",precioAerolineas);
        *pPrecioAerolineas=precioAerolineas;
    }
}

void ingresarPrecioLatam(float* pPrecioLatam)
{
    float precioLatam;//variables locales

    if(pPrecioLatam!= NULL)
    {
        printf("Ingresar precio LATAM: ");
        scanf("%f", &precioLatam);
        printf("Precio ingresado para AEROLINEAS : %.2f\n\n",precioLatam);
        *pPrecioLatam=precioLatam;
    }

}


void cargaForzadaDeDatos()
{
    float precioAerolineasForzado=162965;
    float precioLatamForzado=159339;
    int kilometrosForzados=7090;

    printf("*** 5-CARGA FORZADA DE DATOS ***\n\n");

    printf("Km Ingresados: %d\n\n",kilometrosForzados);

    printf("LATAM: $ %.2f\n",precioLatamForzado);
    printf(" a) Precio con tarjeta de debito: $ %.2f \n",calcularConTarjetaDeDebito(precioLatamForzado));
    printf(" b) Precio con tarjeta de credito: $ %.2f \n",calcularConTarjetaDeCredito(precioLatamForzado));
    printf(" c) Precio con Bit Coin: %f BTC\n",calcularConBitCoin(precioLatamForzado));
    printf(" d) Mostrar precio Unitario: $ %.2f x Km\n\n",calcularPrecioUnitario(precioLatamForzado,kilometrosForzados));

    printf("AEROLINEAS: $ %.2f\n",precioAerolineasForzado);
    printf(" a) Precio con tarjeta de debito: $ %.2f \n",calcularConTarjetaDeDebito(precioAerolineasForzado));
    printf(" b) Precio con tarjeta de credito: $ %.2f \n",calcularConTarjetaDeCredito(precioAerolineasForzado));
    printf(" c) Precio con Bit Coin: %f BTC\n",calcularConBitCoin(precioAerolineasForzado));
    printf(" d) Mostrar precio Unitario: $ %.2f x Km \n",calcularPrecioUnitario(precioAerolineasForzado,kilometrosForzados));
    printf(" d) Mostrar Diferencia: %.2f \n",mostrarDiferenciaDePrecioIngresada(precioLatamForzado,precioAerolineasForzado));


}

void confirmarSalida(char* pSalida)
{

    printf("*** 6 - SALIR ***\n\n");

    char confirma;

    printf("Confirma Salida? s=si /n=no : ");
    fflush(stdin);
    scanf("%c", &confirma);

    *pSalida = confirma;

}
