#include <malloc.h>
#include <stdio.h>

struct Nodo 
{ 
	char info;
	struct Nodo *sig;
};

typedef struct Nodo nodo;

nodo *raiz = NULL;

int isEmpty()
{
	if(raiz == NULL)
		return 1;
	else
		return 0;
}

int insert(char dato)
{
	nodo *nuevo = NULL;
	nuevo = (nodo *) malloc( sizeof( nodo ) );
	if(nuevo == NULL)
	{
		printf("No hay memoria suficiente.\n");
		return 1;
	}
	nuevo->info = dato;
	nuevo->sig = NULL;
	if( isEmpty() )
	{					//  La lista está vacía
		raiz = nuevo;
	}
	else				//  La lista no está vacía
	{
		nodo *recorre = raiz;
		while(recorre -> sig != NULL) 
		{
			recorre = recorre -> sig ;
		}
		recorre -> sig = nuevo;
	}
}

void imprimeLista() 
{
		nodo *recorre = raiz;
		while(recorre != NULL) 
		{
			printf("%c,", recorre -> info);
			recorre = recorre -> sig ;
		}
		putchar('\n');
}

int main()
{
	
	imprimeLista();
	
	insert('R');
	insert('o');
	insert('b');
	insert('e');
	insert('r');
	insert('t');
	insert('o');
	
	imprimeLista();
	
	return 0;
}


