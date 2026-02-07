#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int m,n;
        cin>>m>>n;
        int a_spent=0,h_spent=0,current_buy=1;
        while (true){
            if(current_buy%2!=0) { 
                if(a_spent+current_buy>m)
				 { 
					 cout<<"Harshit"<<endl; 
					 break;
				 }
                a_spent += current_buy;
            } 
			else{ 
                if(h_spent+current_buy>n){
					cout<<"Aayush"<<endl;
					break; 
					}
                h_spent += current_buy;
            }
            current_buy++;
        }
    }
    return 0;
}