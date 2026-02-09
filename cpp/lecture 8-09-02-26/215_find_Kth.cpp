#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
      int n=nums.size();

      return nums[n-k];  
    }
};

int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    
    cout<<"enter the value"<<endl;
    for(int i=0;i<n;i++){
       cin>>nums[i];
    }
    cout<<"Enter the value of k: ";
    cin>>k;

   Solution sol;
   int result=sol.findKthLargest(nums,k);
   cout<<"The "<<k<<"-th largest element is: "<<result<<endl;

    return 0;
}