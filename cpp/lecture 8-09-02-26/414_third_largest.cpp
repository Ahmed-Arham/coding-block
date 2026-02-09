#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first, second, third;
        bool f=false, s=false,t=false;
        
        for(int num : nums) {
            
            if((f&&num == first) || (s&&num==second) || (t&&num==third))
                continue;
            
            if(!f||num >first) {
                third=second; 
                t=s;
                second=first; 
                s=f;
                first=num; 
                f=true;
            }
            else if(!s||num>second) {
                third=second;
                t=s;
                second=num; 
                s=true;
            }
            else if(!t||num>third) {
                third=num;
                t=true;
            }
        }
        
        return t?third:first;
    }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    
    cout<<"enter the value"<<endl;
    for(int i=0;i<n;i++){
       cin>>nums[i];
    }

   Solution sol;
   int result=sol.thirdMax(nums);
   cout<<"The third largest element is: "<<result<<endl;

    return 0;
}