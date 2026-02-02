#include<iostream>
using namespace std;

int main(){
    long long s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1==s2&&s2==s3){
        cout<<"Equilateral";
    }
    else if(s1==s2||s2==s3||s1==s3){
        cout<<"Isosceles";
    }
    else{
        cout<<"Scalene";
    }
    return 0;
}
