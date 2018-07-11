#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char nama [40];
	char NIK [17];
	char ttl [30];
	char jeniskelamin [20];
	char Alamat [50];
	char Agama [50];
	char StatusPerkawinan [10];
	char Pekerjaan [20];
	char Kewarganegaraan [20];
	char Berlakuhingga [30];
	cout<<"imput data KTP\n";
	cout<<"nama : ";
	cin.getline(nama,40);
	cout<<"NIK : ";
	cin.getline(NIK,17);
	cout<<"Tempat/tanggal lahir : ";
	cin.getline(ttl,30);
	cout<<"jenis kelamin : ";
	cin.getline(jeniskelamin,20);
	cout<<"Alamat : ";
	cin.getline(Alamat,50);
	cout<<"Agama : ";
	cin.getline(Agama,50);
	cout<<"StatusPerkawinan : ";
	cin.getline(StatusPerkawinan,10);
	cout<<"Pekerjaan : ";
	cin.getline(Pekerjaan,10);
	cout<<"Kewarganegaraan : ";
	cin.getline(Kewarganegaraan,10);	
	cout<<"Berlaku hingga : ";
	cin.getline(Berlakuhingga,30);
getch();
}
