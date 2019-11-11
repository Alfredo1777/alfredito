#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numero[5];
	int suma;
	for (int i = 0; i <= 5; i++)
	{
		cout << "Introduce de manera gentil su numero: ";
		cin >> numero[i];
		suma = suma + numero[i];
	}
	cout << "La suma es: " << suma;
	return 0;
}
