#pragma once

#include "Passager.h"
#include <vector>
#include <iostream>

using namespace std;

class Vol {

private:
	int numero;
	int capacite;
	vector<Passager> passagers;

public:
	//Vol(int, int);
	//~Vol();

	//Affiche les billets réservés pour le vol.
	void afficherBillets() const;

	//Ajoute un passager au vol.
	void ajouterPassager(const Passager&);

	//Permet d'annuler un billet réservé par un passager.
	void annulerBillet(const Passager&);

	//Retourne le nombre actuel de passagers.
	int nombrePassagers() const;

	//Modifie le numéro du vol.
	void fixerNumeroVol(const int);

	//Retourne le numéro actuel du vol.
	int lireNumeroVol() const;

	//Permet d'ajouter un passager au vol en respectant la maximale du vol et en évitant les doublons.
	void operator+=(const Passager&);

	//Permet d’afficher les informations du vol et la liste de ses passagers.
	friend ostream& operator<<(ostream&, const Vol&);
};