#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

void line() {
	for (int i = 0; i != 37; i++) {
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
public:
	string firstName, lastName, gender, licenceExpiry, dateOfBirth, Nationality, emailAddress, streetAddress, bankName, bankAccountName, carModel, password, rePassword, endorcementNumberExpiry, WOFExpiry, licencePlate;
	int age, licenceNumber, contactNumber, bankAccountNumber, experiance, carRegistrationNumber, endorcementNumber;

	DriverRegistryInfo() 
	{
		firstName = "", gender = "", lastName = "", dateOfBirth = "", Nationality = "", emailAddress = "", streetAddress = "", bankName = "", carModel = "", password = "", rePassword = "", endorcementNumberExpiry = "", licenceExpiry = "";
		licenceNumber = 0, contactNumber = 0, bankAccountNumber = 0, carRegistrationNumber = 0,endorcementNumber = 0;
	}
};

void driverLogin() {
	struct DriverRegistryInfo DRI;
	int menuChoice;
	string Email, Password;
	//Menu
	cout << "\n\nDriver Login\n";
	line();
	cout << "\n1. Login \n2. Register\n";
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
		while (DRI.password != DRI.rePassword)
		{
			cout << "\nthose password dot not match please try again";
				cout << "please enter a password: ";
				cin >> DRI.password;
				cout << "\nplease reenter the password: ";
				cin >> DRI.rePassword;
		}

		cout << "Thank You For Registering " << DRI.firstName;
		//Data Transfer to External File
		fstream driverFile;
		driverFile.open("driverFile.csv", ios::in | ofstream::app);
		driverFile << DRI.firstName << "," << DRI.lastName << "," << DRI.gender << "," << DRI.dateOfBirth << "," << DRI.Nationality << "," << DRI.licenceNumber << "," << DRI.licenceExpiry << "," << DRI.experiance << "," << DRI.contactNumber << "," << DRI.emailAddress << "," << DRI.streetAddress << "," << DRI.bankName << "," << DRI.bankAccountName << "," << DRI.bankAccountNumber << "," << DRI.carRegistrationNumber << "," << DRI.carModel << "," << DRI.WOFExpiry << "," << DRI.endorcementNumber << "," << DRI.endorcementNumberExpiry << "," << DRI.password << "," << DRI.rePassword << "\n";
		driverFile.close();
	}

}

