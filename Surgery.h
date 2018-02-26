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
	long mAmpCost;
	long mRecapCost;
	long mSrsCost;
	long mBiopCost;
	long mLiverTrCost;
public:
	long charge = 0;

	Surgery(); // added
	Surgery(long Amp, long Recap, long Srs, long Bio, long LiverTr); // realize unsigned better performance but long is easier to type in UML!
	long getAmp(); // getters and setters to override defaults in main if desired
	void setAmp(long amp);
	long getRecap();
	void setRecap(long recap);
	long getSrs();
	void setSrs(long recap);
	long getBiospy();
	void setBiospy(long bio);
	long getLiverTr();
	void setLiverTr(long liv);
	
	long getCharge();

	long picCharge(char c);
	//float getcost(); 
	//string getsurgerytype(); 
	//void getSurgerydisplay(float& totalcost1); 
};


