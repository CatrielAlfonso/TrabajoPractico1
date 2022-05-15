#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayPassenger.h"

int initPassengers(Passenger* list, int len)
{

	if(list != NULL && len > 0)
	{
		for(int i=0; i < len; i++)
		{
			list[i].isEmpty= 1;
		}

	}

	return 0;

}

int printPassenger(Passenger* list, int length)
{

	if(list != NULL && length > 0)
	    {

	        printf("  %4d       %15s       %c      %2d    %9.2f    %02d/%02d/%d   %10s\n",
	        		list->flyCode,
	        		list->name,
	        		list->lastName,
					list->id,
					list->price,
					list->typePassenger
	              );
	    }


	return 0;
}

int buscarPasajeroLibre(Passenger vec[], int tam, int* pIndex)
{
    int todoOk = 0;
    if(vec != NULL && tam > 0 && pIndex != NULL)
    {
        *pIndex = -1;
        for(int i=0; i < tam; i++)
        {
            if( vec[i].isEmpty )
            {
                *pIndex = i;
                break;
            }
        }
        todoOk = 1;
    }
    return todoOk;

}

int addPassenger(Passenger* list, int len, int id, char name[], char lastName[], float price, int typePassenger, char flycode[])
{
    int todoOk=0;
    char auxCad[100];
    char auxLastName[100];
    char auxFlyCode[100];
    int indice;

    if(list != NULL && len > 0)
    {
       if( buscarEmpleadoLibre(list, len, &indice) )
        {

            if(indice == - 1)
            {
                printf("No hay lugar en el sistema\n");
            }
            else
            {
                ///HAY LUGAR

                ///FlyCode
                printf("Ingrese Fly Code: ");
                fflush(stdin);
                gets(auxFlyCode);

                while(strlen(auxFlyCode) >= 20)
                {
                    printf("Codigo demasiado largo. Reingrese Codigo: ");
                    fflush(stdin);
                    gets(auxFlyCode);
                }
                strcpy(list[i].flyCode, auxCad);

                ///NOMBRE
                printf("Ingrese Nombre del Pasajero: ");
                fflush(stdin);
                gets(auxCad);

                while(strlen(auxCad) >= 20)
                {
                    printf("Nombre demasiado largo. Reingrese nombre: ");
                    fflush(stdin);
                    gets(auxCad);
                }
                strcpy(list[i].nombre, auxCad);

                ///APELLIDO
                printf("Ingrese Apellido del Pasajero: ");
                fflush(stdin);
                gets(auxLastName);

                while(strlen(auxCad) >= 20)
                {
                    printf("Nombre demasiado largo. Reingrese nombre: ");
                    fflush(stdin);
                    gets(auxCad);
                }
                strcpy(list[i].nombre, auxCad);


                printf("Ingrese Precio de Vuelo: ");
                scanf("%d", &list[i].price);

                printf("Ingrese Tipo de pasajero: ");
                scanf("%f", &list[i].typePassenger);
        }

    }
    return todoOk;
}
