#include<iostream>
using namespace std;

void printcounting(int n){  // function declaration
	for(int i =1; i<=n; i++){
		cout<<i<<endl;    // function body
	}
	
	cout<<endl;
	
}

int main(){
	
	int n;
	cin>>n;

	
	printcounting(n); //funcion call
	
	
	return 0;
}
