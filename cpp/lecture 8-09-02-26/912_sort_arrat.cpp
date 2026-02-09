#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
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
   vector<int> result=sol.sortArray(nums);
   cout<<"The sorted array is: ";
   for(int num : result) {
       cout<<num<<" ";
   }
   cout<<endl;

    return 0;
}