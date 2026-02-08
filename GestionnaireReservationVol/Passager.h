#pragma once

#include <string>
#include <iostream>

using namespace std;

class Passager {

private:
	string nom;
	int id;
	string siege;
	double prix;

public:
	//Passager(string, int, string, double);
	//~Passager();

	//Affiche les informations d’un passager.
	void afficherInformations() const;

	//Permet de comparer deux passagers à partir de leur identifiant.
	bool operator==(const Passager&) const;

	//Permet d’afficher les informations d’un passager.
	friend ostream& operator<<(ostream&, const Passager&);
};