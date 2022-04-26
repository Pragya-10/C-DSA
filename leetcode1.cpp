// Subtract the product and sum of digits of an integer
// given an integer number n, return the difference between the prodct of its digit and the sum of its digit


#include<iostream>
using namespace std;

class answer {
	public:
		int maths(int n){
			
			
			int prod = 1;
			int sum = 0;
	
			while(n!=0){
				int digit = n%10;
				prod = prod*digit;
				sum = sum + digit;
				n = n/10;
		}
	
		int ans = prod - sum;
		return ans;
	}
};
