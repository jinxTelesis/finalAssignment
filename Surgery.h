#pragma once
#include <string>
using namespace std;

class Surgery
{
private:

	//string mSurgeryType;
	//string mAmputation; // 1st surgery
	//string mRecapitation; // 2nd surgery
	//string mSexualReassignement; // 3rd surgery
	//string mBiopsy; // 4th surgery
	//string mLivertr; // 5th surgery
	int mAmpCost;
	int mRecapCost;
	int mSrsCost;
	int mBiopCost;
	int mLiverTrCost;
public:
	int charge = 0;

	Surgery(); // added
	Surgery(int Amp, int Recap, int Srs, int Bio, int LiverTr);
	int getAmp(); // getters and setters to override defaults in main if desired
	void setAmp(int amp);
	int getRecap();
	void setRecap(int recap);
	int getSrs();
	void setSrs(int recap);
	int getBiospy();
	void setBiospy(int bio);
	int getLiverTr();
	void setLiverTr(int liv);
	int getCharge();

	int picCharge(char c);
	//float getcost(); 
	//string getsurgerytype(); 
	//void getSurgerydisplay(float& totalcost1); 
};

