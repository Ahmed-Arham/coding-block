#include <iostream>
using namespace std;

void checkCar(long long carNo) {
    int oddSum = 0;
    int evenSum = 0;


    while(carNo>0) {
        int digit=carNo%10;
        if (digit%2==0) {
            evenSum+= digit;
        } else {
            oddSum +=digit; 
        }
        carNo /=10;
    }

    if (evenSum %4==0 || oddSum%3 ==0) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}

int main() {
    int N;
  cin>>N;
    while(N--){
        long long carNo;
        cin>>carNo;
        checkCar(carNo);
    }

    return 0;
}