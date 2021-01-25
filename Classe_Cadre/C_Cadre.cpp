#include "C_Cadre.h"
#include <stdio.h>
#include <iostream>
using namespace std;

C_Cadre::C_Cadre()
{
	this->iCentreX = 10;
	this->iCentreY = 5;
	this->iLargeur = 5;
	this->iLongueur = 2*iLargeur;
	this->cMotif = '*';
}

void C_Cadre::info() const
{
	cout << "Point d'encrage: X: " << this->iCentreX <<"  Y: " << this->iCentreY << endl;
	cout << "Largeur: " << this->iLargeur << endl;
	cout << "Longueur: " << this->iLongueur << endl;
	cout << "Motif: " << this->cMotif << endl;
}

void C_Cadre::perimetre() const
{
	int perimetre;
	perimetre = this->iLargeur * 2 + this->iLongueur * 2;

	cout << "Le perimetre de ce cadre: " << perimetre << endl;
}


// set new value for this Class

void C_Cadre::setLarg(int n)
{
	this->iLargeur = n;
}
void C_Cadre::setEncrage(int x, int y)
{
	this->iCentreX = x;
	this->iCentreY = y;
}
void C_Cadre::setMotif(char c)
{
	this->cMotif = c;
}
//end Set

//collect value from this Class

int C_Cadre::colEncrageX() const
{
	return this->iCentreX;
}
int C_Cadre::colEncrageY() const
{
	return this->iCentreY;
}
int C_Cadre::colLarg() const
{
	return this->iLargeur;
}
int C_Cadre::colLong() const
{
	return this->iLongueur;
}
int C_Cadre::colMotif() const
{
	return this->cMotif;
}
//end Collect value

bool C_Cadre::IsCaree() const //verify if the cadrte is caree
{
	if (this->iLargeur == this->iLongueur)
	{
		cout << "le cadre est un caree" << endl;
		return true;
	}
	else
	{
		cout << "le cadre n'est pas un caree" << endl;
		return false;
	}
}

void C_Cadre::rotate() //rotate the cadre
{

}
