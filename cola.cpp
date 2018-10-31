#include <iostream>
#include <stdlib.h>     
#include <time.h>      
using namespace std;

typedef struct _nodo {
   int dato;
   struct _nodo *siguiente;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Cola;

int main()
{
    int i, Numero;
    srand(time(NULL));

    for(i = 1; i <= 10; i++)
    {
        Numero = 1 + rand() % (100 - 1);
        cout << Numero << endl;
    }

    return 0;
}
