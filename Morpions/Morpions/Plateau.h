#pragma once
#include <iostream>
#include <string>

using namespace std;

class Plateau
{
public:
	Plateau();
	~Plateau();
	void plateau_centraliser();


private:
	int position_ligne();
	int position_colonne();
	bool placement_case(int y, int x, char joueur_actuel);
	void nouveau_plateau();
	void init_tableau();
	void afficher();
	bool victoire(char symbole);

	char jeu[3][3];
};

