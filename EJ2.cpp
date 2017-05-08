/*
TP #5 Tipos de Datos ej Nº2
07/05/2017
Wierna Juan Pablo
*/

#include<iostream>

int main()
{
	int n,prom;
	int i=0,c=0,sme=0,sma=0;
	
	for (i=0;i<50;i++)
	{

		std::cout << "Ingrese un numero\n";
		std::cin >> n;
		if(n>100)
		{
			c++;
			sma=sma+n;
		}
		if (n<-10)
			sme=sme+n;
		
	}
	if(c>0)
	{
	prom=sma/c;
	std::cout << "\nPromedio de los mayores a 100: " << prom;
	}
	else
	{
	std::cout << "\nNo hay numeros mayores a 100";
	}
	std::cout << "\nSuma de los menores que -10: " << sme;
}

