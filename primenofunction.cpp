#include<iostream>
using namespace std;

// 1 - Prime , 0 - not prime.

bool isPrime(int n){
	for(int i=2;i<=n;i++){
		if(n%i==0){
			return 0;
		}
		return 1;
	}
	
}

int main(){
	int n;
	cin>>n;
	
	if(isPrime(n)){
		
		cout<<"IS A PRIME NO "<<endl;
	}
	
	else{
		cout<<"NOT A PRIME NO "<<endl;
		
	}
	
	
	return 0;
}
