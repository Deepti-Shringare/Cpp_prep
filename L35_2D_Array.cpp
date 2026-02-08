#include <iostream>
#include <utility>
#include<climits>
#include <vector>
using namespace std;

//LINEAR SEARCH AND PAIR RETURN

pair<int, int> linearSearch(int mat[][3], int rows, int cols, int key) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == key) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

//GETMAX SUM AMONG THE cols

int getMaxSum (int mat[][3] , int rows, int cols){ //mentioning number of cols is compulsory
    int maxcolSum=INT_MIN;

    for(int j=0; j<cols; j++){
        int colSumI=0;

        for(int i=0; i<rows;i++){
            colSumI+=mat[i][j];
        }

        maxcolSum= max(maxcolSum , colSumI);
    }
    return maxcolSum;
}


// Diagonal sum TC= O(N*N)
int diagonalSum(int mat[][4], int n){
    int sum =0;

    for (int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += mat[i][j];
            }else if(j == n-i-1){
                sum += mat[i][j];
            
            }
        }
    }
    return sum;
}

//OPTIMIZATION OF DIAGONAL SUM
int diagonalSum2(int mat[][4], int n){
    int sum =0;

    for (int i=0; i<n; i++){
        sum += mat[i][i];

        if(i != n-i-1){
            sum+= mat[i][n-i-1];
        }
    }
    return sum;
}


int main(){
    // int matrix [4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}};
    // // int rows = 4;
    // // int cols = 4;
    // int n=4;
    
    // // Search for key 1
    // // pair<int, int> result = linearSearch(matrix, rows, cols, 1);
    
    // // // You need to access the elements of the pair individually
    // // if(result.first != -1) {
    // //     cout << "Found at position: (" << result.first << ", " << result.second << ")" << endl;
    // // } else {
    // //     cout << "Key not found" << endl;
    // // }

    // cout<< diagonalSum2(matrix,n)<< endl;



    // 2D vectors
    vector<vector<int>> mat={{1,2,3} ,{4,5,6},{7,8,9}};
//rows =>

for(int i=0 ; i<mat.size(); i++){
    for(int j=0 ; j<mat[i].size(); j++){
cout << mat[i][j]<< " ";
    }
    cout<< endl;
}

    
    return 0;
};