#include<iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
     int largest=a;
     if(largest<b){
         largest=b;
     }
     if(largest<c){
         largest=c;
     }
     cout<<largest;
     
}