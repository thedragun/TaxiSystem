#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>

using namespace std;

void line() {
	for (int i = 0; i != 66; i++) {
		cout << "*";
	}
}

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

struct DriverRegistryInfo {
	string firstName, lastName, gender, licenceExpiry, dateOfBirth, Nationality, emailAddress, streetAddress, bankName, bankAccountName, carModel, experiance, password, rePassword, endorcementNumberExpiry, WOFExpiry, licencePlate;
	int age, licenceNumber, contactNumber, bankAccountNumber, experiance, carRegistrationNumber, endorcementNumber;

	DriverRegistryInfo(string firstName = "", string lastName = "", string gender = "", string dateOfBirth = "", string Nationality = "", string emailAddress = "", string streetAddress = "", string bankName = "", string carModel = "", string password = "", string rePassword = "", string endorcementNumberExpiry = "", int licenceNumber = 0, string licenceNumberExpiry = "", string WOFExpiry, int contactNumber = 0, int bankAccountNumber = 0, int carRegistrationNumber = 0, int endorcementNumber = 0,int experiance = 0) {
		string a = firstName, b = gender, c = lastName, d = dateOfBirth, e = Nationality, f = emailAddress, g = streetAddress, h = bankName, i = carModel, k = password, l = rePassword, m = endorcementNumberExpiry, n = licenceNumberExpiry;
		int o = licenceNumber, p = contactNumber, q = bankAccountNumber, r = carRegistrationNumber, s = endorcementNumber;
	}
};

void driverLogin() {
	struct DriverRegistryInfo DRI;
	int menuChoice;
	string Email, Password;
	//Menu
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
		cin >> DRI.licenceNumber;
			cout << "\nEnter Years of Driving Experiance: ";
			cin >> DRI.experiance;
				cout << "\nEnter Car Model: ";
				cin >> DRI.carModel;
					cout << "\nEnter licence Plate: ";
					cin >> DRI.licencePlate;
						cout << "Enter WOF expiry: ";
						cin >> DRI.WOFExpiry;
							cout << "Enter Age: ";
							cin >> DRI.age;
		line();
		cout << "Checking eligibility, ";
		if (DRI.age >= 20 && DRI.experiance >= 10) {
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
		cout << "\nPlease enter your First Name: ";
		cin >> DRI.firstName;
		cout << "\nEnter your Last Name: ";
		cin >> DRI.lastName;
		cout << "\nEnter Gender: ";
		cin >> DRI.gender;
		cout << "\nEnter Date Of birth: ";
		cin >> DRI.dateOfBirth;
		cout << "\nEnter Nationality";
		cin >> DRI.Nationality;
		cout << "\nLicence Number: " << DRI.licenceNumber;
		cout << "\nExperiance: " << DRI.experiance;
		cout << "\nEnter Contact Number: ";
		cin >> DRI.contactNumber;
		cout << "\nEnter Email addresss: ";
		cin >> DRI.emailAddress;
		cout << "\nEnter Address: ";
		cin >> DRI.streetAddress;
		cout << "\nEnter Bank Account Number: ";
		cin >> DRI.bankAccountNumber;
		cout << "\nEnter Bank Name: ";
		cin >> DRI.bankName;
		cout << "\nEnter Account Name: ";
		cin >> DRI.bankAccountName;
		cout << "\nEnter Car Registration Number: ";
		cin >> DRI.carRegistrationNumber;
		cout << "\nCar Model: " << DRI.carModel;
		cout << "\nWOF Expiry: " << DRI.WOFExpiry;
		cout << "\nEnter Endorcement Number: ";
		cin >> DRI.endorcementNumber;
		cout << "\nEnter Endorcement Number Expiry Date: ";
		cin >> DRI.endorcementNumberExpiry;
		cout << "\nEnter Password: ";
		cin >> DRI.password;
		cout << "\nRenter Password: ";
		cin >> DRI.rePassword;
		line();
		cout << "Thank You For Registering " << DRI.firstName;
	}
}



void userlog() {
	int linenum = 0;
	string line, email;
	cout << "\n\nCustomer Login\n";
	cout << "*************************************\n";
	cout << "Enter Email : ";
	cin.ignore();
	getline(cin, email);
	ifstream myfile;
	myfile.open("customerFile.csv", ios::in);
	while (getline(myfile,line)) {
		
		
	}
	
}


void userReg() {	
	string details[7], pass1,pass2; 
	int i;
	ofstream myfile;
	cout << "\n\nRegister\n";
	cout << "*************************************\n";
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
		myfile << details[i] << ",";

		cout << "\nEnter Card Expiry Date(MM/YY) : ";
		getline(cin, details[i]);
		myfile << details[i] << ",";

		cout << "\nCVC : ";
		getline(cin, details[i]);
		myfile << details[i] << ",";

		repass:
		cout << "\nEnter Password : ";
		getline(cin, pass1);
		

		cout << "\nRe-Enter Password :  ";
		getline(cin, pass2);
		if (pass1 == pass2) {
			myfile << pass2 << ",\n";
			myfile.close();
			break;
		}
		else {
			cout << "\nPasswords Must match Try Again.\n";
			goto repass;
		}

		
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





