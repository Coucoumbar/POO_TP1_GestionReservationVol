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

	cout << *vol1;

	separator();

	info("Declaration du deuxieme vol");
	Vol* vol2 = new Vol(2, 15);
	info("Vol declare");


}
