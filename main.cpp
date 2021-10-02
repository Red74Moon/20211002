#include <iostream>
#include <string>


//주석 추가
using namespace std;

struct Employee 
{
	string id;
	string age;
	string name;
};


int main()
{
	Employee E1;
	cout << "ID : ";
	getline(cin, E1.id);
	cout << "Age : ";
	getline(cin, E1.age);
	cout << "Name : ";
	getline(cin, E1.name);

	cout << endl << endl;

	cout << "ID : " << E1.id << endl;
	cout << "AGE : " << E1.age << endl;
	cout << "Name : " << E1.name << endl;


	return 0;
}