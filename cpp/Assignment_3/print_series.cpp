#include<iostream>
using namespace std;

void printseries(int n1,int n2){
	int n=1;
	int count=0;
	while(count<n1){
		int term=3*n+2;

		if(term%n2!=0){
cout<<term<<endl;
count++;
		
	}
	n++;
	}
}

int main() {
	int n1,n2;
	cin>>n1>>n2;
	printseries(n1,n2);

	return 0;
}