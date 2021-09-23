// Test5.cpp 

#include <iostream>
#include "U:\2eme\CChaine\CChaine\CChaine.h"
using namespace std;

void main()
{
	// version 5.1
	CChaine* ptrpage = new CChaine;
	delete(ptrpage);		//à chaque new il faut faire appel à un delete pour avoir le destructeur

	// version 5.2

	CChaine* ptrpage = new CChaine[5];
	delete[] ptrpage;		//même chose

	// version 5bis

	for (;;) {
		CChaine* ptrpage = new CChaine[10000];
		delete[] ptrpage;
	}
}

