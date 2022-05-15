#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "myGets.h"

int listarTipos(eTypePassenger tipos[], int tam)
{
    int todoOk = 0;

    if(tipos != NULL && tam > 0){
     // system("cls");
        printf("   *** Type of Passengers ***\n");
        printf("  Id    Descripcion\n");
        printf("-----------------------\n");
        for(int i=0; i < tam; i++){
            printf("   %4d    %10s\n", tipos[i].id, tipos[i].descripcion);
        }
        printf("\n\n");
        todoOk = 1;
    }
 return todoOk;
}

int cargarDescripcionTipos(eTypePassenger tipos[], int tam, int id, char descripcion[])
{
int todoOk = 0;
int indice;

    buscarSector(sectores,tam, id,&indice);

    if(descripcion != NULL && indice != -1 ){
       strcpy(descripcion, sectores[indice].descripcion);
       todoOk = 1;
    }
  return todoOk;
}


int buscarTipo(eTypePassenger tipos[], int tam, int id, int* pIndice)
{
    int todoOk = 0;
    if(tipos != NULL && tam > 0 && pIndice != NULL){
            *pIndice = -1;
            for(int i=0; i < tam; i++){
                if(tipos[i].id == id){
                    *pIndice = i;
                    break;
                }
            }
        todoOk = 1;
    }
    return todoOk;
}

int validarTipo(eTypePassenger tipos[], int tam, int id)
{
    int esValido = 0;
    int indice;

    buscarTipo(tipos, tam, id, &indice);

    if(indice != -1){
        esValido = 1;
    }

    return esValido;
}
