#include<iostream>
using namespace std;

long long binary_decimal(long long n){

long long decimal=0;
long long base=1;
while(n>0){

	int last=n%10;

	decimal+=last*base;
	n/=10;
	base*=2;
}
return decimal;
}

int main() {

long long n;
cin>>n;

cout<<binary_decimal(n)<<endl;

	return 0;
}