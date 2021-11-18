//============================================================================
// Name        : minimo_lista.cpp
// Author      : Raúl Sosa
// Version     :
// Copyright   : Copyleft
// Description : Iterative and recursive algorithms for minimum value from a list.
//============================================================================

#include <iostream>

using namespace std;

//int * minimoIterativo(int *,int);
int  minimoRecursivo(int *,int);
int * obtenerSlice(int *,int,int,int);

int main() {
	int lista[] {-10,100,1,20,-1,19};

	int var = minimoRecursivo(lista,6);
	cout <<  var;
	return 0;
}

int  minimoRecursivo(int *lista ,int tope){
	// Casos base: se resuelven de inmediato.
	if(tope == 1){
		return lista[0];
	}
	else if(tope == 2){
		return lista[0] < lista[1] ? lista[0]  : lista[1];
	}
	else{
	/* Caso recursivo
	   Devuelvo el minimo entre el de la llamada actual y el último elemento de la
	   lista de la llamada anterior
	*/
		return minimoRecursivo(obtenerSlice(lista,0,tope-1,tope),tope-1) < lista[tope-1] ? minimoRecursivo(obtenerSlice(lista,0,tope-1,tope),tope-1) : lista[tope-1];
	}
}

int * obtenerSlice(int *lista,int indiceInicial,int indiceFinal,int n){
	// Puntero que apunta a la dirección del array que queremos que sea el ppio del slice
	int i;
    int *pslice = new int[indiceFinal-indiceInicial];
    int *aux;

	aux = lista+indiceInicial;
	for(i=0;i<indiceFinal-indiceInicial;i++){
		*(pslice + i) = *(aux + i);
	}
	return pslice;
}

