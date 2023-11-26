#ifndef ARBOLCLIENTE_H_INCLUDED
#define ARBOLCLIENTE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "ArregloDeCuentas.h"

#define DIM 20
#define DA 3

typedef struct _nodoArbolCliente
{

    stCliente Dato;
    celdaCuentas * arregloCuentas[DA];

    struct _nodoArbolCliente *izq;
    struct _nodoArbolCliente *der;

} nodoArbolCliente;

nodoArbolCliente * inicArbol ();
nodoArbolCliente * crearNodoArbol (stCliente dato);
nodoArbolCliente* agregarNodoArbol (nodoArbolCliente * arbol, nodoArbolCliente * nuevo);
nodoArbolCliente * buscarClienteXdni (nodoArbolCliente * arbol, int Dni);
void inOrder (nodoArbolCliente * arbol);



#endif // ARBOLCLIENTE_H_INCLUDED
