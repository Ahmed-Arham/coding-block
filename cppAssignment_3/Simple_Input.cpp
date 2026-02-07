#include<iostream>
using namespace std;
int main() {

int n;
int commulative=0;

while(cin>>n){
	commulative+=n;

	if(commulative<0){
		break;
	}
	cout<<n<<endl;
}


	return 0;
}