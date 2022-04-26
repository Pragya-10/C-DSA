#include<iostream>
using namespace std;

int ap(int a, int d, int n){
	
	int Sn = (a+(n-1)*d);
	return Sn;
}

int main(){
	int n, d, a;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter d : ";
	cin>>d;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"The Nth term of series is : "<<ap(a,d,n);
	
	return 0;
}