void userMain(int hold) {
	int ans;
	ifstream myfile;
	myfile.open("customerFile.csv", ios::in);
	string line, field, loc, des, date, tim, spe, lug;
	int linenum = 0, pas;
	char quote = '"', confirm;
	vector <vector<string> > array;
	vector<string> v;

	while (getline(myfile, line)) {
		v.clear();
		stringstream ss(line);
		while (getline(ss, field, ',')) {
			v.push_back(field);
		}
		array.push_back(v);
	}

	ofstream file;
	file.open("tripBooking.csv", ios::out | ofstream::app);
	cout << "*************************************\n";
	cout << "         Only Trips Booking\n";
	cout << "*************************************\n\n";
	cout << "1. Estimated Trip\n";
	cout << "2. Trip Bookling\n";
	cout << "3. Trip Costs (Per Km)\n";
	cout << "4. Standard Trip Costs\n";
	cout << "5. Exit Program\n\n";
	cout << "*************************************\n";
	cout << "Please Select an Option : ";
	cin >> ans;

	switch (ans) {
	case 1:
		
		break;

	case 2:
	{
		int randId;
		srand(time(0));
		randId = rand() % 1000 + 8000;
		cout << "\n\nTrip Booking\n";
		cout << "*************************************\n";
		cout << "Randomly Genorated Trip ID : " << randId;
		cout << "\n\nFull Name : " << array[hold][0];
		cout << "\n\nContact Number : +64" << array[hold][1];
		cout << "\n\nEnter Starting Location (Enter " << quote << "Home" << quote << " or Seprate address) : ";
		cin >> loc;
		if (loc == "Home" || loc == "home") {
			cout << "\nStarting location is : " << array[hold][3];
			loc == array[hold][3];
		}
		else {
			cout << "\n\nStarting location is : " << loc;
		}
	reuse:
		cout << "\n\nEnter Destination (Enter " << quote << "Home" << quote << " or Seprate address) : ";
		cin >> des;
		if (des == loc) {
			cout << "\nStarting location cannot be the same as destination. Try again.";
			goto reuse;
		}
		else if (des == "Home" || des == "home") {
			cout << "\nStarting location is : " << array[hold][3];
			des = array[hold][3];
		}
		else {
			cout << "\nDestination location is : " << des;
		}
		cout << "\n\nEnter Booking Date (Enter " << quote << "Today" << quote << " or (DD*MM*YY) : ";
		cin >> date;
		if (date == "Today" || date == "today") {
			auto t = time(nullptr);
			auto tm = *localtime(&t);
			cout << "\nBooking Date Set for : " << put_time(&tm, "%d-%m-%Y") << endl;
		}
		else {
			cout << "\nDate is set to : " << date;
		}
		cout << "\nEnter Booking Time (Enter " << quote << "Now" << quote << " or (Hour:Min) : ";
		cin >> tim;
		if (tim == "Now" || tim == "now") {
			auto t = time(nullptr);
			auto tm = *localtime(&t);
			cout << "\nBooking Time Set for : " << put_time(&tm, "%H-%M") << endl;
		}
		else {
			cout << "\nTime Set for : " << tim;
		}
	repas:
		cout << "\nEnter Number of passengers : ";
		cin >> pas;
		if (pas > 4) {
			cout << "\nPassengers cannot me more than 4. Try Again.";
			goto repas;
		}
		cout << "\nEnter Any Special Reqirements : ";
		cin >> spe;
		cout << "\nEnter Luggage Requirements (Eg 1 Suitcase) : ";
		cin >> lug;
		cout << "\nPayment Details : ";
		cout << "\n\nVisa Card : " << array[hold][4];
		cout << "\n\nExpiry Date : " << array[hold][5];
		cout << "\n\nCVC : " << array[hold][6];
		cout << "\n\nConfirm Payment Method and Book Trip? (Y or N) : ";
		cin >> confirm;
		if (confirm == 'Y' || confirm == 'y')
			file << "," << randId << "," << array[hold][0] << "," << loc << "," << des << "," << pas;
	}
		break;

	case 3: {
		time_t now = time(0);
		struct tm tstruct = *localtime(&now);

		int f = tstruct.tm_hour;
		cout << "\nStandard trip cost is $1.35 per km and $1.65 in peak hours (7am-9am and 5pm-7pm)\n";
		if (f == 7 || f == 8 || f == 9 || f == 17 || f == 18 || f == 19) {
			cout << "\nStandard Trip Cost at this time is $1.65 per km\n\n";
		}
		else {
			cout << "\nStandard Trip Cost at this time is $1.35 per km\n\n";
		}
	}
		break;

	case 4:
		
		break;

	case 5:

		break;
	}
	file.close();
	myfile.close();
}


struct UserReg {
public:
	string name, number, email, address, payment, date, cvc, password;

	UserReg() {
		name = "", number = "", email = "", address = "", payment = "", date = "", cvc = "", password = "";
	}
};

void userReg() {
relog:
	UserReg data[8];
	UserReg alldata;
	int logans;	
	cout << "\n\nCustomer Login\n";
	cout << "*************************************\n";
	cout << "1. Login\n";
	cout << "2. Register\n";
	cout << "*************************************\n";
	cout << "Please Select an Option : ";
	cin >> logans;

	if (logans == 1) {
		//Login
		ifstream myfile;
		myfile.open("customerFile.csv", ios::in);
		string line, email, field, pass;
		int linenum = 0;
		cin.ignore();
		cout << "\n";
		cout << "\n\nCustomer Login\n";
		cout << "*************************************\n";
		cout << "Enter Your Email : ";
		getline(cin, email);
		vector <vector<string> > array;
		vector<string> v;

		while (getline(myfile, line)) {
			v.clear();
			stringstream ss(line);
			while (getline(ss, field, ',')) {
				v.push_back(field);
			}
			array.push_back(v);
		}
		//array.size() needs to have as many lines of data in the csv file as colums you want it to read as they are directly related
		for (size_t i = 0; i < array.size(); ++i) {
			for (size_t j = 0; j < array.size(); ++j) {
				//cout << array[i][j] << ", ";
				if (array[i][j] == email) {
					cout << "\nEmail Found in line : " << i + 1 << " " << array[i][j];	
						repass:
						cout << "\n\nEnter Your password : ";
						getline(cin, pass);
							if (array[i][7] == pass) {
								cout << "\nPassword Correct Welcome " << array[i][0] << "\n\n";
								int hold = i;
								userMain(hold);
							}
								else {
									cout << "\nPassword Inncorrect Try Again.";
									goto repass;
								}
				}
				
			}
			
		}		
		myfile.close();
		
	}


	else if (logans == 2) {
		//Register
		struct UserReg UR;
		string pass1, pass2;
		ofstream myfile;
		cout << "\n\nRegister\n";
		cout << "*************************************\n";
			myfile.open("customerFile.csv", ios::out | ofstream::app);
			cin.ignore();
			cout << "\nEnter Full Name : ";
			getline(cin, UR.name);

			cout << "\nEnter Contact Number :  ";
			getline(cin, UR.number);


			cout << "\nEnter Email :  ";
			getline(cin, UR.email);


			cout << "\nEnter Address : ";
			getline(cin, UR.address);


			cout << "\nEnter Payment method : ";
			getline(cin, UR.payment);


			cout << "\nEnter Card Expiry Date(MM*YY) : ";
			getline(cin, UR.date);


			cout << "\nCVC : ";
			getline(cin, UR.cvc);

			cout << "\nEnter Password : ";
			getline(cin, pass1);

			cout << "\nRe-Enter Password :  ";
			getline(cin, pass2);
			if (pass1 == pass2) {
				UR.password = pass2;
				myfile << UR.name << "," << UR.number << "," << UR.email << "," << UR.address << "," << UR.payment << "," << UR.date << "," << UR.cvc << "," << UR.password << ",\n";
				cout << "\n\n*************************************\n";
				cout << " Thank you for Registering " << UR.name;
				cout << "\n*************************************\n\n\n";
				myfile.close();
			}
			
			
			

	} 
	else {
	cout << "\nPlease Enter a Valid Input.\n";
	goto relog;
	}
}



	

	

