#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
	if(n%2==0){
		return 1;
	}
    int mid=n/2;
    for(int i=0;i<n;i++){
        int d=(i<=mid)?i:n-1-i;

        for(int s=0;s<(mid-d)*4;s++)
		 cout<<" ";
		 
        for(int j=d+1;j>=1;j--)
		 cout<<j<<" ";

        if(d>0){

            for(int s=0;s<(2*d-1)*2;s++)
			 cout<<" ";

        for(int j=1;j<=d+1;j++)
		 cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}