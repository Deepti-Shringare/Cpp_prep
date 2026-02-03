#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& A, int m, vector<int>& B, int n) {//O(M+N)
//         int idx=m+n-1,i=m-1,j=n-1;

//         while(i>=0 && j>=0){
//             if(A[i] >= B[j]){
//                 A[idx--]=A[i--];
//             }else{
//                 A[idx--]=B[j--];
//             }
//         }
//         while(j>=0){
//             A[idx--]=B[j--];
//         }
//     }
// };

//next permutation
//brute force apprach : tc=O(N!*N) RECURSION APPROACH
//OPTIMIZED APPROACH : TC=O(N) SC=O(1)

//LLLETCODE 31
class Solution {
public:
    void nextPermutation(vector<int>& A) { //TC:O(n) sc:O(1)
        //FIND THE PIVOT

        int pivot =-1, n=A.size();

        for(int i=n-2; i>=0; i--){
            if(A[i] < A[i+1]){
                pivot=i;
                break;
            }
        }

        if(pivot ==-1){
            reverse(A.begin(), A.end());
            return;
        }

        //step 2: next larger element

        for(int i=n-1; i>pivot;i--){
            if(A[i] > A[pivot]){
                swap(A[i],A[pivot]);
                break;
            }
        }

        //step 3: reverse(piv+1 to n-1)
        int i=pivot+1, j=n-1;

        while(i<=j){
            swap(A[i++] , A[j--]);
        }

    }
};

//next_permutation(A.begin(),A.end()); not allowed but  