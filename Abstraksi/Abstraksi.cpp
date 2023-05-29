#include <iostream>
using namespace std;

class Abstraksi {
private:
	string x, y;
public:
	//Method untuk mengisi nilai
	//private number
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	//Menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};