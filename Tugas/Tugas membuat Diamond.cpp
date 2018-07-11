#include <conio.h>
#include <iostream>
using namespace std;
struct bintang{
	int a;//Total Angka
	int i;
	int j;
	int k;
	int pil;//pilihan
};
bintang b;
int main(){
	pil0:
	cout<<"======Vincentius Tri Nugroho Kuswiharto Lolong=======\n";
	cout<<"====================20170801214======================\n";
	cout<<"masukkan total angka = \n";
	cin>>b.a;
	
	for (b.i=1;b.i<=b.a;b.i++){
   		for (b.k=b.a;b.k>=b.i;b.k--){
      cout<<"*";
      }
   		for (b.k=b.i;b.k>=1;b.k--){
      cout<<" ";
      }
   		for (b.j=b.i;b.j>=1;b.j--){
      cout<<" ";
      }
		for (b.j=b.a;b.j>=b.i;b.j--){
      cout<<"*";
      }
   cout<<endl;
   }
	for (b.i=b.a;b.i>=1;b.i--){
   		for (b.k=b.a;b.k>=b.i;b.k--){
      cout<<"*";
      }
   		for (b.k=b.i;b.k>=1;b.k--){
      cout<<" ";
      }
  		 for (b.j=b.i;b.j>=1;b.j--){
      cout<<" ";
      }
   		for (b.j=b.a;b.j>=b.i;b.j--){
      cout<<"*";
      }
   cout<<endl;
   }
   
   pil1:
   cout<<"Apakah ingin mecoba lagi? =\n";
   cout<<"1. ya\n";
   cout<<"2. tidak\n";
   cin>>b.pil;
   
   if(b.pil==1){
   		system("CLS");
   		goto pil0;
   }
   else if(b.pil==2){
   		cout<<"terimakasih telah mencoba ^_^";
   }
   else{
   		system("CLS");
   		goto pil1;
   }
   	
getch();
}
