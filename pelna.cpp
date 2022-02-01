#include <iostream>
using namespace std;
void izdevumis(double izdevumi[12]);
void bilancee (double bilance[12],double ienakumi[12],double izdevumi[12]);
int main(){
	int i;
	double ienakumi[12]={1,2,3,45,78,45,85,85,96,85,88,1};
	double izdevumi[12];
	double bilance[12];
	izdevumis (izdevumi);
	bilancee (bilance, ienakumi, izdevumi );
	

}
void izdevumis(double izdevumi[12]){
	int i;
	for(i=0; i<12; i++){
		cout<<"ievadi "<<i+1<< ". menesa izdevumi"; 
		cin>>izdevumi[i];
	}

}
void bilancee (double bilance[12],double ienakumi[12],double izdevumi[12]){
	int i;
	
	for(i=0; i<12; i++){
		bilance[i]=ienakumi[i]-izdevumi[i];
	
	if(bilance[i]<0){
		cout<<i+1<< ". menesha zaudejumi " <<bilance[i]<<endl;
	}else{
		cout<<i+1<<". menesha pelna" <<bilance[i]<<endl;
	}
	
	}
}
