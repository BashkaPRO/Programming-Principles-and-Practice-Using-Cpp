//#include "../std_lib_facilities.h"  // added the ../ because up a level from source files
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main()
{
	cout << "Enter name and age\n";
	string name = "???";
	int age = 0;
	cin >> name >> age;
	cout << "Hi " << name << " you are " << age << "?\n";


	keep_window_open();
	return 0;
}