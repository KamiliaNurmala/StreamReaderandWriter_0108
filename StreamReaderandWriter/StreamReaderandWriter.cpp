#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dlm mode menulis
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true){
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}

	// selesai dalam menulis sekarang tutup filenya
	outfile.close();

	// membuka dile dalam mode membaca
	ifstream file;
}