//izvada visus nepaara skaitljus no 1 lidz kietotaja ievaditajam skaitlim un aprekina sho skaitlju summu
#include <iostream>
using namespace std;
int main(){
	int skaitlis;
	int sum;
	int i;
	cout<<"ievadi skaitli";
	cin>>skaitlis;
	for(i=1;i<skaitlis;i=i+2){
		cout<<i<<" ";
		sum=sum+i;
	}
	cout<<endl<<sum;
}
