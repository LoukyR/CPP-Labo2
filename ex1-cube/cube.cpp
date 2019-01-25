/*
 * cube.cpp
 *
 *  Created on: 2014-01-17
 *      Author: theud1
 */

#include <iostream>
using namespace std;

int main()
{

	/* Traduction de l'algorithme en C++
	 * La d�claration des variables pr�sentes dans votre algorithme doit �tre faite le plus pr�s de leur utilisation
	 * ...� compl�ter...*/

	int n;
	cin >> n;
	// Assertion: n > 0

	int cube = n*n*n;
	int s = 0;
	int p = 1;
	int k = 1;

	while(s != cube)
	{
		if(s > cube)
		{
			s = s - (2*k-1);
			k++;
		}
		if(s < cube)
		{
			s = s + (2*p-1);
			p++;
		}
	}

	int premier = 2*k-1;
	int dernier = 2*(p-1)-1;
	cout << cube << "=";
	k = premier;

	while(k<dernier)
	{
		cout << k << "+";
		k = k + 2;
	}
	cout << dernier;
	//Assertion: affichage du devéloppement du cube de n est une série de nb impairs consécutifs.

	return 0;
}

