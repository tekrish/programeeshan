//cik staavu piramidu var izveidot no klucisiem kuru daudzumu ievada lietotaajs
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int klucisi;
	int staavi=0;
	cout <<"ievadi klucishu daudzumu";
	cin >>klucisi;
	while(klucisi>=pow(staavi+1,2)){ //parbauda vai pietiek klucisi nakoshajam staavam (staavi +1)
		staavi++;
		klucisi=klucisi-pow(staavi,2); // samazina klucishu skaitu par tik cik ir izmantots stavu uzbuveshanai
		
	}
	cout<<"tu vari uzbuuveet "<<staavi<<" staavusun palika paari "<<klucisi<< "kluciisi";
}

