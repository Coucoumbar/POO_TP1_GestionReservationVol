#pragma once

#include <string>
#include <iostream>

using namespace std;

class Passager {

private:
	int id;
	string nom;
	string siege;
	double prix;

public:
	Passager(int, string, string, double);

	//Affiche les informations d’un passager.
	void afficherInformations() const;

	//Permet de comparer deux passagers à partir de leur identifiant.
	bool operator==(const Passager&) const;
	bool operator==(const int) const;

	//Permet d’afficher les informations d’un passager.
	friend ostream& operator<<(ostream&, const Passager&);
};