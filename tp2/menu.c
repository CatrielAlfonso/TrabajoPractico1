#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menu.h"

int menu()
{
	int opcion;

	system("pause");

	printf("     *** MENU DE OPCIONES ***\n");
	printf("1- Alta Pasajero\n");
	printf("2- Baja Pasajero\n");
	printf("3- Modificar Pasajero\n");
	printf("4- Informar\n");
	printf("5- Salir\n");

	printf("Ingrese opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

int subMenuInformar()
{
	int opcion;

	system("pause");

	printf("     *** INFORMAR ***\n");
	printf("1- Pasajeros Ordenados por Nombre y Tipo\n");
	printf("2- Total y Promedios\n");
	printf("3- Listado por Codigo de Vuelo y Estado 'ACTIVO' \n");
	printf("4- Informar\n");

	printf("Ingrese opcion: ");
	scanf("%d", &opcion);


	return opcion;
}


int subMenuModificar()
{
	int opcion;

	system("pause");

	printf("     *** MODIFICAR ***\n");
	printf("1- Modificar Nombre\n");
	printf("2- Modificar Apellido\n");
	printf("3- Modificar Precio\n");
	printf("4- Modificar Tipo de Pasajero\n");
	printf("5- Modificar Codigo de Vuelo\n");
	printf("6- Salir\n");

	printf("Ingrese opcion: ");
	scanf("%d", &opcion);

	return opcion;
}
