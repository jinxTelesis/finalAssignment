#pragma
#include <iostream> // all output taken out of classes
//#include <string>
//#include "Surgery.h"
//#include "Pharmacy.h"
#include "PatientAccount.h" // gets headers from Patient
#include <iomanip>
#include <limits>
#include <ios>

using namespace std;
//void disSurgMenu();
//void disPharMenu();
//void disMedPic();

//char getCharacter(char cha);

// cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

int main(int argc, char ** argv)
{
	//int charge = 0;
	//char userSelection;
	//const char MAX_MENU1N2 = '6';
	//const char MAX_MENU3 = '9';
	PatientAccount patientA; // composite object of phar and surgery and Patient
	int temp;
	//int totalfee;
	string tempstr;
	char tempchr;
	/////// test stuff
	cout << "no validation restart if you don't type carefully" << endl;
	cout << "didn't say it was requires on the project!" << endl;
	cout << "enter Patient id as an integer" << endl;
	cin >> temp; 
	patientA.setIdNumber(temp); // sends output to idNumber in PatientAccount
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // used to clear buffer
	cout << "patient id is " << patientA.getIdNumber() << endl;


	cout << "Enter number of days stayed at hospital as an integer " << endl;
	cin >> temp;
	patientA.setDaysInHospital(temp); // sets days in hospital for total calc
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "patient has stayed for " << patientA.getDaysInHospital() << endl;


	cout << "Enter the daily rate as an integer " << endl;
	cin >> temp;
	patientA.setDailyRate(temp); // sets daily rate for total cal
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "the daily rate is set to " << patientA.getDailyRate() << endl; // getter

	cout << "Enter a surgery type as a char" << endl;// a r l b s
	cout << "a for Amputations, r for Recapitation, l for Liver Transplants " << endl;
	cout << "b for Biospy and s for Sexual Reassignement Surgery enter another character to skip" << endl;
	cin >> tempchr;
	patientA.surg.picCharge(tempchr); // access a switch statement which adds charge to existing but not muilt by daily rate
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter a surgery type as a char" << endl;// a r l b s
	cout << "a for Amputations, r for Recapitation, l for Liver Transplants " << endl;
	cout << "b for Biospy and s for Sexual Reassignement Surgery enter another character to skip" << endl;
	cin >> tempchr;
	patientA.surg.picCharge(tempchr); // access a switch statement which adds charge to existing but not muilt by daily rate
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	cout << "Enter a surgery type as a char" << endl;// a r l b s
	cout << "a for Amputations, r for Recapitation, l for Liver Transplants " << endl;
	cout << "b for Biospy and s for Sexual Reassignement Surgery enter another character to skip" << endl;
	cin >> tempchr;
	patientA.surg.picCharge(tempchr); // access a switch statement which adds charge to existing but not muilt by daily rate
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//Tylenol Vitamin R Estrogen Ranitidine Morphine

	cout << "Enter a Drug charge for patient as a char" << endl;
	cout << "t for Tylenol, v for Vitamin R, e for Estrogen, r for Ranitidine  " << endl;
	cout << "m for morphine and any other letter to skip" << endl;
	cin >> tempchr;
	patientA.phar.picCharge(tempchr); // access a switch statement which adds charge to existing but not muilt by daily rate
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter a Drug charge for patient as a char" << endl;
	cout << "t for Tylenol, v for Vitamin R, e for Estrogen, r for Ranitidine  " << endl;
	cout << "m for morphine and any other letter to skip" << endl;
	cin >> tempchr;
	patientA.phar.picCharge(tempchr);// access a switch statement which adds charge to existing but not muilt by daily rate
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter a Drug charge for patient as a char" << endl;
	cout << "t for Tylenol, v for Vitamin R, e for Estrogen, r for Ranitidine  " << endl;
	cout << "m for morphine and any other letter to skip" << endl;
	cin >> tempchr;
	patientA.phar.picCharge(tempchr);// access a switch statement which adds charge to existing but not muilt by daily rate
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "checking out patient unless charge override " << endl;
	cout << "do you want to override current charges of " << patientA.calChargesForStay() << endl;
	cout << "y / n" << endl;
	cin >> tempchr;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (tempchr == 'y') // this if will override the normal charge mechanism and entire daily rate etc
	{
		cout << "enter number to override as an integer " << endl;
		cin >> tempchr;
		patientA.setTotalCharges(tempchr); // intential override of normal calculations
		cout << "charges overriden to " << patientA.getTotalCharges();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	else
	{
		int tempa; // normal calc adds meds each time and surgery than addes daily rate * by days stayed
		cout << "patient total charges are " << endl;
		tempa = patientA.calChargesForStay(); // this is the member function that does all the action
		cout << tempa << endl;
		cout << "enjoy your sugery " << endl;
	}
	


	system("pause");
	return 0;
}

