#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(long long n) {
    if (n < 0) return false;
    
    long long temp = n;
    int digits = 0;
   
    long long countTemp = n;
    if (countTemp == 0) digits = 1;
    while (countTemp > 0) {
        digits++;
        countTemp /= 10;
    }
    
    long long sum=0;
    temp=n ;
    while(temp>0) {
        int last=temp%10;
        sum+=pow(last, digits);
        temp/=10;
    }
    
    return (sum==n);
}

int main() {
    long long n;

    if (cin>>n) {
        if(isArmstrong(n)) {
            cout<<"true"<<endl;
        } else {
            cout<<"false"<<endl;
        }
    }
    return 0;
}