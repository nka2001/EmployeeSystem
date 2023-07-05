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
	Employee(char* n, int i) {
		name = n;
		id = i;
	}

	/*
	* print function, will return the name and ID of the employee
	*/
	char* print()
	{
		return nullptr;
	}

	/*
	* getID will return the id of the employee
	*/
	int getID()
	{
		return 0;
	}

	/*
	* getName will return the name of the employee
	*/
	char* getName()
	{
		return nullptr;
	}

	/*
	* setID will set the id of the employee
	*/
	void setID(int i)
	{
	}

	/*
	* setName will set the name of the employee
	*/
	void setName(char* n)
	{
	}

};