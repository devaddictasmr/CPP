#include <iostream>
#include <string>

using namespace std;

void exo1()
{
	cout << "\t exo1" << endl << endl << endl;
	cout << "Hello world" << endl << 
		"Voici un programme illustrant l'utilisation de cout !" << endl;
}

void exo2()
{
	int perimetre, surface, largeur, longeur;

	cout << "\t exercice n°2" << endl << endl << endl;
	cout << "Calcul du perimetre: " << endl <<
		"\t formule: perimetre = (largeur + Longueur) x 2" << endl;
	cout << "Calcul de la surface du rectangle: " <<
		"\t formule : surface = longueur x largeur " << endl;

	cout << "taper la largeur : " << endl;
	cin >> largeur;
	cout << "taper la longueur: " << endl;
	cin >> longeur;

	perimetre = (largeur + longeur) * 2;
	cout << "le perimetre est de :" << perimetre << endl;

	surface = longeur * largeur;
	cout << "la surface est de :" << surface << endl;

}

void exo3()
{
	int moyenne, entier;

	cout << "\t exercice n°2" << endl << endl << endl;

	cout << "Taper 5 entiers: " << endl;
	
	cout << "taper l'entier n1 : " << endl;
	cin >> entier;
	cout << "entier n1: " << entier << endl;

	cout << "taper l'entier n2 : " << endl;
	cin >> moyenne;
	cout << "entier n2: " << moyenne << endl;

	cout << "taper l'entier n3 : " << endl;
	moyenne = entier + moyenne;
	cin >> entier;
	cout << "entier n3 : " << entier << endl;

	cout << "taper l'entier n4 : " << endl;
	moyenne = moyenne + entier;
	cin >> entier;
	cout << "entier n4: " << entier << endl;

	cout << "taper l'entier n5 : " << endl;
	moyenne = moyenne + entier;
	cin >> entier;
	cout << "entier n5: " << entier << endl;

	moyenne = moyenne + entier;
	moyenne = moyenne / 5;

	cout << "la moyenne est de: " << moyenne << endl;
}


void exo4()
{
	int a, b , c;

	cout << "\t exercice n°4" << endl << endl << endl;

	cout << "veuillez enter un entier pour A et B" << endl;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;

	cout << "A et B on respectivement leurs valeurs" << endl << 
		"A:" << a << endl << "B:" << b << endl << endl << endl << endl;

	cout << "Maintenant nous allons utiliser un swap pour intervertir les entier A et B" << endl << endl << endl;
	c = a;
	a = b;
	b = c;

	cout << "A:" << a << endl << "B:" << b << endl << endl << endl;
}

void exo5()
{
	cout << "\t exercice n°5" << endl << endl << endl;

	int HT, kilo;
	double TVA, TTC;

	cout << "taper le prix ht d'un kg de tomates " << endl;
	cin >> HT;

	cout << "taper le nombre de kilo de kilo de tomates" << endl;
	cin >> kilo;

	cout << "Taper le taux de tva" << endl;
	cin >> TVA;

	HT = HT * kilo;
	cout << "HT + kilo : " << HT << endl;
	cout << "TVA " << TVA << endl;
	TVA = TVA / 100;
	TTC = HT + TVA;
	cout << "TTC : " << TTC << endl;
	


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