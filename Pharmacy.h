#pragma once
//#include <iostream>
#include <string>
using namespace std;

class Pharmacy
{
private:
	int mTylenol; //t v e r m
	int mVitaminR; // convention often for private vars
	int mEstrogen; // know its not used in book but convention often used in example programs ive seen, (3 other books)
	int mRanitidine;
	int mMorphine;
	float medCost;// know its not used in book but convention often used in example programs ive seen, (3 other books)
	string medName;

public:
	long charge = 0;
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

	long getCharge(); 

	long picCharge(char c);
	//Pharmacy(float, string);
	//float getMedCost();
	//string getMedName();
};

