#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

bool change( int &, int & );
bool change( double &, double & );

int main()
{
	srand(( int ) time( 0 ));
	int valor1 = rand() % 10 + 1;
	int valor2 = rand() % 10 + 1;
	int valor3 = rand() % 10 + 1;
	int valor4 = rand() % 10 + 1;
	int valor5 = rand() % 10 + 1;
	const int NITER = 5;
	int count = 0;
	
	cout << "Ordenar valores por bubble sort sem uso de vetor!\n\n";
	cout << "Valores gerados aleatoriamente: " << valor1 << "  " << valor2 << "  " << valor3 << "  " << valor4 << "  " << valor5 << '\n';
	
	for ( int i = 0; i < NITER-1; i++ )
	{
		if ( change( valor1, valor2 ) )
			count++;
		if ( change( valor2, valor3 ) )
			count++;
		if ( change( valor3, valor4 ) )
			count++;
		if ( change( valor4, valor5 ) )
			count++;
	}
	
	cout << "\nValores em ordem crescente: " << valor1 << "  " << valor2 << "  " << valor3 << "  " << valor4 << "  " << valor5 << '\n';
	cout << "\nN" << char(163) << "mero de trocas feitas: " << count << '\n';
}

bool change( int &a, int &b )
{

	int temp;
	if ( a > b )
	{
		temp = a;
		a = b;
		b = temp;
		
		return true;
	}
	else return false;
}

bool change( double &a, double &b )
{
	
	double temp;
	if ( a > b )
	{
		temp = a;
		a = b;
		b = temp;
		
		return true;
	}
	else return false;
}