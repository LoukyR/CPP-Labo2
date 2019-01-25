#include <iostream>
#include <string>

using namespace std;

int main()
{
	string espace = "  ";
	string etoile = "* ";

	int etages;
	cout << "Combien de lignes? ";
	cin >> etages;

	for(int i = 1; i <= etages; i++)
	{
		for(int j = 1;j <= (etages-i);j++)
		{
			cout << espace;
		}
		for(int k = 1;k<=(2*i-1);k++)
		{
			cout << etoile;
		}
		cout << endl;
	}

	return 0;
}
