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
	ifstream infile;
	// menunjuk ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	// jika file ada maka
	if (infile.is_open()) {
		// melakukan perulangan setiap baris
		while (getline(infile, baris)) {
			// dan tampilkan di sini
			cout << baris << '\n';
		}

		// tutup file tersebut setelah selesai
		infile.close();
	}
}