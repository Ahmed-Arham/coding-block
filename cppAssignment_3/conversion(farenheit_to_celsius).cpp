#include<iostream>
using namespace std;

int main() {
int min_f,max_f,step;
cin>>min_f>>max_f>>step;

for(int i=min_f;i<=max_f;i+=step){

	int celcius = (5*(i-32))/9;
	
	cout<<i<<" "<<celcius<<endl;
	
	
	
}
	return 0;
}