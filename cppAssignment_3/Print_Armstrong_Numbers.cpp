#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
	int temp =n;
	int digits=0;


	while(temp>0){
		digits++;
		temp/=10;
	}

	int sum=0;
	temp=n;
	while(temp>0){
		int last=temp%10;
		sum+=pow(last,digits);
		temp/=10;
	}

	return (sum==n);
}

int main() {
int n1,n2;
cin>>n1>>n2;
for(int i=n1;i<=n2;i++){
if(isArmstrong(i)){
	cout<<i<<endl;
}
}

	return 0;
}