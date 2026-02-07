#include<iostream>
using namespace std;

long long todecimal(long long sn , int sb){
	long long dv=0;
	long long p=1;
	while(sn>0){
		dv+=(sn%10)*p;
		sn/=10;
		p*=sb;
	}
	return dv;
}

long long fromdecimal(long long d,int db){
	long long res=0;
	long long pv=1;
	while(d>0){
		res+=(d%db)*pv;
		d/=db;
		pv*=10;
	}
	return res;
}

int main() {
	int sb,db;
	long long sn;
	cin>>sb>>db>>sn;

	long long decimal=todecimal(sn,sb);
	cout<<fromdecimal(decimal,db)<<endl;
	return 0;
}