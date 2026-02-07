#include <iostream>
using namespace std;

int main() {
    int n=5;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) 
        cout<<"  ";

        int num=i;
        for(int k=1;k<=i;k++) 
        cout<<num++<<" ";
        num -= 2;
        for(int l=1;l<i;l++) 
        cout<<num--<<" ";

        cout << endl;
    }
    return 0;
}
