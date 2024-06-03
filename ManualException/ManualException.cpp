#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main() {
	try {
		cout << "Selamat belajar di prodi TI UMY" << endl;

		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualiana kan dieksekusi" << endl;
	}
	catch (...) {
		cout << "default pengecualian dieksekusi" << endl;
	}
}