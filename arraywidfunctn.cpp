#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	
	cout<<"Printing array"<<endl;
	
	for(int i = 0; i<size; i++){
		cout<<arr[i]<" ";
	}
	
	cout<<"Printing Done";
	
}

int main(){
	
	int second[3]={1,2,3};
	
	cout<<"value at 2 index is "<<second[2]<<endl;
	
	int third[15] = {2,5};
	
	int n =15;
	printArray(third, 15);
	
	int thirdSize = sizeof(third)/sizeof(int);
	cout<<"Size of fifth is" << thirdSize << endl;
	
return 0;
}
