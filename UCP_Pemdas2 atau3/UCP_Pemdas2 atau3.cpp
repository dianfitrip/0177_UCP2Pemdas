#include <iostream>
#include <vector>
using namespace std;

#include "buku.h"
#include "pengarang.h"

//!class penerbit.
/*!berisikan variabel nama dari penerbit dan pengarang*/
class penerbit;
class pengarang
{
public:
	string nama;
	vector<penerbit*> nama_penerbit;
	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \"" << nama << "\" ada\n";
	}
	~pengarang() {
		cout << "pengarang \"" << nama << "\" tidak ada\n";
	}

	void tambahpenerbit(penerbit*);
	void cetakpenerbit();
};


/*!class penerbit yang berisi variabel nama*/
class penerbit {
public:
	string nama;
	vector<pengarang*> nama_pengarang;

	penerbit(string pNama) : nama(pNama) {
		cout << "penerbit \"" << nama << "\" ada\n";
	}
	~penerbit() {
		cout << "penerbit \"" << nama << "\" tidak ada\n";
	}

	void tambahpengarang(pengarang*);
	void cetakpengarang();
};
/*!metode untuk menambahkan penerbit nya pengarang*/
void pengarang::tambahpenerbit(penerbit* ppenerbit)
{
	nama_penerbit.push_back(ppenerbit);
	
}
/*!metode cetak*/
void pengarang::cetakpenerbit()
{
	cout << "Nama Penerbit yang menerbitkan buku pengarang" << this->nama << "\:\n";
	for (auto& a : nama_penerbit) {
		cout << a->nama << "\n";
	}
}
/*!metode menambahakan pengarang*/
void penerbit::tambahpengarang(pengarang* ppengarang) {
	nama_pengarang.push_back(ppengarang);
	ppengarang->tambahpenerbit(this);
}
/*!methode cetak*/
void penerbit::cetakpengarang() {
	cout << "Daftar Pengarang dari penerbit \"" << this->nama << "\":\n";
	for (auto& a : nama_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
/*!int main nama-nama penerbit dan pengarang*/
int main() {
	penerbit* varpenerbit1 = new penerbit("gama press");
	penerbit* varpenerbit2 = new penerbit("intan pariwara");
	pengarang* varpengarang1 = new pengarang("joko");
	pengarang* varpengarang2 = new pengarang("lia");
	pengarang* varpengarang3 = new pengarang("giga");
	pengarang* varpengarang4 = new pengarang("asroni");
	
	

	varpenerbit1->tambahpengarang(varpengarang1);
	varpenerbit1->tambahpengarang(varpengarang2);
	varpenerbit1->tambahpengarang(varpengarang3);
	varpenerbit2->tambahpengarang(varpengarang4);
	varpenerbit2->tambahpengarang(varpengarang3);

	varpenerbit1->cetakpengarang();
	varpenerbit2->cetakpengarang();
	varpenerbit1->cetakpengarang();
	varpenerbit2->cetakpengarang();
	varpenerbit1->cetakpengarang();

	delete varpengarang1;
	delete varpengarang2;
	delete varpengarang1;
	delete varpengarang2;
	delete varpengarang1;


	buku* varbuku1 = new buku("fisika");
	buku* varbuku2 = new buku("algoritma");
	buku* varbuku3 = new buku("dasar pemrograman");
	buku* varbuku1 = new buku("fisika"); 


	return 0;
}

