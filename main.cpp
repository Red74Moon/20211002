#include <iostream>

using namespace std;

struct Employee 
{
	short id;
	int age;
	char name;
};


int main()
{
	Employee E1;
	E1.id = 1;
	E1.age = 10;
	E1.name = 'J';

	cout << "ID : " << E1.id << endl;
	cout << "AGE : " << E1.age << endl;
	cout << "Name : " << E1.name << endl;


	return 0;
}