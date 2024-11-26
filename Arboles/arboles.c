#include <stdio.h>

struct Nodo 
{
	char info;
	struct Nodo *left;
	struct Nodo *right;
	struct Nodo *parent;
};

typedef struct Nodo nodo;

nodo *makeTree(char dato)
{
	nodo *nuevo = NULL;
	nuevo = (nodo *) malloc( sizeof(nodo) );
	nuevo->parent = NULL;
	nuevo->left = NULL;
	nuevo->right = NULL;
	nuevo->info = dato;
	return nuevo;
}

char info(nodo *p)
{
	return p->info;
}

nodo *left(nodo *p)
{
	return p->left;
}

nodo *right(nodo *p)
{
	return p->right;
}

int main()
{
	nodo *p;
	nodo *raiz = makeTree('A');
	raiz->left = makeTree('B');
	raiz->right = makeTree('C'); 
	p = left(raiz);
	p->left = makeTree('D');
	p->right = makeTree('E');
	p = rigth(raiz);
	p->left = makeTree('F');
	p->right = makeTree('G');
}








