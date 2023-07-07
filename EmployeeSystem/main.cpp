#include <iostream>

#include "Employee.cpp"

using namespace std;

int main() {
	
	bool chooseQ = false;
	string choice = "";

	cout << "#####################################################\n \t  Welcome to the Employee Database\n\n";
	cout << "Please choose one of the following options: \n E: Enter a new employees information \n F: Find an employee \n C: Clear the employee database \n A: Show all employees in the database \n Q: Quit \n";


	while (true) {
		
		cout << "Your Choice: ";
		cin >> choice;

		if (choice.compare("A") == 0) {
			
			cout << "All option selected, Processing...";
			//then do all (or call it rather)
		}
		else if (choice.compare("E") == 0) {

			cout << "Enter a new employees information: \n";
			cout << "Name: ";
			
			string name = "";

			cin >> name;

			cout << "\n ID: ";

			int id = 0;

			cin >> id;

			Employee newEmp(name, id);
			



			//gather and pass input to setters
		} 
		else if (choice.compare("F") == 0) {
			
			cout << "Enter the ID of the employee you'd like to find information on: ";



		}
		else if (choice.compare("C") == 0) {

			cout << "Clearing the list...";

		}
		else if (choice.compare("Q") == 0) {

			cout << "Quitting...";
			break;//simply break out of the loop

		}
		else {
			cout << "Error, incorrect choice, please try again\n";

		}
		
	
	
	}






	return 0;
}