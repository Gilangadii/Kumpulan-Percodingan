#include <iostream>
#include <string>
using namespace std;

main(){

	int JB, STB, SSB, HS, P, JP, TB, UK;
	string NB;
	cout<<"----------FARHAN KEBAB ENAK SEKALI----------"<<endl;
	cout<<"Nama Barang       : ";
	getline(cin,NB);
	cout<<"Stok Barang       : ";
	cin>>STB;
	cout<<"Jumlah Beli       : ";
	cin>>JB;
	SSB = STB - JB;
	cout<<"Sisa Barang       : "<<SSB<<endl;
	cout<<"Harga Satuan      : ";
	cin>>HS;
	P = JB * HS * 0.1;
	cout<<"Pajak 10%         : "<<P<<endl;
	TB = JB * HS + P;
	cout<<"Total Belanja     : "<<TB<<endl;
	cout<<"Jumlah Pembayaran : ";
	cin>>JP;
	UK = JP - TB;
	cout<<"Uang Kembali      : "<<UK<<endl;
	
	if (TB >=200000 && TB <= 300000){
		cout<<"Mendapatkan Baju ";
	}
	else if (TB >=100000 && TB <=199500){
		cout<<"Mendapatkan Payung";
	}
	else if (TB >=90000 && TB <=99999){
		cout<<"Mendapatkan Piring";
	}
	else if (TB >=80000 && TB <=89999){
		cout<<"Mendapatkan Gelas";
	}
	else if (TB >=50000 && TB <=79999){
		cout<<"Mendapatkan Sabun Mandi";
	}
	else if (TB >=20000 && TB<=49999){
		cout<<"Mendapatkan Sikat Gigi";
	}
	else {
		cout<<"Tidak Mendapatkan Apa-Apa";
	}
	
	
}
