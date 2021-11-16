#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int klucisi;
	int staavi=0;
	cout <<"ievadi klucishu daudzumu";
	cin >>klucisi;
	while(klucisi>=pow(staavi+1,3)){
		staavi++;
		klucisi=klucisi-pow(staavi,3);
		
	}
	cout<<"tu vari uzbuuveet "<<staavi<<" staavusun palika paari "<<klucisi<< "kluciisi";
}

