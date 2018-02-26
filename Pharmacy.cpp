#pragma once
#include "Pharmacy.h"
#include <iostream>

Pharmacy::Pharmacy() // default constructor
{
	mTylenol = 20;
	mVitaminR = 5000;
	mEstrogen = 2000;
	mRanitidine = 10000;
	mMorphine = 300;
}

Pharmacy::Pharmacy(int Tyl, int Vit, int Est, int Ran, int Mor) // overloaded constructor to override default costs
{
	mTylenol = Tyl; //Tylenol Vitamin R Estrogen Ranitidine Morphine
	mVitaminR = Vit;
	mEstrogen = Est;
	mRanitidine = Ran;
	mMorphine = Mor;
}

int Pharmacy::getTyl() // list of getters and setters with limited validation 
{
	return mTylenol;
}

void Pharmacy::setTyl(int tyl)
{
	if (tyl > 1)
		mTylenol = tyl;
	else
		mTylenol = 1;
}


int Pharmacy::getVit()
{
	return mVitaminR;
}


void Pharmacy::setVit(int vit)
{
	if (vit > 1)
		mVitaminR = vit;
	else
		mVitaminR = 1;// list of getters and setters with limited validation
}


int Pharmacy::getEst()
{
	return mEstrogen;
}

void Pharmacy::setEst(int est)
{
	if (est > 1)
		mEstrogen = est;
	else
		mEstrogen = 1;
}


int Pharmacy::getRanit()
{
	return mRanitidine;
}

void Pharmacy::setRanit(int ran)
{
	if (ran > 1)
		mRanitidine = ran;
	else
		mRanitidine = 1;
}

int Pharmacy::getMorp()
{
	return mMorphine;// list of getters and setters with limited validation
}

void Pharmacy::setMorp(int mor)
{
	if (mor > 1)
		mMorphine = mor;
	else
		mMorphine = 1;
}

long Pharmacy::picCharge(char c)// this adds charge for drugs to exist drug charge will not multiply by daily rate
{
	char cTemp;   
	//int charge;
	cTemp = tolower(c);
	long tempcharge = charge;

	switch (cTemp)
	{
		case 't': charge = mTylenol;//Tylenol Vitamin R Estrogen Ranitidine Morphine
			charge += tempcharge;
			cout << "you are being charged for Tylenol" << endl;
			return charge;

		case 'v': charge = mVitaminR;
			charge += tempcharge;
			cout << "you are being charged for Vitamin R" << endl;
			return charge;

		case 'e': charge = mEstrogen;
			charge += tempcharge;
			cout << "you are being charged for Estrogen " << endl;
			return charge;

		case 'r': charge = mRanitidine;
			charge += tempcharge;
			cout << "you are being charged for Ranitidine " << endl;
			return charge;

		case 'm': charge = mMorphine;
			charge += tempcharge;
			cout << "you are being charged for Morphine " << endl;
			return charge;

		default:
			return charge;
	}

}

long Pharmacy::getCharge()
{
	return charge;
}

//float Pharmacy::getMedCost()
//{
//	cout << "Please enter the price of the medication: $";
//	cin >> medCost;
//
//	return medCost;
//}

//string Pharmacy::getMedName()
//{
//	cout << "Please enter the name of the medication: ";
//	getline(cin, medName);
//
//	return medName;
//}
