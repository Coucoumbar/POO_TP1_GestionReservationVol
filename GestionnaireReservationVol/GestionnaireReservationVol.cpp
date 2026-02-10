// GestionnaireReservationVol.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Vol.h"
#include "Passager.h"

//#include <iostream>
//using namespace std;

int main()
{
    Vol* vol1 = new Vol(1, 10);
    Vol* vol2 = new Vol(2, 20);

	for (int cpt = 1; cpt <= 10; cpt++)
	{
		vol1->ajouterPassager(Passager(cpt, "Passager #" + to_string(cpt), "A" + to_string(cpt), 10.50));
	}

	cout << *vol1;

	Passager* test = new Passager(1, "Test", "A4", 3);

	*vol1 += *test;

	vol1->annulerBillet(10);

	delete test;

	test = new Passager(10, "Passager #10", "A10", 11.50);

	*vol1 += *test;

	cout << *vol1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
