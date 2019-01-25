#include <iostream>
#include <string>

using namespace std;

const int SENTINELLE = 0;
const int ABONNEMENT = 25;

float montant(int kwh);

int main()
{
	float total = 0;
	int nb_clients = 0;


	bool entreeClient = true;
	while(entreeClient)
	{
		int idClient;
		int kwhClient;
		cout << "No client: ";
		cin >> idClient;
		cout << "Consommation(kWh): ";
		cin >> kwhClient;
		if(idClient == 0)
		{
			entreeClient = false;
		}
		else
		{
			total += montant(kwhClient);
			nb_clients++;
		}

	}
	cout << "Nombre de clients entrés: " << nb_clients << endl;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout << "Montant total facturé: " << total << "$" << endl;
	return 0;
}


float montant(int kwh)
{
	float montant;
	if(kwh <= 100)
	{
		montant = kwh * 0.5f;
	}
	else if(kwh <= 250)
	{
		montant = 50.0f + (kwh - 100) * 0.35f;
	}
	else
	{
		montant = 102.5f + (kwh - 250) * 0.2f;
	}
	return montant + ABONNEMENT;
}
