#pragma once
//#include <iostream>
#include "PatientAccount.h"
//#include "Pharmacy.h"
//#include "Surgery.h"
#include <string>

using namespace std;

PatientAccount::PatientAccount()
{
	name = "";
	idNumber = 0;
	charges = 0;
	numberDays = 1;
	dailyRate = 1;
}

PatientAccount::PatientAccount(string name, int idNumber, int dailyRate) {
	this->name = name; // told CT how to uncover not anything more about pointers
	this->idNumber = idNumber;
	this->charges = 0;
	this->numberDays = 1;
	this->dailyRate = dailyRate;
}
/*
PatientAccount(Pharmacy &phar, Surgery &surg, string name, int idNumber, int dailyrate)
{
this->idNumber = idNumber;
this->dailyrate = dailyrate;
this->name = name;
}
*/
/*
PatientAccount::PatientAccount(Surgery &surg, Pharmacy &phar, string name, int idNumber, int dailyrate)
{
// think on this
}
*/

long long PatientAccount::calChargesForStay() // won't multiply days or daily rate by rest of number
{
	charges = surg.getCharge() + phar.getCharge() + (dailyRate * numberDays); // overkill on the long long but eh
	return charges; // book says access other classes should access charges but believe intention was to change the 
	//appropriate part of charges not the variable itself which is what is done here
}

void PatientAccount::setDailyRate(int dailyRate) { // sets daily rate
	if (dailyRate > 0)
		this->dailyRate = dailyRate;
	else
		this->dailyRate = 1;
}

int PatientAccount::getDailyRate() {
	return dailyRate;
}

void PatientAccount::setDaysInHospital(int numberDays) { // sets days spent in hospital
	if (numberDays > -1)
		this->numberDays = numberDays;
	else
		numberDays = 0;
}

int PatientAccount::getDaysInHospital() {
	return numberDays;
}

void PatientAccount::setTotalCharges(long charges) { // this will override normal calculations intentional
	this->charges = charges;
}

//long long PatientAccount::getTotalCharges() {
//	return charges;
//}

void PatientAccount::setIdNumber(int idNumber) { // sets a Patient id number
	if (idNumber >= 1)
		this->idNumber = idNumber;
	else
		this->idNumber = 1;
}

int PatientAccount::getIdNumber() {
	return idNumber;
}

void PatientAccount::setGetName(string name) {
	this->name = name;
}

string PatientAccount::getName() {
	return name;
}

//void PatientAccount::print() {
//	cout << "Patient's Name: " << name << endl;
//	cout << "ID Number: " << idNumber << endl;
//}
