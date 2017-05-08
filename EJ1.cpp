/*
TP #5 Tipos de Datos ej Nº1
06/05/2017
Wierna Juan Pablo
*/

#include<iostream>

int main()
{

	int i=0;
	int s=0;
	
	for (i=0;i<100;i++)
	{
		std::cout << i << "\n";
		s=s+i;
		
	}
	std::cout << "\n" << s;
}

