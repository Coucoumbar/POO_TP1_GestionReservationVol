/*
* Fait par : Mathias Lavoie : LAVM19040400
* Date : Mardi 10 Février 2026
*/

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
	static int nombreVols;

public:
	Vol(int, int);

	//Affiche les billets réservés pour le vol.
	void afficherBillets() const;

	//Ajoute un passager au vol.
	void ajouterPassager(const Passager&);

	void transfererPassagers(Vol&);

	//Permet d'annuler un billet réservé par un passager.
	void annulerBillet(const int);

	//Retourne le nombre actuel de passagers.
	int nombrePassagers() const;

	//Modifie le numéro du vol.
	void fixerNumeroVol(const int);

	//Retourne le numéro actuel du vol.
	int lireNumeroVol() const;

	static int lireNombreVols();

	//Permet d'ajouter un passager au vol en respectant la maximale du vol et en évitant les doublons.
	void operator+=(const Passager&);

	//Permet d’afficher les informations du vol et la liste de ses passagers.
	friend ostream& operator<<(ostream&, const Vol&);
};