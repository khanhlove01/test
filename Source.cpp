#include <iostream>
#include <string>
#include <string.h>
#include <cstring>

using namespace std;
class Student{

public:
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];
	
	Student() {
		name[0] = '\0'; // this->name[0] = '\0';
		address[0] = '\0';
		ID[0] = '\0';
		age = 0;
		mark = 0;
	}

	Student(char* name, int age, char* id, char* address, float mark)
	{
		strscp_s(this->name, 99, name);
	}
	
	void showinfo()
	{
		cout << "=============== Student Info ==============" << endl;
		cout << "====== Name: " << name << endl;
		cout << "====== Address: " << address << endl;
		cout << "====== ID : " << endl;
		cout << "====== Age: " << endl;
		cout << "====== Mark: " << endl;
		cout << "===========================================" << endl;
	}
};
int main()
{

}