// Test7.cpp

#include <iostream>
#include "U:\2eme\CChaine\CChaine\CChaine.h"
using namespace std;

int main()
{
	CChaine chaine1 = "Exemple de programme... !";
	CChaine chaine3;
	chaine3 = chaine1;
	chaine3.upper();
	cout << "Chaine1 = "; chaine1.show(); cout << endl;
	cout << "Chaine3 = "; chaine3.show(); cout << endl;

	CChaine chaine2;
	chaine2 = " Exemple de programme... !";
	cout << "Chaine2 = "; chaine2.show(); cout << endl;
}

