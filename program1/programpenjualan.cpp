#include <iostream>
#include <stdlib.h>
using namespace std;

int harga,jumlah,barang,bayar,kembalian,total1,total2,total3,metode,pilihan,totalakhir;
float diskon=0.1;
char nama[100],alamat[100],status[100],usia[100],pelajar,puas,daftar,lagi;
void AlatFitness(),AlatOlahraga(),Perlengkapan(),Total(),Status(),Pembayaran(),Puas();

void AlatFitness()
{
	cout<<"|===========================================|"<<endl;
	cout<<"|      Daftar Alat Fitness Home Workout     |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<"|      Nama Barang       |   Harga Barang   |"<<endl;
	cout<<"|========================|==================|"<<endl;
	cout<<"|1.Dumbbel 1-5 Kg        | Rp.45.000        |"<<endl;
	cout<<"|2.Resistance Band       | Rp.75.000        |"<<endl;
	cout<<"|3.Matras Olahraga       | Rp.55.000        |"<<endl;
	cout<<"|4.Handgrip              | Rp.15.000        |"<<endl;
	cout<<"|5.Sepeda Statis         | Rp.1.200.000     |"<<endl;
	cout<<"|6.Pull Up Bar           | Rp.50.000        |"<<endl;
	cout<<"|7.Ab Roller             | Rp.120.000       |"<<endl;
	cout<<"|8.Treadmill             | Rp.2.000.000     |"<<endl;
	cout<<"|9.Push Up Bar           | Rp.50.000        |"<<endl;
	cout<<"|10.Kettlebell           | Rp.75.000        |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<" Pilih barang yang anda inginkan       : ";
	cin>>barang;
	cout<<" Jumlah barang yang anda inginkan      : ";
	cin>>jumlah;
	cout<<" Jumlah barang yang anda beli          : "<<jumlah<<endl;
	if(barang==1) {
		total1=45000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==2) {
		total1=75000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==3) {
		total1=55000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==4) {
		total1=15000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==5) {
		total1=1200000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==6) {
		total1=50000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else 
	if(barang==7) {
		total1=120000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==8) {
		total1=2000000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==9) {
		total1=50000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
	else
	if(barang==10) {
		total1=75000*jumlah;
		cout<<" Total harga barang yang anda beli     : Rp."<<total1<<endl;
	}
} 
void AlatOLahraga()
{
	cout<<"|===========================================|"<<endl;
	cout<<"|        Daftar Alat Cabang Olahraga        |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<"|      Nama Barang       |   Harga Barang   |"<<endl;
	cout<<"|========================|==================|"<<endl;
	cout<<"|1.Raket,Kok dan Tas     | Rp.150.000       |"<<endl;
	cout<<"|2.Bola Voli             | Rp.120.000       |"<<endl;
	cout<<"|3.Bola Sepak            | Rp.120.000       |"<<endl;
	cout<<"|4.Bola Basket           | Rp.120.000       |"<<endl;
	cout<<"|5.Cone Kerucut 1 Set    | Rp.50.000        |"<<endl;
	cout<<"|6.Busur Panah dan Panah | Rp.200.000       |"<<endl;
	cout<<"|7.Samsak Tinju          | Rp.180.000       |"<<endl;
	cout<<"|8.Net Voli              | Rp.120.000       |"<<endl;
	cout<<"|9.Stopwatch             | Rp.80.000        |"<<endl;
	cout<<"|10.Tongkat Estafet      | Rp.25.000        |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<" Pilih barang yang anda inginkan       : ";
	cin>>barang;
	cout<<" Jumlah barang yang anda inginkan      : ";
	cin>>jumlah;
	cout<<" Jumlah barang yang anda beli          : "<<jumlah<<endl;
	if(barang==1) {
		total2=150000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==2) {
		total2=120000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==3) {
		total2=120000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==4) {
		total2=120000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==5) {
		total2=50000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==6) {
		total2=200000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==7) {
		total2=180000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==8) {
		total2=120000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
	else
	if(barang==9) {
		total2=80000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	} 
	else 
	if(barang==10) {
		total2=25000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total2<<endl;
	}
}
void Perlengkapan()
{
	cout<<"|===========================================|"<<endl;
	cout<<"|       Daftar Perlengkapan Olahraga        |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<"|      Nama Barang       |   Harga Barang   |"<<endl;
	cout<<"|========================|==================|"<<endl;
	cout<<"|1.Kacamata Renang       | Rp.20.000        |"<<endl;
	cout<<"|2.Topi Renang           | Rp.40.000        |"<<endl;
	cout<<"|3.Kaus Kaki Olahraga    | Rp.10.000        |"<<endl;
	cout<<"|4.Sarung Tinju          | Rp.150.000       |"<<endl;
	cout<<"|5.Helm Tinju            | Rp.150.000       |"<<endl;
	cout<<"|6.Deker                 | Rp.15.000        |"<<endl;
	cout<<"|7.Jersey Olahraga       | Rp.120.000       |"<<endl;
	cout<<"|8.Gum Shield            | Rp.15.000        |"<<endl;
	cout<<"|9.Kacamata Lari         | Rp.60.000        |"<<endl;
	cout<<"|10.Target Panahan       | Rp.75.000        |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<" Pilih barang yang anda inginkan      : ";
	cin>>barang;
	cout<<" Jumlah barang yang anda inginkan     : ";
	cin>>jumlah;
	cout<<" Jumlah barang yang anda beli         : "<<jumlah<<endl;
	if(barang==1) {
		total3=20000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==2) {
		total3=40000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==3) {
		total3=10000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==4) {
		total3=150000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else 
	if(barang==5) {
		total3=150000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==6) {
		total3=15000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==7) {
		total3=120000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==8) {
		total3=15000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==9) {
		total3=60000*jumlah;   
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
	else
	if(barang==10) {
		total3=75000*jumlah;
		cout<<" Total harga barang yang anda beli    : Rp."<<total3<<endl;
	}
}
void Pembayaran()
{
	cout<<" Pembelian Alat Fitness anda : Rp."<<total1<<endl;
	cout<<" Pembelian Alat Cabor anda   : Rp."<<total2<<endl;
	cout<<" Pembelian Perlengkapan anda : Rp."<<total3<<endl;
	cout<<" Total harus yang anda bayar : Rp."<<totalakhir<<endl;
	cout<<" Anda bayar berapa           : Rp.";
	cin>>bayar;
	kembalian=bayar-totalakhir;
	cout<<" Kembalian anda              : Rp."<<kembalian<<endl;
}
void Status() 
{
	//decision Status
	cout<<" Apakah anda seorang pelajar : ";
	cin>>pelajar;
	if(pelajar=='I'||pelajar=='i') {
		totalakhir=total1+total2+total3;
		diskon=totalakhir*0.1;
		totalakhir=totalakhir-diskon;
		cout<<" Anda mendapatkan diskon     : Rp."<<diskon<<endl;
	}
}
void Puas()
{
	//decision Puas
	cout<<"|===============================================|"<<endl;
	cout<<" Apakah anda puas belanja di toko kami : ";
	cin>>puas;
	
    if(puas=='I'||puas=='i') {
    	
    	cout<<"|===============================================|"<<endl;
		cout<<"|  Terimakasih telah berbelanja di toko kami    |"<<endl;
		cout<<"|===============================================|"<<endl;
	}
	else 
	if(puas=='T'||puas=='t') {
		
		cout<<"|===============================================|"<<endl;
		cout<<"|   Mohon maaf bila layanan Toko kami kurang    |"<<endl;
		cout<<"|===============================================|"<<endl;
    } 
}
int main ()
{
	do 
	{
		system("CLS");
		system("color E");
		cout<<"|===================================================================|"<<endl;
		cout<<"| Selamat datang di toko kami semoga anda puas belanja di toko kami |"<<endl;
		cout<<"|  Silahkan daftarkan identitas anda(kami tidak akan melacak anda)  |"<<endl;
		cout<<"|===================================================================|"<<endl;
		cout<<" Masukkan nama anda   : ";
		cin.ignore();
		cin.getline(nama,100);
		cout<<" Masukkan status anda : ";
		cin.ignore();
		cin.getline(status,100);
		cout<<" Masukkan alamat anda : ";
		cin.ignore();
		cin.getline(alamat,100);
		cout<<" Masukkan usia anda   : ";
		cin.ignore();
		cin.getline(usia,100);
		cout<<" Ingin memilih barang : ";
		cin>>daftar;
	}while(daftar=='T'||daftar=='t');
	do {
	system("CLS");
	system("color E");
	cout<<"|===========================================|"<<endl;
	cout<<"|  Kategori Barang Bisa Dipilih Dibawah Ini |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<"|1.Alat Fitness                             |"<<endl;
	cout<<"|2.Alat Cabang Olahraga                     |"<<endl;
	cout<<"|3.Perlengkapan Olahraga                    |"<<endl;
	cout<<"|===========================================|"<<endl;
	cout<<" Silahkan memilih kategori barang : ";
	cin>>pilihan;
	switch(pilihan) {
		case 1 :
			AlatFitness();
			break;
		case 2 :
			AlatOLahraga();
			break;
		case 3 :
			Perlengkapan();
			break;
	}
	    cout<<"============================================"<<endl;
		cout<<" Apakah Anda Mau Membeli Lagi : ";
		cin>>lagi;
	}
	while(lagi=='I'||lagi=='i');
	
	cout<<"|===============================================|"<<endl;
    cout<<"|     Silahkan Pilih Untuk Metode Pembayaran    |"<<endl;
	cout<<"|===============================================|"<<endl;
	cout<<"| 1. Pembayaran Dengan Saldo                    |"<<endl;
	cout<<"| 2. Pembayaran Secara Tunai                    |"<<endl;
	cout<<"|===============================================|"<<endl;
	cout<<" Silahkan pilih untuk metode pembayaran : ";
	cin>>metode;
	switch(metode) {
		case 1 :
			
			cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
			cout<<"   Anda memilih pembayaran dengan saldo  "<<endl;
			cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
			Status();
			Pembayaran();
			break;
		case 2 :
			
			cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
			cout<<"   Anda memilih pembayaran secara tunai   "<<endl;
			cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
			Status();
			Pembayaran();
			break;
	}
	
	Puas();
}
