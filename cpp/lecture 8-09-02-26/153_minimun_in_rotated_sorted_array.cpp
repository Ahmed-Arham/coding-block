#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
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
   int result=sol.findMin(nums);
   cout<<"The minimum element in the rotated sorted array is: "<<result<<endl;

    return 0;
}