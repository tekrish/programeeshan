/*simuleet moneetas meshanu 200 reizes un apreekinaat cik procentos gadijumu uzkrita cipars un cik geerbonis*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(0));
	int cipars=0; //1
	int gerbonis=0; //2
	int metiens;
	int i;
	
	for(i=0;i<200;i++){
		metiens=rand()%2+1;
		if(metiens==1){
			cipars++;
		
		}else{
			gerbonis++;
		}
	}
	cout<<"ciparu uzmeti "<<cipars<<" reizes("<<cipars/2<<"%) gerboni uzmeti "<<gerbonis<<" reizes("<<gerbonis/2<<"%)";
	
	
	
	
}
