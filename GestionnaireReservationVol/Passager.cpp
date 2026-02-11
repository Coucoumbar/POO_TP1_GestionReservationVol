/*
* Fait par : Mathias Lavoie : LAVM19040400
* Date : Mardi 10 Février 2026
*/

#include "Passager.h"

Passager::Passager(int id, string nom, string siege, double prix) {
	this->id = id;
	this->nom = nom;
	this->siege = siege;
	this->prix = prix;
}

void Passager::afficherInformations() const {
	cout << "Identifiant : " << id << endl
		<< "Nom : " << nom << endl
		<< "Siege : " << siege << endl
		<< "Prix : " << prix << "$" << endl;
}

bool Passager::operator==(const Passager& autrePassager) const {
	return id == autrePassager.id;
}
bool Passager::operator==(const int autreId) const {
	return id == autreId;
}

ostream& operator<<(ostream& out, const Passager& passager) {
	out << "[Id:" << passager.id << "] " << passager.nom << " (Siege : " << passager.siege << " || Prix : " << passager.prix << "$)" << endl;
	return out;
}