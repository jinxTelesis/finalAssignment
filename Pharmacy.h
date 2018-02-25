#pragma once
//#include <iostream>
#include <string>
using namespace std;

class Pharmacy
{
private:
	int mTylenol; //t v e r m
	int mVitaminR;
	int mEstrogen;
	int mRanitidine;
	int mMorphine;
	float medCost;
	string medName;

public:
	int charge = 0;
	Pharmacy(); // added
	Pharmacy(int Tyl, int Vit, int Est, int Ran, int Mor); // if you want to change default surgery values for a special sale!
	int getTyl(); // list of getters and setters to override default value for advanced users in main
	void setTyl(int tyl);
	int getVit();
	void setVit(int vit);
	int getEst();
	void setEst(int est);
	int getRanit();
	void setRanit(int ran);
	int getMorp();
	void setMorp(int mor);

	int getCharge(); // needs value first

	int picCharge(char c);
	//Pharmacy(float, string);
	//float getMedCost();
	//string getMedName();
};
