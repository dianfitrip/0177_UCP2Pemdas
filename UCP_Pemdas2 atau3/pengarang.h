#ifndef PENGARANG_H
#define PENGARANG_H

class pengarang {
	string nama;
	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \"" << nama << " ada\n";
	}
	~Anak() {
		cout << "pengarang \"" << nama << "\" tidak ada\n";
	}
};


#endif