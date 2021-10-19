// nosaki cik cipars ir ievaditajaa skaitli
#include <iostream>
using namespace std;
int main(){
	int skaitlis;
	int ciparuSkaits=1;
	cout<<"ievadi skaitlis";
	cin>>skaitlis;
	while(skaitlis>10 ){
		skaitlis=skaitlis/10;
		ciparuSkaits=ciparuSkaits+1;
		
	
	}
	cout<<"skaitli ir "<<ciparuSkaits<<" cipari";
}

