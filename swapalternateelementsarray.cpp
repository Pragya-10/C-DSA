#include<iostream>
using namespace std;

int printArray(int arr[], int n){
	
	for(int i = 0; i<n; i++){
		cout<< arr[i] << " ";
	}
	cout<<endl;
}

void swapAlternate(int arr[], int size){
	
	for(int i =0; i<size; i+=2){
		if(i+1<size){
			swap(arr[i],arr[i+1]);
		}
		
	}
	
	
}


int main(){
	
//	int arr[6] = {1,4,0,5,-2,15};
	int arr[5] = {2,6,3,9,4};
	
//	reverse(arr,6);
	swapAlternate(arr,5);
	
//	printArray(arr, 6);
	printArray(arr, 5);
	
	
	return 0; 
}
