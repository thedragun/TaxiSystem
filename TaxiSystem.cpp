
#define _CRT_SECURE_NO_WARNINGS
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <deque>
#include <stdlib.h>
#include <conio.h>
#include<stdio.h>


using namespace std;
void drawCar() {
	char six = '"';
	cout << "\t\t\t             Thanks for Riding with Only Trips\n";
	cout << "\t\t\t                      ___..............._\n";
	cout << "\t\t\t             __.. ' _'."<< six << six << six << six << six << six<<"\\"<< six << six << six << six << six << six << six << six<<" - .`-.\n";
	cout << "\t\t\t ______.-'         (_) |      \\           ` \\`-. _\n";
	cout << "\t\t\t/_       --------------'-------\\---....______\\__`.`  -..___\n";
	cout << RED"\t\t\t|"<<RESET<<"  T     _.----._           Xxx|x...           |          _.._`- - ._\n";
	cout << RED"\t\t\t|"<<RESET<<"  |   .' ..--.. `.         XXX|"<<YELLOW<<"ONLYTRIPS"<<RESET<<"==    |       .'.---..`.     -._\n";
	cout << "\t\t\t\\_j   /  /  __  \\  \\        XXX|XXXXXXXXXXX==  |      / /  __  \\ \\        `-.\n";
	cout << "\t\t\t _|  |  |  /  \\  |  |       XXX|"<< six << six <<"'            |     / |  /  \\  | |          |\n";
	cout << "\t\t\t|__\\_j  |  \\__/  |  L__________|_______________|_____j |  \\__/  | L__________J\n";
	cout << "\t\t\t     `'\\ \\      / ./__________________________________\\ \\      / /___________\\\n";
	cout << "\t\t\t        `.`----'.'                                     `.`----'.'\n";
	cout << "\t\t\t          `"<<six<<six<<six<<six<<"'                                         `"<< six<<six<<six<<six<<"'\n";

}

void drawLine() {
	for (int i = 0; i != 37; i++) {
		cout << YELLOW "*" << RESET;
	}
}

int tripNum() {
	srand((NULL));
	int num;

	num = rand() % 1000 + 1000;

	return num;
}

