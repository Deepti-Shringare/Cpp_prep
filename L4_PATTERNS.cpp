#include <iostream>
using namespace std;

// int main(){                                  \\A
//     int n=6;                                   BA
                                                  //CBA
    

// for (int i=0; i<n;i++){
    
//     for(int j=i; j>=0;j--){
//       cout<<char('A'+j);
      
//     }

//     cout<<endl;
// }
// return 0;
// }


// int main(){
//     int n=4;

//     int num=1;

//     for(int i=0;i<n;i++){

//         //spaces
//         for(int j=0;j<i;j++){
//             cout<<" ";

//         }

//         //nums
//         for(int j=0;j<n-i;j++){
//             cout<<(i+1);
//         }
//         cout<<endl;

//     }
//     return 0;
// } 


//pascal triangle
// int main (){
//     int n=8;

//     for(int i=0; i<n;i++){

//         //spaces:n-i-1

//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }

//         //nums1

//         for(int j=1;j<=i+1;j++){
//             cout<<j;
//         }

//         //nums2

//         for(int j=i;j>0;j--){
//             cout<<j;
//         }

//         cout<<endl;
//     }
// }


//hollow diamond pattern

// 


//butterfly pattern



int main() {
    int n = 4;

    // Upper half
    for (int i = 0; i < n; i++) {

        // Left stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < (n - i - 1) * 2; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    

    // Lower half
    for (int i = n - 1; i >= 0; i--) {

        // Left stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < (n - i - 1) * 2; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
