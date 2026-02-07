#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int mid=n/2;

	for(int i=0;i<n;i++){
int star;
int space;

if(i==0 || i==n-1){
	star=n;
	space=0;
}

else if(i<=mid){
	star =mid-i+1;
	space=2*i-1;
}
else{
	star=i-mid+1;
	space=2*(n-i-1)-1;
}

for(int j=0;j<star;j++){
	cout<<"* ";
}
for(int j=0;j<space;j++){
	cout<<"  ";
}
if(space>0){
for(int j=0;j<star;j++){
	cout<<"* ";
}
}
cout<<endl;
	}
	return 0;
}