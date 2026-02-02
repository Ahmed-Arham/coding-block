#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n>0){
        cout<<"Positive"<<endl;
    }
    else if(n<0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"Zero";
    }
    return 0;
}