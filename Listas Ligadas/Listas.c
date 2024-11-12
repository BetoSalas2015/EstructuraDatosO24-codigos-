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

int insert1(char dato)
{
	nodo *nuevo = NULL;
	nuevo = (nodo *) malloc( sizeof( nodo ) );
	if(nuevo == NULL)
	{
		printf("No hay memoria suficiente.\n");
		return 1;
	}
	nuevo->info = dato;
	nuevo->sig = raiz;
	raiz = nuevo;
}

int insertn(char dato, int n)
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
	if(n == 1) {
		nuevo->sig = raiz;
		raiz = nuevo;
	}
	else				//  La lista no está vacía
	{
		nodo *recorre = raiz;
		int cont = 1;
		while(recorre -> sig != NULL && cont < n - 1) 
		{
			recorre = recorre -> sig ;
			cont++;
		}
		nuevo -> sig = recorre -> sig; 
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

char remueve()
{	
	nodo *recorre = raiz;
	if(recorre == NULL) {
		printf("Error: No hay anda que borrar.\n");
		return '\0';
	}
	else
	{
		nodo *recorre = raiz;
		while(recorre->sig != NULL)
		{
			elimina = elimina->sig;
		}
	}

}

int main()
{
	//
	imprimeLista();
insertn('X', 1);
	insert1('R');
	insert1('o');
	insert1('b');
	insert1('e');
	insert1('r');
	insert1('t');
	insert1('o');
	
	imprimeLista();
	
	
	
	imprimeLista();
	
	return 0;
}


