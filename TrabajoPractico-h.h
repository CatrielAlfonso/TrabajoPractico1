#ifndef TRABAJOPRACTICO_H_INCLUDED
#define TRABAJOPRACTICO_H_INCLUDED
#include "TrabajoPractico-h.h"
#include "CalculosTPh.h"


#endif // TRABAJOPRACTICO-H_H_INCLUDED

/** \brief muestra las opciones del menu y retorna la opcion
 *
 * \return int retorna la opcion
 *
 */
int menu();


/** \brief toma los kilometros y los muestra
 *
 * \param km int kilometros que toma
 * \return void
 *
 */
void ingresarKilometros(int* kilometrosIngresados);


/** \brief permite ingresar el precio de cada aerolinea
 *
 * \param precioAerolineas float* precio que ingrese usuario en Aerolineas
 * \return void
 *
 */
void ingresarPrecioAerolineas(float* pPrecioAerolineas);

/** \brief permite ingresar precio de Latam
 *
 * \param pPrecioLatam float* precio que ingrese el usuario en Latam
 * \return void
 *
 */
void ingresarPrecioLatam(float* pPrecioLatam);

/** \brief muestra los valores con la carga forzada establecida
 *
 * \return void
 *
 */
void cargaForzadaDeDatos();

/** \brief devuelve salida por "si" o "no"
 *
 * \param pSalida[] char* vector para ingresar un string
 * \param tam int tamaño del vector
 * \return void
 *
 */
void confirmarSalida(char* pSalida);
