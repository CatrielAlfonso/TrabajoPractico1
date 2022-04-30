#include <stdio.h>
#include <stdlib.h>
#include "TrabajoPractico-h.h"
#include "CalculosTPh.h"
#define TAM 3


int main(void)
{
	setbuf(stdout, NULL);

    char salida = 'n';
    int kilometrosIngresados=0;
    float precioAerolineas=0;
    float precioLatam=0;
    int flagTres=0;
    int flagDos=0;

    do
    {
        switch(menu())
        {
            case 1:
                ingresarKilometros(&kilometrosIngresados);
                break;
            case 2:
                if(kilometrosIngresados!=0)
                {
                    ingresarPrecioAerolineas(&precioAerolineas);
                    ingresarPrecioLatam(&precioLatam);
                    flagDos=1;
                }
                else
                {
                    printf("No se han ingresado kilometros antes de el precio\n");
                }

                break;

            case 3:

                if(flagDos==1)
                {
                    calcularCostos(precioAerolineas,precioLatam,kilometrosIngresados);
                    flagTres=1;
                }
                else if(kilometrosIngresados==0)
                {
                    printf("\n No se pueden calcular los costos si NO SE INGRESARON KILOMETROS\n");
                }
                else
                {
                    printf("\n No se pueden calcular los costos si NO SE INGRESARON PRECIOS\n");

                }


                break;

            case 4:
                if(flagTres==1)
                {
                    informarResultados(precioAerolineas,precioLatam,kilometrosIngresados);
                }
                else if(kilometrosIngresados==0)
                {
                    printf("\n No se pueden informar los resultados si NO SE INGRESARON KILOMETROS\n");
                }
                else if(flagDos==0)
                {
                    printf("\n No se pueden informar los resultados si NO SE INGRESARON PRECIOS\n");
                }
                else
                {
                    printf("\n No se pueden informar resultados si NO SE CALCULARON LOS COSTOS\n");
                }
                break;
            case 5:
                cargaForzadaDeDatos();
                break;
            case 6:
                confirmarSalida(&salida);
                break;
            default:
                printf("OPCION INVALIDA\n");
                system("pause");
                break;
        }

         system("pause");

    }while(salida != 's');


    return 0;
}


