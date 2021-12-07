#include <iostream>
using namespace std;
int main(){
	int skaitlis;
	int cipars;
	cout<<"ievadi skaitli";
	cin>>skaitlis;
	while(skaitlis!=0){
		cipars=skaitlis%10;
		cout<<cipars;
		skaitlis=skaitlis/10;
	}
	
}
