#pragma once
class C_Cadre
{
private:
	int iCentreX;
	int iCentreY;
	int iLongueur;
	int iLargeur;
	char cMotif;

public:
	C_Cadre(); //constructeur

	void info() const; //recuperation info du cadre

	void perimetre() const; //calculer le perimetre

	//set nouvel valeur
	void setLarg(int n);
	void setEncrage(int x, int y);
	void setMotif(char c);
	//fin set nouvel valeur

	//recup valeur
	int colLong() const;
	int colLarg() const;
	int colEncrageX() const;
	int colEncrageY() const;
	int colMotif() const;
	//fin recup valeur

	bool IsCaree() const; //verify if the cadre is caree;

	void rotate();

};

