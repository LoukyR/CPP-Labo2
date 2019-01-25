#include <iostream>
#include <string>

using namespace std;

int main()
{

	int nombre;
	string phrase;
	cout << "Entrez un nombre" << endl;
	cin >> nombre;
	//cin.ignore();
	cin.ignore(10000, '\n');
	cout << "Entrez une phrase comprenant des espaces" << endl;
	getline(cin, phrase);
	cout << phrase << endl;
	return 0;
}
