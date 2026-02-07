#include <iostream>
using namespace std;

int sumDigits(int n) {
    int s=0;
    while(n>0){s+=n%10;n/=10; }
    return s;
}

int main() {
    int n;
    cin>>n;
    int targetSum=sumDigits(n),factorSum=0,temp=n;

    for(int i=2;i*i<=temp;i++) {
        while(temp%i==0) {
            factorSum+=sumDigits(i);
            temp/=i;
        }
    }
    if(temp>1)factorSum+=sumDigits(temp);
    
    cout<<(factorSum==targetSum ? 1 : 0)<<endl;
    return 0;
}