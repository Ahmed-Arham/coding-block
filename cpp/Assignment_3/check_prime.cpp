#include<iostream>
using namespace std;

bool isprime(long long n){
	if(n<=1) return false;
	if(n<=2) return true;
	if(n%2==0) return false;

	for(long long i=3;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main() {
long long n;
cin>>n;
if(isprime(n)){
	cout<<"Prime";
}
else{
	cout<<"Not Prime";
}

	return 0;
}