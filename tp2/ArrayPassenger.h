#ifndef ARRAYPASSENGER_H_INCLUDED
#define ARRAYPASSENGER_H_INCLUDED

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flyCode[10];
	int typePassenger;
	int isEmpty;

}Passenger;

#endif // ARRAYPASSENGER_H_INCLUDED

/** \brief to indicate that all the positions in the array are Empty, this function put
 *         the flag (isEmpty) in 0 in all positions of the array

 * \param list Passenger* Pointer to the array of passenger
 * \param len int size of array
 * \return int 0 if Ok
 *
 */
int initPassengers(Passenger* list, int len);

/** \brief  print the content of passengers array
 *
 * \param list Passenger* Pointer to the array of passenger
 * \param length int size of array
 * \return int  0 if Ok
 *
 */
int printPassenger(Passenger* list, int length);

/** \brief add in a existing list of passengers the values received as parameters
 *         in the first empty position

 * \param list Passenger*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param price float
 * \param typePassenger int
 * \param flycode[] char
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
 *             free space] - (0) if Ok

 */
int addPassenger(Passenger* list, int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[]);

/** \brief search if passenger isEmpty
 *
 * \param vec[] Passenger
 * \param tam int size of
 * \param pIndex int* pointer to index to indicate the status
 * \return int returns -1 if it does not empty
 *
 */
int buscarPasajeroLibre(Passenger vec[], int tam, int* pIndex)
