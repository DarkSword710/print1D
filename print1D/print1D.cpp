// print1D.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

//Para arrays muy grandes es mas eficiente usar punteros
void print0pt(int a[], int length)
{
	int *x = a;
	int *fin = &a[length];
	while (x < fin)
	{
		std::cout << *x << " " << std::endl;
		x++; //las direcciones de memoria van de 4 en 4 pero como x es un puntero el hecho de incrementar, ya considera el tipo
	}
}

int main()
{
	int scores[] = { 84, 92, 76, 81, 56 };
	print0pt(scores, 5);
    return 0;
}

