#include <iostream>
#include <string>

using namespace std;

void exo1()
{
	cout << "\t exo 1" << endl;

	int entier;

	cout << "Veuiller entrer un entier entre 56 et 78 " << endl;
	cin >> entier;

	if (entier >= 56 && entier <= 78)
	{
		cout << "GAGNE" << endl;
	}

	else
	{
		cout << "PERDU" << endl;
	}
}

void exo2()
{
	cout << "\t exo 2" << endl;

	for (int i = 8; i <= 23; i++)
	{
		cout << i << endl;
	}
}

void exo3()
{
	int i = 8;

	while (i <= 23)
	{
		cout << i << endl;
		i++;
	}
}

void exo4()
{
	int entier, somme = 0;

	for (int i = 0; i < 10; i++)
	{		
		cout << "taper 10 entier " << endl;
		cin >> entier;
		somme = somme + entier;
		cout << "somme: " << somme << endl;
	}
}

void exo5()
{
	int entier, plus_petit;

	for (int i = 1; i < 10; i++)
	{
		cout << "taper 10 entiers" << endl;
		cin >> entier;
		
		if (i == 1)
		{
			plus_petit = entier;
		}

		if (plus_petit > entier)
		{
			plus_petit = entier;
		}

		cout << "l'entier le plus petit est: " << plus_petit << endl;
	}

}

int main(void)
{
	//exo1();
	//exo2();
	//exo3();
	//exo4();
	exo5();
	system("PAUSE");
	return 0;
}