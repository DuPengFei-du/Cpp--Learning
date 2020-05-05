#pragma once 

class Person
{
	void InitPerson(char* name, char* gender, int age);

	void PrintPerson();

	char _name[20];
	char _gender[3];
	int _age;
};