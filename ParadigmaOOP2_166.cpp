#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "Orang di buat\n" << endl; 
	}
	~orang() {
		cout << "Orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jenisKelamin;
};