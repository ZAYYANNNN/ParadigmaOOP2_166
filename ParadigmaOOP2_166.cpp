#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string name;

	orang(string pNama) :
		nama(pNama) {
		cout << "Orang di buat\n" << endl; 
	}
};