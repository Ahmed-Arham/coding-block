#include<iostream>
int main() {
	long long n;
	std::cin>>n;

int sum_odd=0;
int sum_even=0;
int pos=1;

while(n>0){
	int num =n%10;

	if(pos%2!=0){
		sum_odd+=num;
	}
	else{
		sum_even+=num;
	}
	n/=10;
	pos++;
}

std::cout<<sum_odd<<std::endl;
std::cout<<sum_even<<std::endl;
	return 0;
}