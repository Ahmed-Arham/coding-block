#include<iostream>
using namespace std;

int main(){
    long long salary;
    int exp;
    cin>>salary>>exp;

    if(exp>=5){
        cout<<salary/10;
    }
    else{
        cout<<"0";
    }
return 0;
}