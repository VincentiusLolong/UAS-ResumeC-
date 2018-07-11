#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	float wadah;
	float hasil;
	cout<<"===============Dibuat oleh : vincentius Tri Nugroho kuswiharto lolong\n===============";
	cout<<"===================menentukan bilangan terbesar===================="<<endl;
	cout<<"masukan angka : \n";
	cout<<"a :";
	cin>>a;
	cout<<"b :";
	cin>>b;
	cout<<"c :";
	cin>>c;
	cout<<"d :";
	cin>>d;
	
	if(a>b){
	  wadah = a;
		if(wadah>b){
			wadah=wadah;
		}
		else
		 wadah=b; 
			if(wadah>c){
				wadah=wadah;
			}
			else
		  	  wadah=c;
			 	if(wadah>d){
					wadah=wadah;
				}
			  	else
			   		 wadah=d;
		}
	else if(a<b){
	  wadah=a;
		if(wadah<b){
			wadah=b;
			}
			else
			wadah=wadah;
				if(wadah<c){
					wadah=c;
				}
				else
					wadah=wadah;
			 		 if(wadah<d){
			  			wadah=d;
					 }				
			 		 else
						wadah=wadah;
		}
	cout<<wadah;
	
	
	
}
