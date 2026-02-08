#include "Vol.h"

void Vol::afficherBillets() const {
	cout << "Billets du vol " << lireNumeroVol() << " : " << endl;
	for (const Passager& passager : passagers) {
		cout << passager;
	}
}

void Vol::ajouterPassager(const Passager& nouveauPassager) {
	passagers.push_back(nouveauPassager);


	cout << "Passager ajouté!" << endl;
}

void Vol::annulerBillet(const Passager& annulation) {
	int cpt = 0;

	for (Passager& passager : passagers) {

		if (annulation == passager) {
			passagers.erase(passagers.begin() + cpt);
			cout << "Billet annulé!" << endl;
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

	cout << "Numéro changé!" << endl;
}

int Vol::lireNumeroVol() const {
	return numero;
}

void Vol::operator+=(const Passager& nouveauPassager) {
	if (passagers.size() < capacite) { ajouterPassager(nouveauPassager); }
	else { cout << "Espace insufisant!" << endl; }
}

ostream& operator<<(ostream& out, const Vol& vol) {
	out << "Numéro : " << vol.lireNumeroVol() << endl
		<< "Capacité : " << vol.capacite << endl
		<< "Passagers :" << endl;

	vol.afficherBillets();

	return out;
}