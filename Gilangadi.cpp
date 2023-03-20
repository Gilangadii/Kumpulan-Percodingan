#include <iostream>
#include <string>
using namespace std;
main(){
	cout<<"====================================================="<<endl;
	cout<<"------------MENGHITUNG BIAYA RUMAH SAKIT-------------"<<endl;
	cout<<"====================================================="<<endl;
	
	string nama, alamatp, JenisK, pelayanan, bonus;
	int mli, hi, uk, up, pjrs, z, total, totalB;
	
	cout<<"Nama Pasien 		 : ";
	getline (cin,nama);
	cout<<"Alamat Pasien 	 	 : ";
	getline (cin,alamatp);
	cout<<"Jenis Kelamin 	 	 : ";
	getline (cin,JenisK);
	cout<<"Masukan Lama Inap 	 : ";
	cin>>mli;
	cout<<"Harga inap/malam	 : ";
	cin>>hi;
	
	cout<<"========================================="<<endl;
	cout<<"=============SLIP PEMBAYARAN============="<<endl;
	cout<<"========================================="<<endl;
	total = mli * hi;
	
	cout<<"Nama Pasien 		= "<<nama<<endl;
	cout<<"Alamat Pasien 		= "<<alamatp<<endl;
	cout<<"Jenis Kelamin 		= "<<JenisK<<endl;
	cout<<"Lama Menginap 		= "<<mli<<endl;
	cout<<"Harga Per malam 	= Rp."<<hi<<endl;

	if (total >=5000000 && total<=10000000){
		pjrs = total * 0.4;
		z = total * 0.15;
		pelayanan = "Eksekutif";
		bonus = "Wisata Yogya";
	}
	else if (total >=4000000 && total<=4999999){
		pjrs = total * 0.35;
		z = total * 0.125;
		pelayanan = "VVIP";
		bonus = "Wisata Semarang";
	}
	else if (total >=3000000 && total<=3999999){
		pjrs = total * 0.3;
		z = total * 0.12;
		pelayanan = "VIP";
		bonus = "Wisata Solo";
	}
	else if (total >=2000000 && total<=2999999){
		pjrs = total * 0.25;
		z = total * 0.1;
		pelayanan = "Kelas 1";
		bonus = "Wisata Bandung";
	}
	else if (total >=1000000 && total<=1999999){
		pjrs = total * 0.2;
		z = total * 0.075;
		pelayanan = "Kelas 2";
		bonus = "Wisata Jakarta";
	}
	else {
		pjrs = total * 0.1;
		z = total * 0.005;
		pelayanan = "Kelas 3";
		bonus = "Dirumah Saja";
	}

	cout<<"Pajak RS 		= Rp."<<pjrs<<endl;
	cout<<"Zakat anda 		= Rp."<<z<<endl;
	
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| PELAYANAN 		: "<<pelayanan<<endl;
	cout<<"| BONUS			: "<<bonus<<endl;
	cout<<"-------------------------------------------------"<<endl;
	totalB = total + z + pjrs;
	cout<<"Total Pembayaran Rumah Sakit :Rp. "<<totalB<<endl;
	cout<<"Masukan Uang Pembayaran :Rp. ";cin>>up;
	uk = up - totalB;
	cout<<"Uang Kembali Adalah 	:Rp. "<<uk;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
