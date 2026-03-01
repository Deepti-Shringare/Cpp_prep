//leetcode 509

// class Solution {
// public:
//     int fib(int n) {
//         if(n==0 || n==1){
//             return n;
//         }

//         return fib(n-1)+fib(n-2);
//     }
// };




//#include <iostream>
//#include <vector>
//using namespace std;
//check array is sorted or not

// bool isSorted(vector<int> arr, int n){
//     if(n==0 || n==1){
//         return true;
//     }

//     return arr[n-1]>= arr[n-2] &&  isSorted(arr,n-1);
// }

// int main(){
//     vector<int> arr={1,2,8,4,5};

//     cout<< isSorted(arr,arr.size())<< endl;
//     return 0;
// }




//leetcode 704
//class Solution {
//public:
//tc= o(logn)
//sc=o(logn)

//helper
// int binSearch(vector<int> &arr, int tar,int st,int end){
//     if(st<=end){
//         int mid=st+(end-st)/2;

//         if(arr[mid]==tar) return mid;
//         else if(arr[mid]<= tar){
//             return binSearch(arr , tar, mid+1, end);
//         }else{
//             return binSearch(arr, tar,st,mid-1);
//         }
//     }
//     return -1;
// }

//     int search(vector<int>& arr, int tar) {
//         return binSearch(arr , tar ,0 ,arr.size()-1);
        
//     }
// };