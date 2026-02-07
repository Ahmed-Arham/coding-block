#include<iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
long long reverse=0;
	while(n>0){
		int last =n%10;
		reverse=reverse*10+last;
		n/=10; 
	}
	cout<<reverse<<endl;
	return 0;
}