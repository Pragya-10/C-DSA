#include<iostream>
using namespace std;

int factorial(int n){
	int fact =1;
	for(int i=1; i<=n; i++){
		fact = fact*i;
	}
	return fact;
}

int nCr(int n, int r){
	
	int num = factorial(n);
	int den = factorial(r)*factorial(n-r); //line 14 and 15 is function call to factorial function
	
	return num/den;
	
}


int main(){
	
	int n,r;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter r : ";
	cin>>r;
	cout<<"Factorial : "<< nCr(n,r);  //here this nCr(n,r) is function call
	
	
	
	return 0;
}
