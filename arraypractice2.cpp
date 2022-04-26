#include<iostream>
using namespace std;

int main(){
	int a[5] = {5};
	for(int i = 0; i<5; i++) {
		a[i]=5;
}

cout<<"elements of array a : ";
for(int i=0; i<5; i++){
	cout<<a[i]<<" ";
}
return 0;
}
