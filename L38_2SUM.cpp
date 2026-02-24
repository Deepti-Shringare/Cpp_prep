// //2965 leetcode TC=O(N^2)
// class Solution {
// public:
//     vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
//         vector <int> ans;
//         unordered_set<int> s;
//         int n=grid.size();
//         int a,b;

//         int expSum=0, actualSum=0;

//         for(int i=0; i<n;i++){
//             for(int j=0; j<n; j++){
//                 actualSum += grid[i][j];

//                 if(s.find(grid[i][j])!=s.end()){
//                     a=grid[i][j];
//                     ans.push_back(a);
//                 }
//                 s.insert(grid[i][j]);
//             }
//         }
//         expSum=(n*n) * (n*n+1)/2;
//         b=expSum + a-actualSum;
//         ans.push_back(b);

//         return ans;

        
//     }
// };


//1 leetcode (2 sum)

//BRUTE FORCE(TC=O(N^2))
//2 FOR LOOPS NESTED

//BETTER
//O(NLOGN) BINEARY SEARCH

//OPTIMIZED
//O(N)





// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int tar) {
//         unordered_map<int,int> m;
//         vector<int> ans;

//         for(int i=0;i<arr.size() ; i++){
//             int first=arr[i];
//             int sec=tar -first;

//             if(m.find(sec)!=m.end()){
//                 ans.push_back(i);
//                 ans.push_back(m[sec]);
//                 break;
//             }
//             m[first]=i;
//         }
//         return ans;
        
//     }
// };


//287 leetcode
// class Solution {
// public:
//     int findDuplicate(vector<int>& arr) {
        //tc=O(n)  sc=O(n)
    //     unordered_set<int> s;

    //     for(int val: nums){
    //         if(s.find(val) != s.end()){
    //             return val;
    //         }

    //         s.insert(val);
    //     }

    //     return -1;
    // }


    //two pointer approach(slow and fast)
//     int slow = arr[0] , fast =arr[0];

//     do{
//         slow=arr[slow];
//         fast=arr[arr[fast]];
//     }while(slow != fast);

//     slow=arr[0];

//     while(slow != fast){
//         slow=arr[slow];
//         fast=arr[fast];
//     }

//     return slow;
//     }
// };