#include <iostream>
#include <vector>
using namespace std;

// 1st approach
//sc=o(1) tc=o(logn)
int binarySearch(vector<int> arr,int tar){
    int st=0, end=arr.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2; //optimization to counter edge case in which st=end=INT_MAX

        if(tar>arr[mid]){
            st=mid+1;
        }else if (tar<arr[mid]){
            end=mid-1;
        }else{
            return mid;
        }
    }

    return -1;
}



//2and approach
//sc=o(log n) tc=o(logn)

int recBinarySearch(vector<int> arr, int tar,int st, int end){
    if(st<=end){
        int mid=st +(end-st)/2 ;

        if(tar> arr[mid]){
            return recBinarySearch(arr,tar,mid+1,end);
        }else if(tar <arr[mid]){
            return recBinarySearch(arr,tar,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}



int main(){

    vector<int> arr1={-1,0,3,4,5,9,12}; //odd
    int tar1=12;
    int st=-1;
    int end=12;

    cout<<recBinarySearch(arr1,tar1,st,end)<< endl;

    // vector<int> arr2={-1,0,3,5,9,12};//even
    // int tar2=0;
    //     cout<<recBinarySearch(arr2,tar2)<< endl;

}