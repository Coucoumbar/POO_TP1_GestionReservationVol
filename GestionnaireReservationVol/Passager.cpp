#include "Passager.h"

void Passager::afficherInformations() const {
	cout << "Identifiant : " << id << endl
		<< "Nom : " << nom << endl
		<< "Siege : " << siege << endl
		<< "Prix : " << prix << endl;
}

bool Passager::operator==(const Passager& autrePassager) const {
	return id == autrePassager.id;
}

ostream& operator<<(ostream& out, const Passager& passager) {
	out << "[" << passager.id << "] " << passager.nom << " (Siege : " << passager.siege << " ; Prix : " << passager.prix << endl;
	return out;
}