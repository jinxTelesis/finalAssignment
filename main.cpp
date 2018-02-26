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
	long temp;
	//int totalfee;
	string tempStr;
	char tempChr;
	bool menuFlag = false;
	long long tempLong =1; // excessive but intentional


	/////// test stuff
	do {
		// do you need to use a get to get excess chars // test that quicky
		//cout << "no validation restart if you don't type carefully" << endl; // put in a do while with a flag set to exit and an else statement duh
		//cout << "didn't say it was requires on the project!" << endl;
		cout << "enter Patient id as a positive integer under 30000" << endl;
		cin >> temp;
		if ((temp > 0) && (temp < 30000)) // validation
		{
			menuFlag = true; // escapes while
			patientA.setIdNumber(temp); // sends output to idNumber in PatientAccount
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // used to clear buffer
			cout << "patient id is " << patientA.getIdNumber() << endl;
		}
		else
		{
			cout << "please enter valid input: a postative integer under 30000" << endl;
		}
	} while (!menuFlag); // flagging system worked
	menuFlag = false; // resets

	do {
		cout << "Enter number of days stayed at hospital as a posative integer under 1000" << endl;
		cin >> temp;
		if ((temp > 0) && (temp < 1000))
		{
			menuFlag = true; // escapes while
			patientA.setDaysInHospital(temp); // sets days in hospital for total calc
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "patient has stayed for " << patientA.getDaysInHospital() << endl;
		}
		else
		{
			cout << "please enter valid input: a postative integer under 30000" << endl;
		}

	} while (!menuFlag);
	menuFlag = false;


	do {
		cout << "Enter the daily rate as a posative integer under 1000 " << endl;
		cin >> temp;
		if ((temp > 0) && (temp < 1000))
		{
			menuFlag = true;
			patientA.setDailyRate(temp); // sets daily rate for total cal
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "the daily rate is set to " << patientA.getDailyRate() << endl; // getter
		}
		else
		{
			cout << "please enter valid input: a postative integer under 30000" << endl;
		}

	} while (!menuFlag);
	menuFlag = false;

	do { // this has more complex type checking think about this // test to a r l b s
		cout << "Enter a surgery type as a char" << endl;// a r l b s
		cout << "a for Amputations, r for Recapitation, l for Liver Transplants " << endl;
		cout << "b for Biospy and s for Sexual Reassignement Surgery enter n for no surgery" << endl;
		cin >> tempChr;
		if ((tempChr == 'a') || (tempChr == 'r') || (tempChr == 'l') || (tempChr == 'b') || (tempChr == 's') || (tempChr == 'n'))
		{
			menuFlag = true;
			patientA.surg.picCharge(tempChr); // access a switch statement which adds charge to existing but not muilt by daily rate
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}
		else
		{
			cout << "invalid input please read menu above and enter a single character" << endl;
		}
	} while (!menuFlag);
	menuFlag = false;


	do {
		cout << "Enter a surgery type as a char" << endl;// a r l b s
		cout << "a for Amputations, r for Recapitation, l for Liver Transplants " << endl;
		cout << "b for Biospy and s for Sexual Reassignement Surgery enter n for no surgery" << endl;
		cin >> tempChr;
		if ((tempChr == 'a') || (tempChr == 'r') || (tempChr == 'l') || (tempChr == 'b') || (tempChr == 's') || (tempChr == 'n'))
		{
			menuFlag = true;
			patientA.surg.picCharge(tempChr); // access a switch statement which adds charge to existing but not muilt by daily rate
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cout << "invalid input please read menu above and enter a single character" << endl;
		}


	} while (!menuFlag);
	menuFlag = false;
	
	do {
		cout << "Enter a surgery type as a char" << endl;// a r l b s
		cout << "a for Amputations, r for Recapitation, l for Liver Transplants " << endl;
		cout << "b for Biospy and s for Sexual Reassignement Surgery enter n for no surgery" << endl;
		cin >> tempChr;
		if ((tempChr == 'a') || (tempChr == 'r') || (tempChr == 'l') || (tempChr == 'b') || (tempChr == 's') || (tempChr == 'n'))
		{
			menuFlag = true;
			patientA.surg.picCharge(tempChr); // access a switch statement which adds charge to existing but not muilt by daily rate
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cout << "invalid input please read menu above and enter a single character" << endl;
		}

	} while (!menuFlag);
	menuFlag = false;


	do {
		cout << "Enter a Drug charge for patient as a char" << endl;
		cout << "t for Tylenol, v for Vitamin R, e for Estrogen, r for Ranitidine  " << endl;
		cout << "m for morphine and n for no drugs" << endl;
		cin >> tempChr;
		if ((tempChr == 't') || (tempChr == 'v') || (tempChr == 'e') || (tempChr == 'r') || (tempChr == 'm') || (tempChr == 'n'))
		{
			menuFlag = true;
			patientA.phar.picCharge(tempChr); // access a switch statement which adds charge to existing but not muilt by daily rate
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cout << "invalid input check menu above" << endl;
		}

	} while (!menuFlag);
	menuFlag = false;

	do {
		cout << "Enter a Drug charge for patient as a char" << endl;
		cout << "t for Tylenol, v for Vitamin R, e for Estrogen, r for Ranitidine  " << endl;
		cout << "m for morphine and n for no drugs" << endl;
		cin >> tempChr;
		if ((tempChr == 't') || (tempChr == 'v') || (tempChr == 'e') || (tempChr == 'r') || (tempChr == 'm') || (tempChr == 'n')) // validation
		{
			menuFlag = true;
			patientA.phar.picCharge(tempChr); // access a switch statement which adds charge to existing but not muilt by daily rate
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cout << "invalid input check menu above" << endl;
		}
	} while (!menuFlag);
	menuFlag = false;

	do {
		cout << "Enter a Drug charge for patient as a char" << endl;
		cout << "t for Tylenol, v for Vitamin R, e for Estrogen, r for Ranitidine  " << endl;
		cout << "m for morphine and n for no drugs" << endl;
		cin >> tempChr;
		if ((tempChr == 't') || (tempChr == 'v') || (tempChr == 'e') || (tempChr == 'r') || (tempChr == 'm') || (tempChr == 'n'))
		{
			menuFlag = true;
			patientA.phar.picCharge(tempChr); // access a switch statement which adds charge to existing but not muilt by daily rate
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cout << "invalid input check menu above" << endl;
		}
	} while (!menuFlag);
	menuFlag = false;

	do {
		cout << "checking out patient unless charge overriden " << endl;
		cout << "do you want to override current charges of $ " << patientA.calChargesForStay() << endl;
		cout << "y / n" << endl;
		cin >> tempChr;
		if ((tempChr == 'y') || (tempChr == 'n'))
		{
			menuFlag = true;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		
	} while (!menuFlag);
	menuFlag = false;

	 
	if (tempChr == 'y') // this if will override the normal charge mechanism and entire daily rate etc
	{																
		cout << "enter number to override as an integer under 2 million " << endl; // should make this a long
		cin >> tempLong; // this needs to be a long or // not unsigned charges to override could be negative
		if (tempLong < 2000000) // validation
		{
			patientA.setTotalCharges(tempChr); // intential override of normal calculations
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			menuFlag = true;
		}
		else
		{
			cout << "invalid input enter again" << endl;
		}
	}
	else
	{//***************************************** make this a long ?
		long long tempa; // normal calc adds meds each time and surgery than addes daily rate * by days stayed
		cout << "patient total charges are $ " << endl;
		tempa = patientA.calChargesForStay(); // this is the member function that does all the action
		cout << tempa << endl; // test if temp and cal are large enough
		cout << "enjoy your sugery " << endl;
	}
	


	system("pause");
	return 0;
}



