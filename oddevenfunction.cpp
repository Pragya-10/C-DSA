#include<iostream>
using namespace std;

//0 - odd ; 1- even
bool isEven(int a){
	if(a&1){
		return 0;
	}
	
	return 1;
}

int main(){
	int num;
	cin>>num;
	
	if (isEven(num)){
		cout<<"Even Number"<<endl;
		
	}
	
	else{
		cout<<"Odd Number"<<endl;
	}
	return 0;
}
