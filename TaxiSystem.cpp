#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;


void printTerms() {
	char ans;
	cout << "\n\nTerms and Conditions :\n\n";
	cout << "These are the Terms and Conditions governing the use of this Service and the agreement that operates between\nYou and the Company. \n";
	cout << "These Terms and Conditions set out the rights and obligations of all users regarding the use of the Service. \n";
	cout << "Your access to and use of the Service is conditioned on Your acceptance of and compliance with these \nTerms and Conditions.\n";
	cout << "These Terms and Conditions apply to all visitors, users and others who access or use the Service.\n";
	cout << "Your access to and use of the Service is also conditioned on Your acceptance of and compliance with the \nPrivacy Policy of the Company.\n";
	cout << "Our Privacy Policy describes Our policies and procedures on the collection,\n";
	cout << "use and disclosure of Your personal information when You use the Application or the Website and tells\nYou about Your privacy rights and how the law protects You.\n";
	cout << "We reserve the right, at Our sole discretion, to modify or replace these Terms at any time.\n";
	cout << "If a revision is material We will make reasonable efforts to provide at least 30 days' notice prior to any\nnew terms taking effect. What constitutes a material change will be determined at Our sole discretion.\n";
	cout << "We own all your assets you if you use this Program.\n\n";
	cout << "*************************************************************************************************************\n";
	reans:
	cout << "\nAccept the Terms and Conditions? (Y or N) : ";	
	cin >> ans;
	if (ans == 'Y' || ans == 'y') {
		cout << "Thank You for Accepting!\n";
	}
	else if (ans == 'N' || ans == 'n') {
		cout << "\nPlease Accept The Terms to Continue...\n";
		goto reans;
	}
	else {
		cout << "\nPlease Enter a valid Answer (Y or N).\n";
		goto reans;
	}
}

void driverLogin() {
	int menuChoice, licencePlate, age, driveTime, licenceNumber;
	string Email, Password, carModel, WOFExpiry;

	cout << "\n\nDriver Login\n";
	line();
	cout << "\n1. Login \n 2. Register\n";
	line();
	cin >> menuChoice;
	//login
	if (menuChoice == 1) {
		cout << "\n\n\nDriver Login\n";
		line();
		cout << "Email: ";
		cin >> Email;
		cout << "password: ";
		cin >> Password;
		line();
	}//Eligibility
	if (menuChoice == 2) {
		cout << "Eligibility Questions\n";
		line();

		cout << "\nEnter Full licence number: ";
		cin >> licenceNumber;
			cout << "\nEnter Years of Driving Experiance: ";
			cin >> driveTime;
				cout << "\nEnter Car Model: ";
				cin >> carModel;
					cout << "\nEnter licence Plate: ";
					cin >> licencePlate;
						cout << "Enter WOF expiry: ";
						cin >> WOFExpiry;
							cout << "Enter Age: ";
							cin >> age;
		line();
		cout << "Checking eligibility, ";
		if (age >= 20 && driveTime >= 10) {
			line();
			cout << "\tYou are Eligible Welcome";
			line();
		}
		else {
			line();
			cout << "\tYou are Not Eligible";
			line();
		}

		cout << "\n\nDriver Registration\n";
		line();
		cout << "\nPlease enter your Full Name: ";
		cin >> /*placeholder*/;
		cout << "\nEnter Gender: ";
		cin >> /*placeholder*/;
		cout << "\nEnter Date Of birth: ";
		cin >> /*placeholder*/;
		cout << "\nEnter Nationality";
		cin >> /*placeholder*/;
		cout << "\nLicence Number: " << licenceNumber;
		cin >> /*placeholder*/;
		cout << "\nExperiance: " << driveTime;
		cin >> /*placeholder*/;

	}
}

void line() {
	for (int i = 0; i != 66; i++) {
		cout << "*";
	}
}

void userlog() {

}


void userReg() {	
	string details[5]; 
	int i, j;
	ofstream myfile;
	for (i = 0; i < 5; i++) {
		myfile.open("customerFile.csv", ios::out | ofstream::app);
		cin.ignore();
		cout << "\nEnter Full Name : ";
		getline(cin, details[i]);
		myfile << details[i] << ",";

		cout << "\nEnter Contact Number :  ";
		getline(cin, details[i]);
		myfile << details[i] << ",";
		
		cout << "\nEnter Email :  ";
		getline(cin, details[i]);
		myfile << details[i] << ",";
		
		cout << "\nEnter Address : ";
		getline(cin, details[i]);
		myfile << details[i] << ",";
		
		cout << "\nEnter Payment method : ";
		getline(cin, details[i]);
		myfile << details[i] << ",\n";
		myfile.close();
		break;
	}
}
	




int main()
{

	
	int ans, logans;
	rerun:
	cout << "\nTaxi Trip Booking System\n\n";
	cout << "*************************************\n";
	cout << "             Only Trips\n";
	cout << "*************************************\n\n";
	cout << "1. Terms and Conditions\n";
	cout << "2. Customer Login\n";
	cout << "3. Driver Login\n";
	cout << "4. Admin Login\n";
	cout << "5. Exit Program\n\n";
	cout << "*************************************\n";
	cout << "Please Select an Option : ";
	cin >> ans;

	switch (ans) {
	case 1 :
		printTerms();
		goto rerun;

	case 2 : 
		relog:
		cout << "\n\nCustomer Login\n";
		cout << "*************************************\n";
		cout << "1. Login\n";
		cout << "2. Register\n";
		cout << "*************************************\n";
		cout << "Please Select an Option : ";
		cin >> logans;
		if (logans == 1) {
			userlog();
		}
		else if (logans == 2) {
			userReg();
		}
		else {
			cout << "\nPlease Enter a Valid Input.\n";
			goto relog;
		}		
		goto rerun;
	case 3 :

		goto rerun;

	case 4 :

		goto rerun;

	case 5 : 

		break;
	}









	}





