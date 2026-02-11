/*
* Fait par : Mathias Lavoie : LAVM19040400
* Date : Mardi 10 Février 2026
*/

#include "Vol.h"
#include "Passager.h"

#pragma region Utils
void info(string text) {
	cout << "* " << text << " *" << endl;
}

void separator() {
	cout << endl << "--------------------------------------------------------------------------------" << endl << endl;
}

void space() {
	cout << endl;
}
#pragma endregion

int main()
{
	info("Declaration du premier vol");
    Vol* vol1 = new Vol(1, 10);
	info("Vol declare");

	separator();

	info("Ajout de 10 passagers");
	for (int cpt = 1; cpt <= 10; cpt++)
	{
		vol1->ajouterPassager(Passager(cpt, "Passager #" + to_string(cpt), "A" + to_string(cpt), 10.50));
	}

	cout << *vol1;

	separator();

	info("Declaration d'un passager de test");
	Passager* test = new Passager(11, "Passager Test", "T1", 3);
	info("Passager declare");

	space();

	test->afficherInformations();

	space();

	info("Ajout du passager dans un vol plein");
	*vol1 += *test;

	space();

	info("Annulation d'un billet");
	vol1->annulerBillet(10);

	space();

	info("Ajout du passager dans un vol non-plein");
	*vol1 += *test;
	delete test;

	cout << *vol1;

	separator();

	info("Declaration du deuxieme vol");
	Vol* vol2 = new Vol(2, 15);
	info("Vol declare");

	space();

	info("Transfert du vol #1 au vol #2");
	vol1->transfererPassagers(*vol2);
	cout << *vol1;
	cout << *vol2;

	separator();

	info("Creation de 2 passagers");
	Passager* passager1 = new Passager(123, "Bob", "Aucun", 0);
	Passager* passager2 = new Passager(456, "Bernard", "Aucun", 0);
	space();
	passager1->afficherInformations();
	space();
	passager2->afficherInformations();

	space();

	info("Test de comparaison des passagers");
	space();
	bool result;
	info("Comparaison de bob avec bernard");
	result = (passager1 == passager2);
	cout << boolalpha;
	cout << "Ils ont le meme id? : " << result << endl;
	space();
	info("Comparaison de bob avec lui meme");
	result = (passager1 == passager1);
	cout << "Ils ont le meme id? : " << result << endl;

	separator();

	info("Nombre total de vol declare : " + to_string(Vol::lireNombreVols()));
}
