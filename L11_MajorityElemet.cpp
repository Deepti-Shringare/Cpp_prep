#include <iostream>
#include <vector>
using namespace std;
//-----------------------------------------------------------------------------------------------------------------------------------------

//LEETCODE 169 PROBLEM 
//(A)BRUTE FORCE O(N^2)

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();

//         for (int val : nums) {
//             int freq = 0;

//             for (int el : nums) {
//                 if (el == val) {
//                     freq++;
//                 }
//             }

//             if (freq > n / 2) {   // FIXED condition
//                 return val;
//             }
//         }

//         return -1; // safety return (won't be reached as majority is guaranteed)
//     }
// };

//MORE OPTIMIZE O(nlogn)
//class Solution {
// 


//MOORES VOTING ALGORITHM O(n)
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int freq=0,ans=0;

//         for(int i=0;i<nums.size();i++){
//             if(freq==0){
//                 ans=nums[i];
//             }
//             if(ans== nums[i]){
//                 freq++;
//             }else{
//                 freq--;
//             }
//         }

//int count=0;
// for(int val:nums){
//     if(val==ans){
//         count++;
//     }
// }
// if(count>n/2)=>ans
// else =>-1
//         return ans;
//     }
// };







//------------------------------------------------------------------------------------------------------------------------


//O(n^2) time complexity

// vector<int> pairSum(vector<int> nums, int target){

//     vector<int> ans;
//     int n=nums.size();

//     for(int i=0; i<n;i++){
//         for(int j=i+1; j<n;j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

//two pointer approach 

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n=nums.size();

    int i=0,j=n-1;

    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }else if(pairSum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=26;

    vector<int> ans= pairSum(nums,target);

    cout<<ans[0]<<" ,"<<ans[1]<<endl;

    return 0;
}