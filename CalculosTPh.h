#ifndef CALCULOSTPH_H_INCLUDED
#define CALCULOSTPH_H_INCLUDED
#include "CalculosTPh.h"
#include "TrabajoPractico-h.h"


#endif // CALCULOSTPH_H_INCLUDED

/** \brief Calcula el precio con tarjeta de credito +25%
 *
 * \param precioIngresado float
 * \return float
 *
 */
float calcularConTarjetaDeCredito(float precioIngresado);

/** \brief calcula el precio con tarjeta de debito -10%
 *
 * \param precioIngresado float precio ingresado
 * \return float retorna el precio calculado
 *
 */
float calcularConTarjetaDeDebito(float precioIngresado);

/** \brief calcula el pasaje de pesos a bitcoin
 *
 * \param precioIngresado float precio que ingreso el usuario
 * \return float retorna el precio final calculado
 *
 */
float calcularConBitCoin(float precioIngresado);

/** \brief calcula el precio unitario x km
 *
 * \param precioIngresado float precio ingresado
 * \return float retorna el precio unitario
 *
 */
float calcularPrecioUnitario(float precioIngresado, int kilometros);


/** \brief muestra la diferencia entre el precio uno y dos
 *
 * \param precioUno float primer precio
 * \param precioDos float segundo precio
 * \return float retorna la diferencia
 *
 */
float mostrarDiferenciaDePrecioIngresada(float precioUno, float precioDos);

/** \brief calcula todos los costos en debito,credito, bitcoin, unitario y diferencia
 *
 * \param precioUno float precio primer aerolinea
 * \param precioDos float precio segunda aerolinea
 * \param kilometros int kilometros ingresados.
 * \return void
 *
 */
void calcularCostos(float precioUno, float precioDos, int kilometros);

/** \brief Informa los resultados de los calculos ya hechos
 *
 * \param precioUno float precio Aerolineas
 * \param precioDos float precio Latam
 * \param kilometros int kilometrosINgresados
 * \return void
 *
 */
void informarResultados(float precioUno, float precioDos, int kilometros);
