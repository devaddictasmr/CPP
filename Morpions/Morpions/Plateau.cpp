#include "Plateau.h"



Plateau::Plateau()
{
}


Plateau::~Plateau()
{

}

void Plateau::nouveau_plateau()
{

}

void Plateau::init_tableau()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			jeu[y][x] = '.';
		
		}
	}
}

void Plateau::afficher()
{
	
	cout << endl;
	cout << "  1 2 3 " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << '|' << jeu[i][0] << '|' << jeu[i][1] << '|' << jeu[i][2] << '|' << endl;
	}
	
	cout << endl << endl << endl;
}

int Plateau::position_ligne()
{
	int y;
	bool verif_saisi = true;

	
	while (verif_saisi == true)
	{
		cout << "sélectionner la ligne sur laquelle vous voulez placer votre marqueur " << endl;
		cin >> y;

		if (y < 1 || y > 3)
		{
			cout << "le plateau de jeu ne contient autant de ligne" << endl;
		}
		else
		{
			verif_saisi = false;
		}
	}

	return y ;
}

int Plateau::position_colonne()
{
	int x;
	bool verif_saisi = true;

	while (verif_saisi == true)
	{
		cout << "sélectionner la colonne sur laquelle vous voulez placer votre marqueur " << endl;
		cin >> x;

		if (x < 1 || x > 3)
		{
			cout << "Le plateau de jeu ne comporte pas autant de colonne" << endl;
		}
		else
		{
			verif_saisi = false;
		}
	}

	return x ;

}

bool Plateau::placement_case(int y, int x, char joueur_actuel)
{
		
	if (jeu[y][x] != '.')
	{
		cout << "cette case est prise";
		return false;
	}
	else
	{
		jeu[y][x] = joueur_actuel;
	}
}

test pour test la cmd git reset

bool Plateau::victoire(char symbole)
{
	for (int i = 0; i < 3; i++)
	{
		if ((jeu[i][0] == symbole) && (jeu[i][0] == jeu[i][1]) && (jeu[i][1] == jeu[i][2]))
		{
			return true;
		}
		
		else if ((jeu[0][i] == symbole) && (jeu[0][i] == jeu[1][i]) && (jeu[1][i] == jeu[2][i]))
		{
			return true;
		}
	}

	if ((jeu[0][0] == symbole) && (jeu[0][0] == jeu[1][1]) && (jeu[1][1] == jeu[2][2]))
		{
			return true;
		}

	else if ((jeu[2][0] == symbole) && (jeu[2][0] == jeu[1][1]) && (jeu[1][1] == jeu[0][2]))
		{
			return true;
		}

		return false;		
}

void Plateau::plateau_centraliser()
{
	bool boucle_du_jeu = true;
	char J1 = 'X';
	char J2 = 'O';
	char joueur_actuel = J1;
	int egalite = 0;
	init_tableau();

	
	while (boucle_du_jeu == true)
	{
	afficher();	
	int y = position_ligne();
	int x = position_colonne();
	
	if (placement_case(y - 1, x - 1, joueur_actuel) == false)
	{
		cout << "Veuillez selectionner une autre case\n ";
	}

	else
	{
		egalite++;
		if (victoire(joueur_actuel) == true)
		{
			cout << joueur_actuel << " a gagné" << endl;
			boucle_du_jeu = false;
		}

		else if (egalite == 9)
		{
			cout << "égalité" << endl;
			boucle_du_jeu = false;
		}

		if (joueur_actuel == J1)
		{
			cout << "J2 :";
			joueur_actuel = J2;
		}
		else
		{
			cout << "J1 :";
			joueur_actuel = J1;
		}
	}
	
	}
	
	}
	








