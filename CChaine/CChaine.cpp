#include <exception>
#include <cctype>
using namespace std;

#include "CChaine.h"

CChaine::CChaine(const char* aChaine) 
{
	cout << " je suis dans le cosntructeur" << endl;
	//Determiner la taille de la chaine
	m_uiSize = 0;
	while (aChaine[m_uiSize]!='\0')
	{
		m_uiSize++;
	}
	/*m_uiSize = strlen(aChaine);*/

	//Determiner le pointeur
	m_strCChaine = new char[m_uiSize];		//opérateur dont on passe la taille et retourne un void* 
											//==> de nimporte quelle type car c une adresse
											// On alloue m_uiSize caractères depuis le tas(heap)

	//On copie tous les caractère de aChaine dans le heap
	for (int i = 0; i < m_uiSize; i++)
	{
		m_strCChaine[i] = aChaine[i];
	}
}

CChaine::CChaine(const CChaine &test)
{
	cout << " je suis dans le constructeur de copie" << endl;
	//1: on recopie ce qui fonctionne
	this->m_uiSize = test.m_uiSize;

	//2: allocation mémoire

	m_strCChaine = new char[m_uiSize];		

	for (int i = 0; i < m_uiSize; i++)
	{
		m_strCChaine[i] = test.m_strCChaine[i];
	}
}
//void CChaine::operator=(const CChaine& LaClasse)
//{
//	//1: on recopie ce qui fonctionne
//	this->m_uiSize = LaClasse.m_uiSize;
//
//	if (this->m_strCChaine != nullptr)
//		delete[] this->m_strCChaine;
//
//	//2: allocation mémoire
//
//	m_strCChaine = new char[m_uiSize];
//
//	for (int i = 0; i < m_uiSize; i++)
//	{
//		m_strCChaine[i] = LaClasse.m_strCChaine[i];
//	}
//}

const CChaine& CChaine::operator=(const CChaine& LaClasse)
{
	if (this != &LaClasse) // si les 2objet ont la même adresse, il est inutile de faire plusieur fois le même processus
	{
		//1: on recopie ce qui fonctionne
		this->m_uiSize = LaClasse.m_uiSize;

		if (this->m_strCChaine != nullptr)
			delete[] this->m_strCChaine;

		//2: allocation mémoire

		m_strCChaine = new char[m_uiSize];

		for (int i = 0; i < m_uiSize; i++)
		{
			m_strCChaine[i] = LaClasse.m_strCChaine[i];
		}
		//return LaClasse;
	}
	// il faut retourner l’objet en lui même pas le paramètre
	return *this;	
}

//constructeur par defaut
CChaine::CChaine()
{
	cout << "je suis le constructeur par defaut" << endl;
	this-> m_strCChaine =nullptr;
	this->m_uiSize= NULL;
}

//destructeur 
CChaine::~CChaine() 
{
	if (m_strCChaine!=nullptr)
	{
		delete[] this->m_strCChaine;
	}
	cout << "je suis dans le destructeur" << endl;
}

int CChaine::getLen() {
	return m_uiSize;
}

void CChaine::show() 
{
	int x;
	for ( x = 0; x < m_uiSize; x++)
	{
		cout <<  m_strCChaine[x];
	}
	cout << endl;
}

void CChaine::upper() 
{
	for (int z = 0; z < m_uiSize; z++)
	{

		if (m_strCChaine[z] >='a' && m_strCChaine[z] <= 'z')
		{
			m_strCChaine[z] = m_strCChaine[z] - ('a' - 'A');// 32;
		}
	}
}