//void adminMenu() {
//	string usernameCheck;
//	string passwordCheck;
//	string storedLogin = "OnlyTripper";
//	string storedPassword = "500Miles";
//
//	//Login 
//	cout << "\n\nAdmin Menu\n";
//	line();
//	cout << "\nLogin:\n";
//	cout << "Username: ";
//	cin >> usernameCheck;
//	cout << "\nPassword: ";
//	cin >> passwordCheck;
//	//Password Checking
//	while (usernameCheck != storedLogin && passwordCheck != storedPassword) {
//		cout << "\nThat login dosen't match please try again.\n";
//		cout << "\nLogin:\n";
//		cout << "Username: ";
//		cin >> usernameCheck;
//		cout << "\nPassword: ";
//		cin >> passwordCheck;
//	}
//	line();
//	cout << "Welcome Admins";
//	line();
//
//	//Weekly Report
//	cout << "\n\nWeekly Report";
//	line();
//	cout << "\n" << ctime;
//	cout << "\nNumber of trips: ";
//	cout << "\nPayments: ";
//	cout << "\nPaid to drivers: $";
//	cout << "\nGross: ";
//	cout << "\nTax deduction: $";
//	cout << "\nNet profit: ";
//	cout << "\n";
//	line();
//	
//	//Driver Report
//	cout << "Driver Report\n";
//	line();
//	fstream driverFile;
//
//	driverFile.open("driverFile.csv", ios::in);
//
//	int driverinfo;
//	int drivernum = 1;
//
//	vector<string> row;
//	string rowB, word, temp;
//
//	while (driverFile >> temp) {
//		row.clear();
//
//		getline(driverFile, rowB);
//		stringstream s(rowB);
//		while (getline(s, word, ', ')) {
//			row.push_back(word);
//		}
//
//		driverinfo = stoi(row[0]);
//
//		if (driverinfo == drivernum) {
//			cout << row[0] << "\n";
//			cout << row[1] << "\n";
//			cout << row[2] << "\n";
//			cout << row[3] << "\n";
//			cout << row[4] << "\n";
//			break;
//		}
//
//	}
//	driverFile.close();
//	line();
//
//	//Customer Report
//	cout << "Customer Report\n";
//	line();
//	//getting customer info
//	fstream customerFile;
//
//	customerFile.open("customerFile.csv", ios::in);
//
//	int customerinfo;
//	int customernum = 1;
//
//	vector<string> row;
//	string rowB, word, temp;
//
//	while (customerFile >> temp) {
//		row.clear();
//
//		getline(customerFile, rowB);
//		stringstream s(rowB);
//		while (getline(s, word, ', ')) {
//			row.push_back(word);
//		}
//
//		customerinfo = stoi(row[0]);
//
//		if (customerinfo == customernum) {
//			cout << row[0] << "\n";
//			cout << row[1] << "\n";
//			cout << row[2] << "\n";
//			cout << row[3] << "\n";
//			cout << row[4] << "\n";
//			break;
//		}
//
//	}
//	customerFile.close();
//	line();
//
//	//Cancellation Report
//	cout << "Cancelation Report";
//	line();
//	cout << "\nAmount of cancelattions: ";
//	cout << "Profit loss: $";
//	cout << "\n";
//	line();
//}


int main()
{

	
	int ans;
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
		userReg();
		goto rerun;
	case 3 :
		driverLogin();
		goto rerun;

	case 4 :

		goto rerun;

	case 5 : 

		break;
	}









	}





