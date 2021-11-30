//lietotaja ievaditajam skaitlim nosaka pirmo un pedejo ciparu
#include <iostream>
using namespace std;
int main(){
	int pirmais;
	int pedejais;
	int skaitlis;
	int i;
	cout<<"ievadi skaitli";
	cin>>skaitlis;
	pedejais=skaitlis%10;
	pirmais=pedejais;
	while(skaitlis/10!=0){
		pirmais=skaitlis/10;
		skaitlis=skaitlis/10;
	}
	cout<<"pirmais "<<pirmais<<" pedejais "<<pedejais;
}
