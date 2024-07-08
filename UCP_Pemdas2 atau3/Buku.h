#ifndef BUKU_H
#define BUKU_H

class buku {
	string judul;
	vector<pengarang*> nama_pengarang;

	buku(string pjudul) :nama(pjudul) {
		cout << "buku \"" << judul << "\" ada\n";
	}
	~buku() {
		cout << "buku \"" << judul << "\" tidak ada\n";
	}
	void tambahpengarang(pengarang*);
	void cetakpengarang();
};

void buku::tambahpengarang(pengarang* ppengarang) {
	nama_pengarang.push_back(ppengarang);
}
void buku::cetakpengarang() {
	cout << "nama buku dari pengarang \"" << this->nama << "\":\n";
	for (auto& a : nama_pengarang) {
		cout << a->nama << "\n";
	}
}
#endif