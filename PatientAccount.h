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

	void setName(string name);
	string getName();

	void setDailyRate(int dailyRate);
	int getDailyRate();

	void setDaysInHospital(int numberDays);
	int getDaysInHospital();
										// some validation set in main for this condition
	void setTotalCharges(long charges); // intentional that input to charges is less than the get// ment for calcharges function // realize might trunk
	//long long getTotalCharges();

	long long calChargesForStay(); // right now using default

	//void print();
private:
	string name;
	int idNumber, numberDays;
	long long charges;
	int dailyRate;
};

