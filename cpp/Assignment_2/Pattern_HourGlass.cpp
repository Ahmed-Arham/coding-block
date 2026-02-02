#include<iostream>
using namespace std;
int main(){
    int n;
    if(!(cin>>n))return 0;
    for(int i=-n;i<=n;i++){
        int r=(i<0)?-i:i;
        for(int s=0;s<(n-r)*2;s++)cout<<" ";
        for(int j=r;j>=0;j--)cout<<j<<" ";
        for(int j=1;j<=r;j++)cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}
