#ifndef MYGETS_H_INCLUDED
#define MYGETS_H_INCLUDED

typedef struct{

int id;
int description[20];

}eTypePassenger;

#endif // MYGETS_H_INCLUDED

int listarTipos(eTypePassenger tipos[], int tam);
int cargarDescripcionTipos(eTypePassenger tipos[], int tam, int id, char descripcion[]);
int buscarTipo(eTypePassenger tipos[], int tam, int id, int* pIndice);
int validarTipo(eTypePassenger tipos[], int tam, int id);
