#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int upper=(n/2)+1;
	int lower=n/2;
	
for(int i=1;i<=upper;i++){

for(int j=1;j<=upper-i;j++){
	cout<<"  ";
}
for(int k=1;k<=(2*i-1);k++){
	cout<<"* ";
}
		cout<<endl;
	}

	
for(int i=lower;i>=1;i--){

for(int j=1;j<=upper-i;j++){
	cout<<"  ";
}
for(int k=1;k<=(2*i-1);k++){
	cout<<"* ";
}
		cout<<endl;
	}
	
	return 0;
}