#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	
	
	int ans = 1;
	for(int i = 1; i<=b; i++){
		ans = ans*a;
	}
	
	cout<<" Answer Is : " << ans <<endl;
	
	return 0;
	
}
