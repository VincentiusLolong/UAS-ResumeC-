          							  	 		//|=======================================================================|
         										//             VINCENTIUS TRI NUGROHO KUSWIHARTO LOLONG                   |
         										//                             20170801214                                |
          										//|=======================================================================|
          										//|           3 jenis sorting dan Menu Searching(10.000 DATA)             |
          										//|=======================================================================|
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
					//==================================//
					//       Struct selectuon sorting   //
					//==================================//

struct selection{
	int i,j,Imaks,maks,temp, pil, choice,db;
	int cari,index;
	int ketemu=0;
	int sort;
	double total=10000;
};
selection se;
					//=================================//
					//       struct quick sorting      //
					//=================================//
struct quick{
	int total =10000;
	int db[10000];
};
quick qu;
					//==================================//
					//       struct bubble sorting      //
					//==================================//
struct bubble{
	int tukar;
	char choice;
	int choice2;
};
bubble bu;

void data(){
	cout<<"|=================================================|\n";
	cout<<"|Nama : Vincentius Tri Nugroho Kuswiharto Lolong  |\n";
	cout<<"|NIM  :              20170801214                  |\n";
	cout<<"|=================================================|\n";
	cout<<"| 3 jenis sorting dan Menu Searching(10.000 DATA) |\n";
	cout<<"|=================================================|\n";
	
}

void menu(){
	cout<<"Menu Pilihan   		:\n";
	cout<<"[1] Bubble sort	   	 \n";
	cout<<"[2] Selection Sort	 \n";
	cout<<"[3] Quick sort        \n";
	cin>>se.sort;
}
					//====================================//
					//       Fungsi(tukar) quicksort      //
					//====================================//
void quicksort(int a[],int left, int right)
{
	int temp;
	int pusat =a[(left+right)/2];
	int i = left, j = right;
	if( i <= j)
	{
		while(a[i]<pusat)
		i++;
		while(a[j]>pusat)
		j--;
		
		if(i<=j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}
	}
	
	if(left<j){
		quicksort(a,left,j);
	}
	if(i<right){
		quicksort(a,i,right);
	}
}

