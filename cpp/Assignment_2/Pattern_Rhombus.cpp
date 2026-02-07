#include<iostream>
using namespace std;
int main() {

int n;
cin>>n;

for(int i=1;i<=n;i++){
	int val=i;
	for(int j=1;j<=n-i;j++){
		cout<<"  ";
	}
	for(int k=1;k<=i;k++){
		cout<<val++<<" ";
	}
	val-=2;
	for(int l=1;l<i;l++){
		cout<<val--<<' ';
	}
	cout<<endl;
}

for(int i=n-1;i>=1;i--){
	int val=i;
	for(int j=1;j<=n-i;j++){
		cout<<"  ";
	}
	for(int k=1;k<=i;k++){
		cout<<val++<<" ";
	}
	val-=2;
	for(int l=1;l<i;l++){
		cout<<val--<<' ';
	}
	cout<<endl;
}

	return 0;
}