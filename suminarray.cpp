#include<iostream>
using namespace std;

int update(int arr[5], int sum){
	
		for(int i = 0; i<5; i++){
		sum+=arr[i];
	}
	cout<<"Sum = " <<sum;
	
}

int main(){
	
	int arr[5];
	int sum = 0;
	cout<<"Enter 5 numbers : "<<endl;
	
	for(int i = 0; i<5; i++){
		cin>>arr[i];
	}
	
	update(arr, sum);
	
	
return 0;
}
