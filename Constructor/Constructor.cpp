#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();

	Mahasiswa(string pnama) {
		setID;
	}
};

int Mahasiswa::nim = 185;

void Mahasiswa::setID() {
	id = ++nim;
}





int main() {
	
}
