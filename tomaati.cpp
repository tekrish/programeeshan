#include <iostream>
using namespace std;
int main(){
	int N;
	int S;
	int D;
	int i;
	int pirmais, pedejais;
	cout<<"ievadi tomatu daudzumu";
	cin>>N;
	cout<<"kura pozicija atrodas sarkanais tomats";
	cin>>S;
	cout<<"cik dienas ";
	cin>>D;
	pirmais=S;
	pedejais=pirmais;
	i=1;
	while(i<=D){
		if(pirmais-1>0){
			pirmais--;
		}
		if(pedejais+1<=N){
			pedejais++;
		}
		i++;
	}
	cout<<"pec"<<D<<" dienam tev bus"<<pedejais-pirmais+1<<"tomaati";
}