void printTerms() {
	//Joel
	char ans;
	cout << "\n\nTerms and Conditions :\n";
	cout << YELLOW "*************************************************************************************************************\n\n" << RESET;
	cout << "These are the Terms and Conditions governing the use of this Service and the agreement that operates between\nYou and the Company. \n";
	cout << "These Terms and Conditions set out the rights and obligations of all users regarding the use of the Service. \n";
	cout << "Your access to and use of the Service is conditioned on Your acceptance of and compliance with these \nTerms and Conditions.\n";
	cout << "These Terms and Conditions apply to all visitors, users and others who access or use the Service.\n";
	cout << "Your access to and use of the Service is also conditioned on Your acceptance of and compliance with the \nPrivacy Policy of the Company.\n";
	cout << "Our Privacy Policy describes Our policies and procedures on the collection,\n";
	cout << "We own all your assets you if you use this Program.\n";
	cout << "use and disclosure of Your personal information when You use the Application or the Website and tells\nYou about Your privacy rights and how the law protects You.\n";
	cout << "We reserve the right, at Our sole discretion, to modify or replace these Terms at any time.\n";
	cout << "If a revision is material We will make reasonable efforts to provide at least 30 days' notice prior to any\nnew terms taking effect. What constitutes a material change will be determined at Our sole discretion.\n\n";
	cout << YELLOW "*************************************************************************************************************\n" << RESET;
	reans:
	cout << "\nAccept the Terms and Conditions? (Y or N) : ";	
	cin >> ans;
	if (ans == 'Y' || ans == 'y') {
		cout << "\nThank You for Accepting!\n\n";
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
	string firstName, lastName, gender, licenceExpiry, dateOfBirth, Nationality, emailAddress, streetAddress, bankName, bankAccountName, carModel, password, rePassword, endorcementNumberExpiry, WOFExpiry, licencePlate, bankAccountNumber;
	int age, licenceNumber, contactNumber, experiance, carRegistrationNumber, endorcementNumber;

	DriverRegistryInfo() 
	{
		firstName = "", gender = "", lastName = "", dateOfBirth = "", Nationality = "", emailAddress = "", streetAddress = "", bankName = "", carModel = "", password = "", rePassword = "", endorcementNumberExpiry = "", licenceExpiry = "", bankAccountNumber ="";
		licenceNumber = 0, contactNumber = 0, carRegistrationNumber = 0,endorcementNumber = 0;
	}
};


void driverMenu(int linenum) {
	string accept, completed;
	int tripSelection, completedTrips = 0, totalEarnings = 0, taxTotal = 25, temp = 0;
	double  TaT = 0;

	ifstream myfile;
	myfile.open("tripBooking.csv", ios::in);
	string line, email, field, pass;
	int linenuma = 0, menuChoice;
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
	redo:
	cout << "Driver Menu\n";
	drawLine();
	cout << "please select an option: \n\n";
	cout << "1. avaliable trips\n";
	cout << "2. daily statistics\n";
	cout << "3. main menu";
	cin >> menuChoice;

	ifstream myfile2;
	myfile2.open("driverFile.csv", ios::app);
	string lineb, fieldb;
	int linenumb = 0, menuChoiceb;
	vector <vector<string> > arrayb;
	vector<string> vb;

	while (getline(myfile2, lineb)) {
		v.clear();
		stringstream ss(lineb);
		while (getline(ss, fieldb, ',')) {
			v.push_back(fieldb);
		}
		array.push_back(v);
	}

	switch (menuChoice) {

	case 1:
	decline:
		drawLine();
		cout << "\nTrip 1\n";
		cout << "\nCustomer Name: " << array[0][1];
		cout << "\nStarting Location: " << array[0][2];
		cout << "\nDestination: " << array[0][3];
		cout << "\nDate and Time: " << array[0][4] << " at " << array[0][5];

		cout << "\n\nTrip 2\n";
		cout << "\nCustomer Name: " << array[1][1];
		cout << "\nStarting Location: " << array[1][2];
		cout << "\nDestination: " << array[1][3];
		cout << "\nDate and Time: " << array[1][4] << " at " << array[1][5];


		cout << "\n\nTrip 3\n";
		cout << "\nCustomer Name: " << array[2][1];
		cout << "\nStarting Location: " << array[2][2];
		cout << "\nDestination: " << array[2][3];
		cout << "\nDate and Time: " << array[2][4] << " at " << array[2][5];


		cout << "\n\nTrip 4\n";
		cout << "\nCustomer Name: " << array[3][1];
		cout << "\nStarting Location: " << array[3][2];
		cout << "\nDestination: " << array[3][3];
		cout << "\nDate and Time: " << array[3][4] << " at " << array[3][5];


		cout << "\n\nTrip 5\n";
		cout << "\nCustomer Name: " << array[4][1];
		cout << "\nStarting Location: " << array[4][2];
		cout << "\nDestination: " << array[4][3];
		cout << "\nDate and Time: " << array[4][4] << " at " << array[4][5] << "\n";
		drawLine();
		cout << "\nplease select a trip: ";
		cin >> tripSelection;
		cout << "\n";
		drawLine();
		switch (tripSelection) {
		case 1:
			//displaying data
			drawLine();
			cout << "\nTrip " << 1 << "\n";
			drawLine();
			cout << "\nTrip Number: " << array[0][0];
			cout << "\nCustomer Name: " << array[0][1];
			cout << "\nStarting Location: " << array[0][2];
			cout << "\nDestination: " << array[0][3] << "\n";
			cout << "\nDate and Time: " << array[0][4] << " at " << array[0][5] << "\n";
			drawLine();
			cout << "\naccept trip? y/n";
			cin >> accept;
			if (accept == "y") {
				cout << ">>>>>>>>>>> Trip Status: active <<<<<<<<<<\n";
				cout << "completed? y/n: ";
				cin >> completed;
				if (completed == "y") {
					completedTrips++;

					cout << "\nplease enter how much you were paid: ";
					cin >> temp;

					goto redo;
				}

			}
			else {
				goto decline;
			}

			break;
		case 2:
			drawLine();
			cout << "Trip " << 2 << "\n";
			drawLine();
			cout << "\nTrip Number: " << array[1][0];
			cout << "\nCustomer Name: " << array[1][1];
			cout << "\nStarting Location: " << array[1][2];
			cout << "\nDestination: " << array[1][3] << "\n";
			cout << "\nDate and Time: " << array[1][4] << " at " << array[1][5] << "\n";
			drawLine();
			cout << "accept trip? y/n";
			cin >> accept;
			if (accept == "y") {
				cout << ">>>>>>>>>>> Trip Status: active <<<<<<<<<<\n";
				cout << "completed? y/n: ";
				cin >> completed;
				if (completed == "y") {
					completedTrips++;


					cout << "\nplease enter how much you were paid: ";
					cin >> temp;

					goto redo;

				}

			}
			else {
				goto decline;
			}

			break;
		case 3:
			drawLine();
			cout << "Trip " << 2 << "\n";
			drawLine();
			cout << "\nTrip Number: " << array[2][0];
			cout << "\nCustomer Name: " << array[2][1];
			cout << "\nStarting Location: " << array[2][2];
			cout << "\nDestination: " << array[2][3] << "\n";
			cout << "\nDate and Time: " << array[2][4] << " at " << array[2][5] << "\n";
			drawLine();
			cout << "accept trip? y/n";
			cin >> accept;
			if (accept == "y") {
				cout << ">>>>>>>>>>> Trip Status: active <<<<<<<<<<\n";
				cout << "completed? y/n: ";
				cin >> completed;
				if (completed == "y") {
					completedTrips++;

					cout << "\nplease enter how much you were paid: ";
					cin >> temp;

					goto redo;

				}

			}
			else {
				goto decline;
			}

			break;
		case 4:
			drawLine();
			cout << "Trip " << 2 << "\n";
			drawLine();
			cout << "\nTrip Number: " << array[3][0];
			cout << "\nCustomer Name: " << array[3][1];
			cout << "\nStarting Location: " << array[31][2];
			cout << "\nDestination: " << array[3][3] << "\n";
			cout << "\nDate and Time: " << array[3][4] << " at " << array[3][5] << "\n";
			drawLine();
			cout << "accept trip? y/n";
			cin >> accept;
			if (accept == "y") {
				cout << ">>>>>>>>>>> Trip Status: active <<<<<<<<<<\n";
				cout << "completed? y/n: ";
				cin >> completed;
				if (completed == "y") {
					completedTrips++;

					cout << "\nplease enter how much you were paid: ";
					cin >> temp;

					goto redo;

				}

			}
			else {
				goto decline;
			}

			break;
		case 5:
			drawLine();
			cout << "Trip " << 2 << "\n";
			drawLine();
			cout << "\nTrip Number: " << array[4][0];
			cout << "\nCustomer Name: " << array[4][1];
			cout << "\nStarting Location: " << array[4][2];
			cout << "\nDestination: " << array[4][3] << "\n";
			cout << "\nDate and Time: " << array[4][4] << " at " << array[4][5] << "\n";
			drawLine();
			cout << "accept trip? y/n";
			cin >> accept;
			if (accept == "y") {
				cout << ">>>>>>>>>>> Trip Status: active <<<<<<<<<<\n";
				cout << "completed? y/n: ";
				cin >> completed;
				if (completed == "y") {
					completedTrips++;

					cout << "\nplease enter how much you were paid: ";
					cin >> temp;

					goto redo;

				}

			}
			else {
				goto decline;
			}
			break;


		}

		break;

	case 2:

		totalEarnings = totalEarnings + temp;
		TaT = (totalEarnings * taxTotal) / 100;
		//displaying
		cout << "\n\nTrips Today\n";
		drawLine();
		cout << "\nNumber of trips: " << completedTrips;
		cout << "\nTotal Earnings: " << totalEarnings;
		cout << "\nTax Total: %" << taxTotal;
		cout << "\nTotal after Tax: " << TaT << "\n";
		drawLine();

		array[linenum][22] = completedTrips;
		array[linenum][23] = totalEarnings;

		
		goto redo;
		break;
	case 3: 

		break;
	}

	myfile.close();
	myfile.close();

}

void driverLogin() {
	struct DriverRegistryInfo DRI;
	int menuChoice;
	string Email, Password;

	//Menu
	cout << "\n\nDriver Login\n";
	drawLine();
	cout << "\n1. Login \n2. Register\n";
	cin >> menuChoice;
	drawLine();

	//login
	if (menuChoice == 1) {
		ifstream myfile;
		myfile.open("driverFile.csv", ios::in);
		string line, email, field, pass;
		int linenum = 0;
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

		cout << "\nplease enter your email: ";
		cin >> email;

		for (size_t i = 0; i < array.size(); ++i) {
			for (size_t j = 0; j < 21; ++j) {
				if (array[i][j] == email) {
					cout << "\nEmail Found in line : " << i + 1 << " " << array[i][j];
					int linecount = i + 1;
				repass:
					cout << "\n\nEnter Your password : ";
					cin >> pass;
					int ch = ' ';
					while (true) {
						ch = _getch();
						if (ch == 13) {
							break;
						}
						else if (ch == '\b') {
							pass.pop_back();
							cout << "\b \b";
						}
						else {
							pass.push_back(ch);
							cout << "*";
						}
					}

					if (array[i][20] == pass) {
						cout << "\n*************************************\n";
						cout << "Password Correct Welcome " << array[i][0] << "\n";
						cout << "*************************************\n\n";
						driverMenu(linecount);
					}
					else {
						cout << "\n\nPassword Inncorrect Try Again.";
						goto repass;
					}
				
				}

			}

		}

		myfile.close();

		//END OF LOGIN
	}

	
	//Eligibility and registry
	if (menuChoice == 2) {
		drawLine();
		cout << "\nEligibility Questions\n";
		drawLine();

		cout << "\nEnter Full licence number: ";
		cin >> DRI.licenceNumber;
		cout << "\nEnter Years of Driving Experiance: ";
		cin >> DRI.experiance;
		cout << "\nEnter Car Model: ";
		cin.ignore();
		getline(cin,DRI.carModel);
		cout << "\nEnter licence Plate: ";
		cin >> DRI.licencePlate;
		cout << "\nEnter WOF expiry: ";
		cin >> DRI.WOFExpiry;
		cout << "\nEnter Age: ";
		cin >> DRI.age;
		drawLine();
		cout << "\nChecking eligibility\n";
		if (DRI.age >= 20 && DRI.experiance >= 10) {
			drawLine();
			cout << "\n\tYou are Eligible Welcome\n";
			drawLine();
		
			cout << "\n\nDriver Registration\n";
			drawLine();
			cout << "\nPlease enter your First Name: ";
			cin >> DRI.firstName;
			cout << "\nEnter your Last Name: ";
			cin >> DRI.lastName;
			cout << "\nEnter Gender: ";
			cin >> DRI.gender;
			cout << "\nEnter Date Of birth: ";
			cin >> DRI.dateOfBirth;
			cout << "\nEnter Nationality: ";
			cin.ignore();
			getline(cin, DRI.Nationality);
			cout << "\nLicence Number: " << DRI.licenceNumber << "\n";
			cout << "\nLicence Expiry: " << DRI.licenceExpiry << "\n";
			cout << "\nExperiance: " << DRI.experiance << "\n";
			cout << "\nEnter Contact Number: ";
			cin >> DRI.contactNumber;
			cout << "\nEnter Email addresss: ";
			cin >> DRI.emailAddress;
			cout << "\nEnter Address: ";
			cin.ignore();
			getline(cin, DRI.streetAddress);
			cout << "\nEnter Bank Account Number: ";
			cin.ignore();
			getline(cin, DRI.bankAccountNumber);
			cout << "\nEnter Bank Name: ";
			cin.ignore();
			getline(cin, DRI.bankName);
			cout << "\nEnter Account Name: ";
			cin.ignore();
			getline(cin, DRI.bankAccountName);
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
			drawLine();
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
			driverFile << DRI.firstName << "," << DRI.licencePlate << "," << DRI.endorcementNumber << "," << DRI.carModel << "," << DRI.Nationality << "," << DRI.licenceNumber << "," << DRI.licenceExpiry << "," << DRI.experiance << "," << DRI.contactNumber << "," << DRI.emailAddress << "," << DRI.streetAddress << "," << DRI.bankName << "," << DRI.bankAccountName << "," << DRI.bankAccountNumber << "," << DRI.carRegistrationNumber << "," << DRI.dateOfBirth << "," << DRI.WOFExpiry << "," << DRI.lastName << "," << DRI.gender << "," << DRI.endorcementNumberExpiry << "," << DRI.password << "," << DRI.rePassword << "\n";
			driverFile.close();

			driverLogin();
		

			srand((NULL));

		}
		else {
			drawLine();
			cout << "\tYou are Not Eligible";
			drawLine();
		}
	}
}

void tripBooked() {
	//Joel
	ifstream myfile;
	srand(time(NULL));
	string line, field;
	int linenum = 0, flag;
	char confirm;
	myfile.open("driverFile.csv", ios::out);
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


	
	cout << "\n\nFinding a Driver for you...\n\n";
	system("pause");
	cout << YELLOW "\n*************************************************************************************************************\n" << RESET;

	flag = (rand() % 3) + 1;
	cout << "\n\n\n\n\t\t\t                          Driver Found\n";
	cout << YELLOW "\t\t\t******************************************************************\n" << RESET;
	cout << YELLOW "\t\t\t*" << RESET "\tYour Driver is                              " << array[flag][0] << "\n";
	cout << YELLOW "\t\t\t*" << RESET "\tYour Drivers Licence Plate Number is        " << array[flag][1] << "\n";
	cout << YELLOW "\t\t\t*" << RESET "\tYour Drivers Endorcement Number is          " << array[flag][2] << "\n";
	cout << YELLOW "\t\t\t*" << RESET "\tDrivers Car Model                           " << array[flag][3] << "\n";
	cout << YELLOW "\t\t\t*" << RESET "\tYour Ride will be here in                   " << (rand() % 15) + 2 << " Minuets\n";
	cout << YELLOW "\t\t\t*" << RESET "\tCancel Ride? (Y or N)                       ";
	cin >> confirm;
	cout << YELLOW "\t\t\t*" << RESET "\n";
	cout << YELLOW "\t\t\t******************************************************************\n\n\n\n\n\n" << RESET;
	if (confirm == 'Y' || confirm == 'y') {
		cout << "Your Booking has been Cancelled";
	}
	else if (confirm == 'N' || confirm == 'n') {
		drawCar();
	}
	

	myfile.close();
}

void userMain(int hold)
{
	//Joel
re:
	int ans, ans2;
	float pay, randPay;
	ifstream myfile;
	myfile.open("customerFile.csv", ios::in);
	string line, field, loc, des, date, tim, spe, lug, setloc = "None";
	int linenum = 0, pas, flag = 0;
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
	ofstream canFile;
	canFile.open("cancelFile.csv", ios::out | ofstream::app);
	cout << YELLOW "\n\n\n*************************************\n" << RESET;
	cout << "         Only Trips Booking\n";
	cout << YELLOW "*************************************\n\n" << RESET;
	cout << "1. Estimated Trip\n";
	cout << "2. Trip Bookling\n";
	cout << "3. Trip Costs (Per Km)\n";
	cout << "4. Standard Trip Costs\n";
	cout << "5. Exit Program\n\n";
	cout << YELLOW "*************************************\n" << RESET;
	cout << "Please Select an Option : ";
	cin >> ans;

	switch (ans) {
	case 1: {
		ifstream myfile;
		myfile.open("tripBooking.csv", ios::in);
		string linenum, col;
		int check; 
		char y;
		vector <vector<string> > tripArray;
		vector<string> x;

		while (getline(myfile, linenum)) {
			x.clear();
			stringstream ss(linenum);
			while (getline(ss, col, ',')) {
				x.push_back(col);
			}
			tripArray.push_back(x);
		}
		check = (rand() % 2) + 1;
		cout << "\nFrom recently booked trips people are heading to " << tripArray[check][3];
		cout << "\n\nWould you like to book a trip to " << tripArray[check][3] <<"? (Y or N) : ";
		cin >> y;
		if (y == 'Y' || y == 'y') {
			setloc = tripArray[check][3];
			goto trip;
		}
		else if (y == 'N' || y == 'n') {
			goto re;
		}
	}
		
		

	case 2:
	{
	trip:
		int randId;
		srand(time(0));
		randId = (rand() % 9999) + 1000;
		cout << "\n\nTrip Booking\n";
		cout << YELLOW "*************************************\n" << RESET;
		cout << "Trip ID : " << randId;
		cout << "\n\nFull Name : " << array[hold][0];
		cout << "\n\nContact Number : +64" << array[hold][1];
		cout << "\n\nEnter Starting Location (Enter " << quote << "Home" << quote << " or Seprate address) : ";
		cin.ignore();
		getline(cin, loc);
		if (loc == "Home" || loc == "home") {
			cout << "\nStarting location is : " << array[hold][3];
			loc = array[hold][3];
		}
		else {
			cout << "\n\nStarting location is : " << loc;
		}
	reuse:
		if (setloc == "Airport" || setloc == "Railway Station" || setloc == "CBD") {
			cout << "\n\nDestination is set to " << setloc;
			des = setloc;
			
			
		}
		else {
			cout << "\n\nEnter Destination (Enter " << quote << "Home" << quote << " or Seprate address) : ";
			getline(cin, des);
			if (des == loc || loc == setloc) {
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
		}
		cout << "\n\nEnter Booking Date (Enter " << quote << "Today" << quote << " or (DD*MM*YY) : ";
		cin >> date;
		if (date == "Today" || date == "today") {
			time_t curr_time;
			tm* curr_tm;
			char date_string[100];
			time(&curr_time);
			curr_tm = localtime(&curr_time);
			strftime(date_string, 50, "%B %d %Y", curr_tm);
			cout << "\nBooking Date Set for : " << date_string << endl;
			date = date_string;
			
		}
		else {
			cout << "\nDate is set to : " << date;
		}
		cout << "\nEnter Booking Time (Enter " << quote << "Now" << quote << " or (Hour:Min) : ";
		cin >> tim;
		if (tim == "Now" || tim == "now") {
			time_t curr_time;
			tm* curr_tm;
			char time_string[100];
			time(&curr_time);
			curr_tm = localtime(&curr_time);
			strftime(time_string, 50, "%T", curr_tm);

			cout << "\nBooking Time Set for : " << time_string;
			tim = time_string;
		}
		else {
			cout << "\nTime Set for : " << tim << endl;
		}
	repas:
		cout << "\n\nEnter Number of passengers : ";
		cin >> pas;
		if (pas > 4) {
			cout << "\nPassengers cannot me more than 4. Try Again.";
			goto repas;
		}
		cout << "\nEnter Any Special Reqirements (None or Write a request) : ";
		cin.ignore();
		getline(cin, spe);
		cout << "\nEnter Luggage Requirements (Eg 1 Suitcase) : ";
		getline(cin, lug);
		cout << YELLOW "\n\n*************************************************************************************************************\n" << RESET;
		cout << "\nCalculating Trip Cost...\n\n";
		system("pause");
		if (setloc == "Airport") {
			pay = 35;
		}
		else if (setloc == "Railway Station" || setloc == "CBD") {
			pay = 15;
		}
		else {
			randPay = rand() % 30 + 2;
			time_t now = time(0);
			struct tm tstruct = *localtime(&now);
			int f = tstruct.tm_hour;
			
			if (f == 7 || f == 8 || f == 9 || f == 17 || f == 18 || f == 19) {
				pay = (randPay * 1.65) + 5;
			}
			else {
				pay = (randPay * 1.35) + 5;
				
			}
		}
		int service = 5;
		cout << YELLOW "\n\n*************************************************************************************************************\n\n" << RESET;
		cout << "\nTrip cost is $1.35 per km and $1.65 in peak hours (7am-9am and 5pm-7pm)\n";
		cout << "\nYour Total Payment is $" << pay << endl;
		cout << "\nService Fee $" << service;
		cout << "\n\nPayment Details : ";
		cout << "\n\nVisa Card : " << array[hold][4];
		cout << "\n\nExpiry Date : " << array[hold][5];
		cout << "\n\nCVC : " << array[hold][6];
		cout << "\n\nConfirm Payment Method and Book Trip? (Y = Yes confirm and book or N = Cancel Booking) : ";
		cin >> confirm;
		cout << YELLOW "*************************************************************************************************************" << RESET;
		if (confirm == 'Y' || confirm == 'y') {
			
			file << randId << "," << array[hold][0] << "," << loc << "," << des << "," << pas << "," << pay << ","<< spe << ","<< lug << "," << date << "," << tim <<   "\n";
			cout << "\n\n\n\n\t\t\t                                 Bill\n";
			cout << YELLOW "\t\t\t******************************************************************\n" << RESET;
			cout << YELLOW "\t\t\t*" << RESET "\tTrip ID                                " << randId << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\tName                                   " << array[hold][0] << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\tContact Number                         " << array[hold][1] << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\tStarting Location                      " << loc << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\tDestination                            " << des << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\tTrip Total                             $" << pay << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\tService Fee                            $" << service << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\n";
			cout << YELLOW "\t\t\t*" << RESET "\n";
			cout << YELLOW "\t\t\t*" << RESET "\tTotal                                  $" << pay + service << "\n";
			cout << YELLOW "\t\t\t*" << RESET "\n";
			cout << YELLOW "\t\t\t******************************************************************\n\n\n\n\n\n" << RESET;
			tripBooked();
				
		}
		else if (confirm == 'N' || confirm == 'n') {
			char reconfirm;
			cout << RED "\n\n*************************************\n" << RESET;
			cout << "Are you sure you want to cancel? (Y or N) \n";
			cout << RED "*************************************\n" << RESET;
			cin >> reconfirm;
			if (reconfirm == 'y'|| reconfirm == 'Y') {
				canFile << randId << "," << array[hold][0] << "," << loc << "," << des << "," << pas << "," << pay << "," << spe << "," << lug << "," << date << "," << tim << "\n";
			}
			else {
				break;
			}

			
		}
		
	}
		break;

	case 3: {
		time_t now = time(0);
		struct tm tstruct = *localtime(&now);
		int f = tstruct.tm_hour;
		cout << "\nTrip cost is $1.35 per km and $1.65 in peak hours (7am-9am and 5pm-7pm)\n";
		if (f == 7 || f == 8 || f == 9 || f == 17 || f == 18 || f == 19) {
			cout << "\nStandard Trip Cost at this time is $1.65 per km\n\n";
		}
		else {
			cout << "\nStandard Trip Cost at this time is $1.35 per km\n\n";
		}
	}
		  goto re;

	case 4:
		
		cout << "\n\n\n\nStandard Trips";
		cout << YELLOW "\n*************************************" << RESET;
		cout << "\n1. Airport           $35";
		cout << "\n2. Railway Station   $15";
		cout << "\n3. CBD               $15";
		cout << "\n4. Exit";
		cout << YELLOW "\n*************************************" << RESET;
		cout << "\nEnter your Option to Book Trip or Exit : ";
		cin >> ans2;
		if (ans2 == 1) {
			setloc = "Airport";
			goto trip;
		}
		else if (ans2 == 2) {
			setloc = "Railway Station";
			goto trip;
		}
		else if (ans2 == 3) {
			setloc = "CBD";
			goto trip;
		}
		else {
			goto re;
		}
	case 5:

		exit;
	}
	file.close();
	myfile.close();
	canFile.close();
}

struct UserReg {
	//Joel
public:
	string name, number, email, address, payment, date, cvc, password;

	UserReg() {
		name = "", number = "", email = "", address = "", payment = "", date = "", cvc = "", password = "";
	}
};

void userReg() {
	// Joel 
relog:
	UserReg data[8];
	UserReg alldata;
	int logans;	
	char ch;
	cout << "\n\nCustomer Login\n";
	cout << YELLOW "*************************************\n" << RESET;
	cout << "1. Login\n";
	cout << "2. Register\n";
	cout << YELLOW "*************************************\n" << RESET;
	cout << "Please Select an Option : ";
	cin >> logans;

	if (logans == 1) {
		//Login
		ifstream myfile;
		myfile.open("customerFile.csv", ios::in);
		string line, email, field, pass = "";
		int linenum = 0;
		char ch;
		cin.ignore();
		cout << "\n";
		cout << "\n\nCustomer Login\n";
		cout << YELLOW "*************************************\n" << RESET;
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
			for (size_t j = 0; j < 7; ++j) {
				//cout << array[i][j] << ", ";
				if (array[i][j] == email) {
					cout << "\nEmail Found in line : " << i + 1 << " " << array[i][j];	
						repass:
						cout << "\n\nEnter Your password : ";
						//cin >> pass;
						ch = ' ';
						while (true) {
							ch = _getch();
							if (ch == 13) {
								break;
							}
							else if (ch == '\b') {
								pass.pop_back();
								cout << "\b \b";
							}
							else {
								pass.push_back(ch);
								cout << "*";
							}
						}

							if (array[i][7] == pass) {
								cout << YELLOW "\n*************************************\n" << RESET;
								cout << "Password Correct Welcome " << array[i][0] << "\n";
								cout << YELLOW "*************************************\n\n" << RESET;
								int hold = i;
								userMain(hold);
							}
								else {
									cout << "\n\nPassword Inncorrect Try Again.";
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
		string pass1 = "", pass2 = "", filler = "Filler";
		ofstream myfile;
		char ch1, ch2;
		cout << "\n\nRegister\n";
		cout << YELLOW "*************************************\n" << RESET;
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


			cout << "\nEnter Visa Card Number : ";
			getline(cin, UR.payment);


			cout << "\nEnter Card Expiry Date(MM*YY) : ";
			getline(cin, UR.date);


			cout << "\nCVC : ";
			getline(cin, UR.cvc);

			cout << "\nEnter Password : ";
			ch1 = ' ';
			while (true) {
				ch1 = _getch();
				if (ch1 == 13) {
					break;
				}
				else if (ch1 == '\b') {
					pass1.pop_back();
					cout << "\b \b";
				}
				else {
					pass1.push_back(ch1);
					cout << "*";
				}
			}

			cout << "\nRe-Enter Password :  ";
			ch2 = ' ';
			while (true) {
				ch2 = _getch();
				if (ch2 == 13) {
					break;
				}
				else if (ch2 == '\b') {
					pass2.pop_back();
					cout << "\b \b";
				}
				else {
					pass2.push_back(ch2);
					cout << "*";
				}
			}
			if (pass1 == pass2) {
				UR.password = pass2;
				myfile << UR.name << "," << UR.number << "," << UR.email << "," << UR.address << "," << UR.payment << "," << UR.date << "," << UR.cvc << "," << UR.password << "\n";
				cout << YELLOW "\n\n*************************************\n" << RESET;
				cout << " Thank you for Registering " << UR.name;
				cout << YELLOW "\n*************************************\n\n\n" << RESET;
				myfile.close();
			}
			
			
			

	} 
	else {
	cout << "\nPlease Enter a Valid Input.\n";
	goto relog;
	}
}

void adminMenu() {

	string usernameCheck, passwordCheck, storedPassword = "500Miles", storedLogin = "OnlyTrippers";
	//Login 
	cout << "\n\nAdmin Menu\n";
	drawLine();
	cout << "\nLogin:\n";
	cout << "Username: ";
	cin >> usernameCheck;
	cout << "\nPassword: ";
	cin >> passwordCheck;
	//Password Checking
	while (usernameCheck != storedLogin && passwordCheck != storedPassword) {
		cout << "\nThat login dosen't match please try again.\n";
		cout << "\nLogin:\n";
		cout << "Username: ";
		cin >> usernameCheck;
		cout << "\nPassword: ";
		cin >> passwordCheck;
	}
	drawLine();
	cout << "Welcome Admins";
	drawLine();

	//file access

	//driver File
	ifstream driverFile;
	driverFile.open("driverFile.csv", ios::in);
	string line, field;
	int linenum = 0;
	vector <vector<string> > array1;
	vector<string> v;

	while (getline(driverFile, line)) {
		v.clear();
		stringstream ss(line);
		while (getline(ss, field, ',')) {
			v.push_back(field);
		}
		array1.push_back(v);
	}

	//customer file
	ifstream customerFile;
	customerFile.open("customerFile.csv", ios::in);
	string lineb, fieldb;
	int linenumb = 0;
	vector <vector<string> > array2;
	vector<string> vc;

	while (getline(customerFile, lineb)) {
		v.clear();
		stringstream ss(lineb);
		while (getline(ss, fieldb, ',')) {
			v.push_back(fieldb);
		}
		array2.push_back(v);
	}
	//cancelation file
	ifstream cancelFile;
	cancelFile.open("cancelFile.csv", ios::in);
	string linec, fieldc;
	int linenumc = 0;
	vector <vector<string> > array3;
	vector<string> vd;

	while (getline(cancelFile, linec)) {
		v.clear();
		stringstream ss(linec);
		while (getline(ss, fieldc, ',')) {
			v.push_back(fieldc);
		}
		array3.push_back(v);
	}
	//getting data for Processing 
	//tripcount
	int tripTemp = 0, tripCount;
	for (int i = 0; i != 25; i++)
	{
		tripTemp = tripTemp + stoi(array1[i][22]);
	} 
	tripCount = tripTemp;
	//payments
	int tempPay = 0, payments;
	for (int i = 0; i != 25; i++) 
	{
		tempPay = tempPay + stoi(array1[i][23]);
	}
	payments = tempPay;
	//paid to drivers
	int taken = 5, paidToDrivers = 0, remainder;

	taken = (payments * taken) / 100;

	remainder = paidToDrivers % taken;

	//net profit calculation
	int gross = taken, taxD = 15, netProfit;
	
	netProfit = (gross * taxD) / 100;


	//Weekly Report
	cout << "\n\nWeekly Report\n";
	drawLine();
	cout << "\nNumber of trips: " << tripCount;
	cout << "\namount in payments: " << payments;
	cout << "\nPaid to drivers: $" << paidToDrivers;
	cout << "\nGross income: " << gross;
	cout << "\nTax deduction: %" << taxD;
	cout << "\nNet profit: " << netProfit;
	cout << "\n";
	drawLine();
	
	//Driver Report
	cout << "Driver Report\n";
	drawLine();
	for (int j = 0; j != 10; j++)
	{
		for (int i = 0; i != 7; i++)
		{
			cout << array1[j][i];
		}
	}
	drawLine();

	//Customer Report
	cout << "Customer Report\n";
	drawLine();
	for (int j = 0; j != 10; j++)
	{
		for (int i = 0; i != 4; i++)
		{
			cout << array2[j][i];
		}
	}
	//getting customer info
	

	//Cancellation Report
	int cancelAmount = 0, loss = 0;
	for (int j = 0; j != 10; j++)
	{
		cancelAmount = cancelAmount + stoi(array3[j][4]);
		loss = loss + stoi(array3[j][5]);
	}
	cout << "Cancelation Report";
	drawLine();
	cout << "\nAmount of cancelattions: " << cancelAmount;
	cout << "Profit loss: $" << loss;
	cout << "\n";
	drawLine();
}

int main()
{

	
	int ans;
	rerun:
	cout << "\nTaxi Trip Booking System\n";
	cout << YELLOW << "*************************************\n" << RESET;
	cout << "             Only Trips\n";
	cout << YELLOW "*************************************\n\n" << RESET;
	cout << "1. Terms and Conditions\n";
	cout << "2. Customer Login\n";
	cout << "3. Driver Login\n";
	cout << "4. Admin Login\n";
	cout << "5. Exit Program\n\n";
	cout << YELLOW "*************************************\n" << RESET;
	cout << "Please Select an Option : ";
	cin >> ans;

	switch (ans) {
	case 1: 
		printTerms();
		goto rerun;

	case 2 : 
	
		userReg();
	
		goto rerun;
	case 3 :
		driverLogin();
		goto rerun;

	case 4 :
		/*adminMenu();*/
		goto rerun;

	case 5 : 

		break;
	}









	}







