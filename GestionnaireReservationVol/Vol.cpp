/*
* Fait par : Mathias Lavoie : LAVM19040400
* Date : Mardi 10 Février 2026
*/

#include "Vol.h"

int Vol::nombreVols = 0;

Vol::Vol(int numero, int capacite) {
	this->numero = numero;
	this->capacite = capacite;
	nombreVols++;
}

void Vol::afficherBillets() const {
	cout << endl << "Billets du vol " << lireNumeroVol() << " : " << endl;
	for (const Passager& passager : passagers) {
		cout << passager;
	}
}

void Vol::ajouterPassager(const Passager& nouveauPassager) {
	passagers.push_back(nouveauPassager);

	cout << "* Passager ajoute *" << endl;
}

void Vol::transfererPassagers(Vol& nouveauVol) {
	int cpt;
	int quantite = nombrePassagers();


	for (cpt = 0; cpt < quantite; cpt++)
	{
		nouveauVol += passagers.back();
		passagers.pop_back();
	}

	cout << "* " << cpt << " passagers transfere *" << endl;
}

void Vol::annulerBillet(const int id) {
	int cpt = 0;

	for (Passager& passager : passagers) {

		if (passager == id) {
			passagers.erase(passagers.begin() + cpt);
			cout << "* Billet annule *" << endl;
			break;
		}

		cpt++;
	}
}

int Vol::nombrePassagers() const {
	return passagers.size();
}

void Vol::fixerNumeroVol(const int nouveauNumero) {
	numero = nouveauNumero;

	cout << "* Numéro mis à jour *" << endl;
}

int Vol::lireNumeroVol() const {
	return numero;
}

int Vol::lireNombreVols() {
	return nombreVols;
}

void Vol::operator+=(const Passager& nouveauPassager) {
	if (passagers.size() < capacite) { ajouterPassager(nouveauPassager); }
	else { cout << "* Espace insufisant : Vol plein *" << endl; }
}

ostream& operator<<(ostream& out, const Vol& vol) {
	out << endl << "Information du vol :" << endl
		<< "Numero : " << vol.lireNumeroVol() << endl
		<< "Capacite : " << vol.capacite << endl
		<< "Passagers : " << vol.nombrePassagers() << endl;

	for (const Passager& passager : vol.passagers) {
		cout << passager;
	}

	return out;
}