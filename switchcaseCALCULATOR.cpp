#include<iostream>
using namespace std;

int main(){
	int a,b;
	
	cout<< "enter a  : ";
	cin>>a;
	cout<<"enter b  : ";
	cin>>b;
	
	char op;
	cout<<"enter the operation  : ";
	cin>>op;
	
	switch(op){
		case '+' : cout<< (a+b) <<endl;
					break;
		
		
		case '-' : cout<<(a-b) << endl;
					break;
			
		case '*' : cout<<(a*b) << endl;
					break;
			
		case '/' : cout<<(a/b) << endl;
					break;
				}
}
