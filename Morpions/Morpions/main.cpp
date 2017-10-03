#include <iostream>
#include <string>
#include "Plateau.h"

int main()
{
	Plateau p;
	char choix;
	bool nouveau_jeu = false;

	while (nouveau_jeu == false)
	{
		p.plateau_centraliser();
		cout << "voulez vous continuer à jouer (O/N)" << endl;
		cin >> choix;
		if (choix == 'O' || choix == 'o')
		{
			
			nouveau_jeu = false;
		}
		else if (choix == 'N' || choix == 'n' )
		{
			cout << "le jeux va s'arrêté" << endl;
			nouveau_jeu = true;
		}
	}

	system("PAUSE");
	return 0;
}