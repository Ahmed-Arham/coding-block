
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reversearray(vector<int>& nums, int start, int end) {
 while(start<end){
    nums[start]=nums[start]+nums[end];
    nums[end]=nums[start]-nums[end];
    nums[start]=nums[start]-nums[end];
start++;
end--;
 }
  }
 void rotate(vector<int>&nums,int k){

int n=nums.size();
k%=n;
reversearray(nums,0,n-1);
reversearray(nums,0,k-1);
reversearray(nums,k,n-1);
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
   sol.rotate(nums,k);
   cout<<"The rotated array is: ";
   for(int num : nums) {
       cout<<num<<" ";
   }
   cout<<endl;

    return 0;
}