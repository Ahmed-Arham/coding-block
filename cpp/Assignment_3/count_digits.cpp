#include<iostream>
using namespace std;

int frequency_count(long long num, int digit){

	if(num==0 && digit==0){
		return 1;
	}
	int count=0;
	while(num>0){
		int cr = num%10;
		if(cr==digit){
			count++;
		}
		num/=10;
	}
	return count;

}
int main() {
	long long n;
	int target;
	cin>>n>>target;

cout<<frequency_count(n,target)<<endl;

	return 0;
}