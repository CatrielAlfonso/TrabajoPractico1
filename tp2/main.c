#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayPassenger.h"
#include "menu.h"

#define LEN 5

int main()
{
	char salir='n';
	Passenger passenger[LEN];
	int proximoId=20000;

	initPassengers(passenger, LEN);

	  do
	    {
	        switch(menu())
	        {

	        case 1:
	        	printf("ALTA\n");
	            break;
	        case 2:
	        	printf("Baja\n");
	            break;
	        case 3:
	            break;
	        case 4:
	            break;
	        case 5:
	            salir = 's';
	            break;

	        }
	        system("pause");

	    }
	    while(salir != 's');


	return 0;
}
