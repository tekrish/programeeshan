#include <iostream>
using namespace std;
void dabutGarumu(int& a);
bool trijsturis(int x, int y, int z);
int main(){
	int a, b, c, d, e;
	dabutGarumu(a);
	dabutGarumu(b);
	dabutGarumu(c);
	dabutGarumu(d);
	e=trijsturis (a, b, c);
	e=trijsturis (a, d, c);
	e=trijsturis (a, b, d);
	e=trijsturis (d, b, c);
	
}
void dabutGarumu(int& a){
	cout<<"ievadi garumu"; cin>>a;
}
bool trijsturis(int x, int y, int z){
	cout<<"x="<<x<<"y="<<y<<" z=" <<z<<endl;
	bool v =false;
	if(x+y>z)v=true; else v=false;
	cout<<v;
	if(y+z>x)v=true; else v=false;
	cout<<v;
	if(x+z>y)v=true; else v=false;
	cout<<v;	
	if(x+y>z&&y+z>x&&x+z>y){
		cout<<"sanak trijstuuris"<<endl ;
		return true;
	}else{
		cout<<"nesanak trijsturis" <<endl;
		return false;
	}
}
