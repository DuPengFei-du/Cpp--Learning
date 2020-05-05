#include"Person.h"

#include<string.h>
#include<iostream>
using namespace std;

void Person::InitPerson(char* name, char* gender, int age)
{
	strcpy_s(_name, name);
	_age = age;
	strcpy_s(_gender, gender);
}
void Person::PrintPerson()
{
	cout << _name << "-" << _age << "-" << _gender << endl;
}