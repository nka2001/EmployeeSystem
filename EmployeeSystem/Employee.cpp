#include "Employee.h"
#include <string>

using namespace std;

class Employee {

private:

	string name = "";
	int id = 0;

public:

	/*
	* default constructor
	*/
	Employee() {
		name = "";
		id = 0;
	}

	/*
	* overloaded constructor, takes name and id as parameters
	*/
	Employee(string n, int i) {
		name = n;
		id = i;
	}

	/*
	* print function, will return the name and ID of the employee
	*/
	string print()
	{
		string var = "Name: " + name + " ID: " + to_string(id) + "\n";
		return var;
	}

	/*
	* getID will return the id of the employee
	*/
	int getID()
	{
		return id;
	}

	/*
	* getName will return the name of the employee
	*/
	string getName()
	{
		return name ;
	}

	/*
	* setID will set the id of the employee
	*/
	void setID(int i)
	{
		id = i;

	}

	/*
	* setName will set the name of the employee
	*/
	void setName(char* n)
	{
		name = n;
	}

};