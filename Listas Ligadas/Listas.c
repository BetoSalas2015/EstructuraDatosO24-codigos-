#include <malloc.h>

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

int main()
{
	nodo variable;
	return 0;
}