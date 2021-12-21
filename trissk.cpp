#include <iostream>
using namespace std;
int main(){
	int skaitlis1;
	int skaitlis2;
	int skaitlis3;
	bool pozitiivs=0;
	bool nulle=0;
	bool negatiivs=0;
	cout<<"ievadi 3 skaitljus";
	cin>>skaitlis1>>skaitlis2>>skaitlis3;
	if(skaitlis1+skaitlis2>0){
		pozitiivs=1;	
	}else{
		if(skaitlis3+skaitlis2>0){
			pozitiivs=1;
		}else{
			if(skaitlis3+skaitlis1>0){
				pozitiivs=1;
				
			}
			
		}
		
	}
	if(pozitiivs==1){
		cout<<"var"<< endl;
	}else{
		cout<<"nevar"<< endl;
	}
	// paarbauda vai sanaak nulle;
	if(skaitlis1+skaitlis2==0){
		nulle=1;	
	}else{
		if(skaitlis3+skaitlis2==0){
			nulle=1;
		}else{
			if(skaitlis3+skaitlis1==0){
				nulle=1;
				
			}
			
		}
		
	}
	if(nulle==1){
		cout<<"var"<< endl;
	}else{
		cout<<"nevar"<< endl;
	}
	
	
	if(skaitlis1+skaitlis2<0){
		negatiivs=1;	
	}else{
		if(skaitlis3+skaitlis2<0){
			negatiivs=1;
		}else{
			if(skaitlis3+skaitlis1<0){
				negatiivs=1;
				
			}
			
		}
		
	}
	if(negatiivs==1){
		cout<<"var"<< endl;
	}else{
		cout<<"nevar"<< endl;
	}
}

