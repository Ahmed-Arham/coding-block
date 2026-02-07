#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int i=1;i<=n;i++){
for(int j=i;j<=n;j++) cout<<"*";
for(int j=1;j<=2*i-3;j++) cout<<" ";
{
for(int j=i;j<=n;j++) 
if(j!=1)
cout<<"*";
}
cout<<endl;
}

for(int i=n-1;i>=1;i--){
for(int j=i;j<=n;j++) cout<<"*";
for(int j=1;j<=2*i-3;j++) cout<<" ";
{
for(int j=i;j<=n;j++) 
if(j!=1)
cout<<"*";
}
cout<<endl;
}

return 0;
}
