#include <iostream>
using namespace std;
int main(){
	int skaitlis;
	int i;
	cout<<"ievadi skaitli";
	cin>>skaitlis;
	i=1;
	while(i<=skaitlis){
		
		if(skaitlis%i==0){
			cout<<i<<" ";
		}i++;
	}

	
}
