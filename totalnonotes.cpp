#include<iostream>
using namespace std;

int main(){
	 int total = 1330;
	 
	 int n100=100,n50=50,n20=20,n1=1;
	 
	 switch(total>=100){
	 	case 1: total = total/n100;
	 	
	 	cout<<"total 100 notes is : "<<total;
	 	total = 1300 - total*100;
	 	
	 }
	 switch(total>=50){
	 	case 1: total = total/n50;
	 	cout<<"total 50 notes is : "<<total;
	 }
	 	
	 switch(total>=20){
	 	case 1: total = total/n20;
	 	cout<<"total notes is : "<<total;
	 	break;
	
	 	
	 	
	 }
}
