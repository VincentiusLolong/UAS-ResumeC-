#include <iostream> // digunakan untuk emnampilkan perintah : Cin, Cout, Endl, Ends
#include <fstream> //program bisa membaca isi file sekaligus memberikan output ke dalam file yang berformat (.txt)
#include <conio.h> //Digunakan untuk menampilakan perintah: getch, clrsrc, getche, putch,Clreol
#include <cstdlib> //untuk beberapa fungsi rutin umum (konversi dll) dan untuk operasi matematika. Fungsi-fungsi pustaka yang umum digunakan untuk menampilkan hasil yang prototype-nya berada di file judul
#include <windows.h> //  Menjalankan perintah-perintah sebagai berikut : color dan posis coridor pada tampilan c++
using namespace std;

struct mahasiswa//fungsi deklarasi
{
	char nama[30];
	char pekerjaan[30];
};

mahasiswa ueu;
char fileInput[20], fileInput2[20], fileInput3[20];

int garis() // Fungsinya untuk menampilkan garis sebanyak i/70 
{
	for(int i=0; i<52; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

void gotoxy(int x, int y)//sebagai funsi posisi dalam tampilan data (screen di c++)
 
{
 
    COORD coord;
 
    coord.X = x;
 
    coord.Y = y;
 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 
}

int menu() // Fungsinya untuk menampilkan pilihan yang akan di gunakan
{
	system("color F4");
	gotoxy(32,1);
	garis();
	gotoxy(23,2);
	cout<<"  \t| Nama 	= Vincentius Tri Nugroho Kuswiharto Lolong |\n"<<endl;
	gotoxy(23,3);
	cout<<"  \t| NIM  	=                20170801214               |"<<endl;
	gotoxy(32,4);
	garis();
	garis();
	cout<<"                === Data Mahasiswa  ===         "<<endl;
	garis();
	cout<<"Silahkan pilih kode yang Anda inginkan : "<<endl;
	cout<<"[1] Input Data Mahasiswa"<<endl;
	cout<<"[2] Tambah Data Mahasiswa"<<endl;
	cout<<"[3] Baca Data Mahasiswa"<<endl;
	cout<<"[4] Gabung Data Mahasiswa"<<endl;
	cout<<"[5] Keluar"<<endl;
	garis();
	cout<<"Masukkan kode yang Anda pilih [1/2/3/4] : ";
}

int masukkan_data()
{
	cout<<"Masukkan nama file (.txt) : "; // Memasukan nama file dalam bentuk notepad
	cin.getline(fileInput,20);
	ofstream simpan (fileInput);
	system("cls"); // Untuk menghapus screen
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\nPekerjaan\t : ";
	cin.getline(ueu.pekerjaan,30);
	simpan<<ueu.pekerjaan<<endl;
	cout<<"\n\n\n"; system("pause");
}

int tambah_data() // Untuk menambahkan data
{
	cout<<"Masukkan nama file (.txt) : ";
	cin.getline(fileInput,20);
	ofstream simpan (fileInput, ios::app); // File ios app fungsinya untuk menambah data dalam aplikasi
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\nPekerjaan\t : ";
	cin.getline(ueu.pekerjaan,30);
	simpan<<ueu.pekerjaan<<endl;
	cout<<"\n\n\n"; system("pause");
}

int baca_data() 
{
	cout<<"Masukkan nama file (.txt): ";
	cin>>fileInput;
	ifstream buka (fileInput);
	if(buka.good()) // Jika data yang dicari sama dengan data yang tersedia
	{
		while(!buka.eof()) // Ketika data terbuka 
		{
			system("cls");
			while(buka)
			{ 
				buka.getline(ueu.nama,30);	// Menampilkan data yang di input 
				cout<<"Nama : \n"<<ueu.nama<<endl;
				buka.getline(ueu.pekerjaan,30);
				cout<<"\nPekerjaan : "<<ueu.pekerjaan<<endl;
			}
		}
		cout<<"\n\n\n"; system("PAUSE");
	}
	else cout<<"file tidak ada"<<endl; // Jika data yang di cari tidak tersedia atau yang tidak da dalam data
	getch();
}

int gabung_data() // Fungsi untuk menggabung dua data 
{
	cout<<"Masukkan nama file ke-1 (.txt): ";
	cin.getline(fileInput2,20);
	cout<<"Masukkan nama file ke-2 (.txt): ";	
	cin.getline(fileInput3,20);
	ifstream buka1 (fileInput2); // Jika file yang di cari adalah file ke satu maka yang muncul fungsi file input 2 atau jika file kedua maka fungsi file input 3  
	ifstream buka2 (fileInput3);
	
	ofstream gabung("gabung.txt");
	ofstream gabung2("gabung.txt", ios::app);
	
	while(buka1)
	{
		buka1.getline(ueu.nama,30);	
		gabung<<ueu.nama<<"\n";
		buka1.getline(ueu.pekerjaan,30);	
		gabung<<ueu.pekerjaan<<"\n";
	}
	buka1.close();
	gabung.close(); 
	

	while(buka2)
	{
		buka2.getline(ueu.nama,30);	
		gabung2<<ueu.nama<<"\n";
		buka2.getline(ueu.pekerjaan,30);	
		gabung<<ueu.pekerjaan<<"\n";
	}
	buka2.close();
	gabung2.close();
	
} 

int main()
{
	char kode;

	data_aku:
	system("cls"); menu(); cin>>kode; cin.ignore(); system("cls");//untuk kode sebuah data yang di input

   	switch (kode)//fungsi untuk emndeklarasikan data dan melakukan loop ke lokasi(goto data(nama))
   	{
   		case '1': masukkan_data(); goto data_aku;
   		case '2': tambah_data(); goto data_aku;
		case '3': baca_data(); goto data_aku;
		case '4': gabung_data(); goto data_aku;
		case '5': cout<<"\n\n\tBYE!!!"<<endl; break;
   	 	default : cout<<"\n\n\tKODE YANG ANDA MASUKAN SALAH!!!\n\n"<<endl; //jika tidak tersedia maka salah dan muncul cout sesuai yang tertera
				 system("PAUSE"); goto data_aku;
   	}
   	return 0;
   }