int main(){
	system("color F4");
	data();
	menu();

					//==========================//
					//       QUICK SORTING      //
					//==========================//

if(se.sort==3){
		cout<<" Proses data ";
	
	for(se.i=0; se.i<se.total ; se.i++)
	{
		qu.db[se.i]=rand()%10000;
	}
		
	cout<<"\n\nsebelum di sorting : ";
	for(se.i =0;se.i<se.total;se.i++)
	{
		cout<<", "<<qu.db[se.i];
		
	}
	
	cout<<"Mau Pilih yang mana?\n";
	cout<<"1. ascending\n";
	cout<<"2. descending\n";
	cin>>se.pil;
	if(se.pil==1){
			quicksort(qu.db,0,qu.total-1);

	cout<<"\n\nsesudah di sorting : ";
	for(se.i=0;se.i<se.total;se.i++)
		{
			cout<<", "<<qu.db[se.i];
		}
	cout<<endl;
	}
	if(se.pil==2){
			cout<<"\n\nsesudah di sorting Descending: ";
			quicksort(qu.db,0,se.total-1);
				for(se.i=se.total;se.i>1; se.i--)
		{
			cout<<", "<<qu.db[se.i];
		}
	cout<<endl;
	}
		cout<<"Inputkan data yang ingin di cari = ";
		cin>>se.cari;
		for(se.i=0;se.i<se.total;se.i++)
{
		if(qu.db[se.i] == se.cari)
	{
		se.ketemu=1;
		se.index=1;
		break;
	}
	}
		if(se.ketemu == 1)
	{
		cout<<"Data tersedia!";
		cout<<"Data Terletak di index ke - "<<se.cari;
		}
			else{
			cout<<"Data tidak tersedia!";
			} 
		getch();
}	

					//=======================//
					//   SELECTION SORTING   //
					//=======================//

if(se.sort==2){
	cout<<"Mengurutkan Data Menggunakan Metode Selection sorting"<<endl;
 

 
int L[10000];
 
for(int i =0; i<9999;i++){
		L[i]=rand()%10000;
	} 
	
cout<<"Display data sebelum diurutkan (Y[1]/N[2]) ?"<<endl;
	cin>>se.choice;
	if(se.choice==1){
		for(int x =0;x<se.total;x++){
			cout<<"Data-"<<x<<" = "<<L[x]<<"\n";
		}
 
cout<<"Mau Pilih yang mana?\n";
cout<<"1. ascending\n";
cout<<"2. descending\n";
cin>>se.pil;

if(se.pil==1){
	for (se.i=9999;se.i>=1;se.i--){
 
	se.Imaks=0;
 
	se.maks=L[0];
 
	for (se.j=1;se.j<=se.i;se.j++) {
			if (L[se.j]>se.maks){ 
				se.Imaks=se.j;
				se.maks=L[se.j];
				}
		}
	 
		se.temp=L[se.i];
		L[se.i]=se.maks;
		L[se.Imaks]=se.temp;
	}
	 
	cout<<"data terurut ascending :"<<endl;
	 
	for (se.i=0;se.i<9999;se.i++){
		cout<<L[se.i]<<", ";
	}
}

	else if(se.pil==2){
			for (se.i=9999;se.i>=1;se.i--){
		se.Imaks=0;
		se.maks=L[0];
	
		for (se.j=1;se.j<=se.i;se.j++)
		{
			if (L[se.j]<se.maks)
			{
				se.Imaks=se.j;
				se.maks=L[se.j];
			}
			  }
				se.temp=L[se.i];
				L[se.i]=se.maks;
				L[se.Imaks]=se.temp;
			    	}	
	cout<<"data terurut descending :"<<endl;
	  for (se.i=0;se.i<=9999;se.i++)
		{
			cout<<L[se.i]<<" ";
		} 
	}
	
	else{
		 cout<<"coba ulang kembail";
	} 
	  
	cout<<"\nInputkan data yang ingin di cari = ";
		cin>>se.cari;
		for(int i=0;i<se.total;i++)
{
		if(L[se.i] == se.cari)
	{
		se.ketemu=1;
		se.index=1;
		break;
	}
	}
		if(se.ketemu == 1)
	{
		cout<<"Data tersedia!\n";
		cout<<"Data Terletak di index ke - "<<se.cari;
		}
			else{
			cout<<"Data Pada Index ke -"<<se.cari<<"tidak Ada/tidak tersedia dikarenakan nomor acak";
			} 
		getch();
}
}

					//=======================//
					//   BUBBLE    SORTING   //
					//=======================//

if(se.sort==1){
	for(se.i =0; se.i<10000;se.i++){
		qu.db[se.i]=rand()%10000;
	}
	
	cout<<"Display data sebelum diurutkan (Y/N) ?"<<endl;
	cin>>bu.choice;
	if(bu.choice=='Y'){
		for(int x =0;x<se.total;x++){
			cout<<"Data-"<<x<<" = "<<qu.db[x]<<"\n";
		}
		
		cout<<"Urutkan Data (Y/N)?"<<endl;
		cin>>bu.choice;
		if(bu.choice=='Y'){
			for(int j=0;j!=se.total-1;j++){
				for(int k=0;k!=se.total-j;k++){
					if(qu.db[k]>qu.db[k+1]){
						bu.tukar=qu.db[k];
						qu.db[k]=qu.db[k+1];
						qu.db[k+1]=bu.tukar;
					}
				}
			}
			system("CLS");
			cout<<"|======== Menu ==========|"<<endl;
			cout<<"| 1. Ascending"<<endl;
			cout<<"| 2. Descending"<<endl;
			cout<<"|========================|"<<endl;
			cin>>bu.choice2;
			if(bu.choice2==1){
				system("CLS");
				cout<<"Ascending"<<endl;	
				for(int a =1;a<=se.total;a++){
					cout<<"Data-"<<a<<" = "<<qu.db[a]<<"\n";
				}	
			}
			else{
				system("CLS");
				cout<<"Descending"<<endl;
				for(int a=se.total;a>=1;a--){
					
					cout<<"Data-"<<a
					<<" = "<<qu.db[a]<<"\n";
				}	
			}
			cout<<"\nInputkan data yang ingin di cari = ";
		cin>>se.cari;
		for(int i=0;i<se.total;i++)
{
		if(qu.db[i] == se.cari)
	{
		se.ketemu=1;
		se.index=1;
		break;
	}
	}
		if(se.ketemu == 1)
	{
		cout<<"Data tersedia!\n";
		cout<<"Data Terletak di index ke - "<<se.cari;
		}
			else{
			cout<<"Data Pada Index ke -"<<se.cari<<"tidak Ada/tidak tersedia dikarenakan nomor acak";
			} 
		
}
		}
	
	else{
		cout<<"Closing Application";
		getch();
	}
}
}
