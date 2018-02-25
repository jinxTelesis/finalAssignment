#pragma once
//#include <iostream>
#include <string>
#include "Surgery.h"
#include "Pharmacy.h"
using namespace std;

class PatientAccount // :public Surgery/Pharmacy
{
public:
	Pharmacy phar; // composite object intentional
	Surgery surg; // composite object intentional

	PatientAccount();
	PatientAccount(string name, int idNumber, int dailyrate);
	//PatientAccount(Surgery &surg, Pharmacy&phar, string name, int idNumber, int dailyrate);
	// testing PatientAccout without default

	void setIdNumber(int idNumber);
	int getIdNumber();

	void setGetName(string name);
	string getName();

	void setDailyRate(int dailyRate);
	int getDailyRate();

	void setDaysInHospital(int numberDays);
	int getDaysInHospital();

	void setTotalCharges(int charges);
	int getTotalCharges();

	int calChargesForStay(); // right now using default

	//void print();
private:
	string name;
	int idNumber, charges, numberDays;
	int dailyRate;
};
