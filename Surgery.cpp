#pragma once
#include "Surgery.h"
#include <iostream>
#include <ctype.h>

Surgery::Surgery() // default constructor
{
	//mSurgeryType =""; // remove
	//mAmputation = "Amputation"; // 1st surgery
	//mRecapitation = "hope you enjoyed your Recapitation"; // 2nd surgery
	//mSexualReassignement = "Sexual Reassignement"; // 3rd surgery
	//mBiopsy ="Biopsy"; // 4th surgery
	//mLivertr ="Liver Transplant"; // 5th surgery
	mAmpCost = 1000;
	mRecapCost = 100000;
	mSrsCost = 70000;
	mBiopCost = 300;
	mLiverTrCost = 5000;
}

Surgery::Surgery(long Amp, long Recap, long Srs, long Bio, long LiverTr) // overloaded not used in main
{
	//mSurgeryType = ""; // remove
	//mAmputation = "Amputation"; // 1st surgery
	//mRecapitation = "hope you enjoyed your Recapitation"; // 2nd surgery
	//mSexualReassignement = "Sexual Reassignement"; // 3rd surgery
	//mBiopsy = "Biopsy"; // 4th surgery
	//mLivertr = "Liver Transplant"; // 5th surgery
	mAmpCost = Amp;
	mRecapCost = Recap;
	mSrsCost = Srs;
	mBiopCost = Bio;
	mLiverTrCost = LiverTr;
}

long Surgery::getAmp() // getters and setters with some validation
{
	return mAmpCost; // can set surgery and medication costs in main for advanced users
}

long Surgery::getRecap()
{
	return mRecapCost;
}

long Surgery::getSrs()
{
	return mSrsCost;
}

long Surgery::getBiospy()
{
	return mBiopCost;
}

long Surgery::getLiverTr()
{
	return mLiverTrCost;
}

void Surgery::setAmp(long amp)
{
	if (amp > 1)
		mAmpCost = amp;
	else
		mAmpCost = 1;
}

void Surgery::setRecap(long recap)
{
	if (recap > 0)
		mRecapCost = recap;
	else
		mRecapCost = 1;
}

void Surgery::setSrs(long srs)
{
	if (srs > 0)
		mSrsCost = srs;
	else
		mSrsCost = 1;
}

void Surgery::setBiospy(long bio)
{
	if (bio > 0)
		mBiopCost = bio;
	else
		mBiopCost = 1;
}

void Surgery::setLiverTr(long liv)
{
	if (liv > 0)
		mLiverTrCost = liv;
	else
		mLiverTrCost = 1;
}

long Surgery::picCharge(char c) // a r l b s
{
	char cTemp;
	cTemp = tolower(c);
	long tempcharge = charge; // picks a surgery to charge to adds to existing charge for sugery

	switch (cTemp)
	{
		case 'a': charge = mAmpCost;
			cout << "you're being charged for an Amputation" << endl;
			charge += tempcharge; // will add it to previous charge
			return charge;


		case 'r': charge = mRecapCost;
			cout << "you're being charged for a Recapitation" << endl;
			charge += tempcharge;
			return charge;


		case 'l': charge = mLiverTrCost;
			cout << "you're being charged for a liver transplant " << endl;
			charge += tempcharge;
			return charge;


		case 'b': charge = mBiopCost;
			cout << "you're being charged for a biopsy" << endl;
			charge += tempcharge;
			return charge;


		case 's': charge = mSrsCost;
			cout << "You're being charged for sexual reassignment surgery " << endl;
			charge += tempcharge;
			return charge;


		default:
			return charge;
	}

}


long Surgery::getCharge() // returns total charge
{
	return charge;
}
/*
float Surgery::getcost()
{
cout << "enter cost of surgery: ";
cin >> surgerycost;
return surgerycost;
}
std::string Surgery::getsurgerytype() {
std::cout << "type of surgery: ";
std::cin.ignore(std::numeric_limits<std::streamsize>::max());
std::getline(std::cin, surgerytype);
return surgerytype;
}
void Surgery::getSurgerydisplay(float& totalcost1) //setters
{
Surgery patient(getcost(), getsurgerytype());
totalCost1 = surgerycost;
cout << "what type of surgery?" << surgerytype << endl;
cout << "cost of surgery : " << surgerycost << endl;
cout << "total: " << totalcost1 << endl;
cout << "\n";
}
*/

