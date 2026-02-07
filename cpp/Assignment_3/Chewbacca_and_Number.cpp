#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i=0;i<x.length();i++) {
        int d=x[i]-'0';
        int inverted=9-d;

 if (i == 0 && inverted == 0) continue;

        if (inverted < d) {
            x[i] = inverted + '0';
        }
    }

    cout << x << endl;
    return 0;
}