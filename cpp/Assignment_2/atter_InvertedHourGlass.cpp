#include<iostream>
using namespace std;
int main(){
    int n;
    if(!(cin>>n))return 0;
    for(int i=-n;i<=n;i++){
        int r=(i<0)?-i:i;
        int d=n-r;
        for(int j=n;j>=n-d;j--)cout<<j<<" ";
        for(int s=0;s<(2*r-1)*2;s++)cout<<" ";
        for(int j=n-d;j<=n;j++){
            if(j==0&&d==n)continue;
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}