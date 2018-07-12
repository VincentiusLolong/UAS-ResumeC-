#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include <fstream>

using namespace std;
struct data_mahasiswa{
	char nama[100];
	double nilai[25];
	double nim[25];
};
int hitung(int a, double b[],double c[],double d[],int posisi)
{
	int tgs = 0, uts = 0, uas=0, e[25], hasil;
	
	hasil=0;
		for (int i=posisi+1;i<a;i++)
		{
			tgs = b[i]*0.2;
			uts = c[i]*0.3;
			uas = d[i]*0.5;
		
			e[i] = tgs+uts+uas;
			hasil = e[i];
			cout<<hasil;
		}
		return hasil;
	
}

int processNilaiAkhir(double sms3, double sms4, double sms5,double NUs, double NUn){
	double NS,NA,NR;
	
	NR = (sms3+sms4+sms5)/3;
	NS = (NR*0.7) + (NUs*0.3);
	NA = (NS*0.4) + (NUn*0.6);
	
	return NA;
}
//char getExamGrade (double hasil)
//{
//	char ket[6];
//	if(hasil>=4){
//		ket = "Lulus";
//		return ket;	
//	}else{
//		ket = "Tidak Lulus";
//		return ket;
//	}
//	
//	
//}
int garis(){
	cout<<"|==============================================================================|\n";
}
void data_diri(){
	cout<<"==============================================\n";
	cout<<"Nama = Vincetius Tri Nugroho Kuswiharto Lolong";
	cout<<"\nNIM  = 20170801214";
	cout<<"\n==============================================\n";
}
void menu(){
	system("CLS");	
	
    data_diri();
    
	cout<<"|===============================================|"<<endl;
	cout<<"|           Daftar Nilai Mahasiswa              |"<<endl;
	cout<<"|===============================================|"<<endl;
	cout<<"| 1. Input Data Pelajar        \t\t\t| \n";
	cout<<"| 2. Tampilkan Data Pelajar    \t\t\t| \n";
	cout<<"| 3. Tampilkan Data Berdasarkan Pelajaran\t| \n";
	cout<<"| 4. Exit Program \t\t\t\t| \n";
	cout<<"|===============================================|"<<endl;
	cout<<"|    Masukan Pilihan         : \n";
}

int main()
{
	ulang:
	data_mahasiswa jml[25];
	int pil,pilb,jumlah,kel,pilsort,temp;
	double tgs[25],ns[25],us[25],un[25],Nilai_avarage[25], Nilai_akhir[25],smstr3[50],smstr4[50],smstr5[50];
	int nomor[100];
	char ket[25][50];
	char lagi;
	int totalData;
	char name[10][50];
	char matkul[10][50];
	
	menu();
	cin>>pil;
	
	if(pil==1){
		system("CLS");
		cout<<"|===============================================|"<<endl;
		totalData += 1;
		for(int i=0; i<1;i++)
		{
			system("CLS");
			cout<<"|===============================================|"<<endl;
			fflush(stdin);
			cout<<"| Masukan Nama Peserta\t\t"<<" : ";
			cin.getline(name[totalData],50);
			cout<<"| Masukan Nilai Semester 3\t\t: ";
			cin>>smstr3[totalData];
			cout<<"| Masukan Nilai Semester 4\t\t: ";
			cin>>smstr4[totalData];
			cout<<"| Masukan Nilai Semester 5\t\t: ";
			cin>>smstr5[totalData];
			cout<<"| Masukan NIS Siswa\t\t: ";
			cin>>nomor[totalData];
			cout<<"| Masukan Nilai UN\t\t: ";
			cin>>un[totalData];
			cout<<"| Masukan Nilai US\t\t: ";
			cin>>us[totalData];			
			fflush(stdin);
			cout<<"| Masukan Nama Pelajaran       : ";
			cin.getline(matkul[totalData],50);

			cout<<Nilai_akhir[totalData];
						 
		}
		cout<<" pilih = \n";
		cout<<" Kembali Ke Menu Utama ? (Y/N) : \n";
		cin>>lagi;
		if(lagi=='Y')
		{
			goto ulang;
		}
		else
		{
			exit(0);
		}
	}
	else if(pil==2)
	{
		cout<<"| pelajaran\tNama\tSmstr 3\tSmstr 4\tSmstr5 \tUS\tUN\thasil\tketerangan"<<endl;
		garis();
		double finalUS,finalUN,final,Nilai3,Nilai4,Nilai5;
		for(int k = 1;k<totalData+1;k++){
			Nilai3 = smstr3[k];
			Nilai4 = smstr4[k];
			Nilai5 = smstr5[k];
			finalUN = un[k];
			finalUS = us[k];
			Nilai_akhir[k]=processNilaiAkhir(Nilai3,Nilai4,Nilai5,finalUS,finalUN);
			
			cout<<"| "<<matkul[k]<<"\t"<<name[k]<<"\t"<<smstr3[k]<<"\t"<<smstr4[k]<<"\t"<<smstr5[k]<<"\t"<<us[k]<<"\t"<<un[k]<<"\t"<<Nilai_akhir[k]<<"\t"<<"\t"<<ket[k];
			if(Nilai_akhir[k]>=40){
				cout<<"Lulus"<<endl;
			}else{
				cout<<"Tidak Lulus"<<endl;
			}
		}
		cout<<" Kembali Ke Menu Utama ? (Y/N) : ";
		cin>>lagi;
		if(lagi=='Y')
		{
			goto ulang;
		}
		else
		{
			exit(0);
		}	
	}
		
	else if(pil==3){
		char pilihMatkul[10];
		int m;
		system("CLS");
		system("CLS");	
		cout<<"|===============================================|"<<endl;
		cout<<"|           Daftat Niali Mahasiswa              |"<<endl;
		cout<<"|===============================================|"<<endl;
		cout<<"| 1. Sorting semua data per mata kuliah        \t| \n";
		cout<<"| 2. Search Berdasar matakuliah    \t\t| \n";
		cout<<"|===============================================|"<<endl;
		cout<<"|    Masukan Pilihan         : \n";
		cin>>m;
		if(m==1){
			cout<<"Success Sorting"<<endl;
		}
		else if(m==2){
			cout<<"Masukan Nama Mata Pelajaran yang dicari : "<<endl;
			cin>>pilihMatkul;
			
			cout<<"| matkul\tNIS\tUS\tUN\thasil\tketerangan"<<endl;
			for(int count=1 ;count<totalData+1;count++){
				if(strcmp(matkul[count+1],pilihMatkul)){
					cout<<matkul[count]<<"\t"<<nomor[count]<<"\t"<<us[count]<<"\t"<<un[count]<<"\t"<<Nilai_akhir[count]<<"\t"<<"\t"<<ket[count]<<endl;
				}
				else{
					cout<<"Failed Iteration with Character";
				}
			}
			cout<<" Kembali Ke Menu Utama ? (Y/N) : \n";
			cin>>lagi;
			if(lagi=='Y')
			{
				goto ulang;
			}
			else
			{
				exit(0);
			}
		}
		else{
			cout<<"failed to process data";
		}
		
	}
	else if(pil==4){
		exit(0);
	}
	else{
		cout<<"Data Yang anda masukkan tidak sesuai dengan Pilihan Yang tertera ";
		cout<<"Apakan anda Ingin mengulang lagi?";
		cout<<"(Y/N)?";
		cin>>pilb;
		if(pilb=='Y' && pilb=='y'){
			system ("CLS");
			goto ulang;
		}
		else
		{
  			exit(0);	
		}	
	}
	getch();
  }
