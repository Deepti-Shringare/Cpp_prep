// //leetcode 204 

// class Solution {
// public:
//     int countPrimes(int n) {
//         vector<bool> isPrime(n+1, true);
//         int count=0;

//         for(int i=2;i<n;i++){
//             if(isPrime[i]){
//                 count++;

//                 for(int j=i*2; j<n; j=j+i){
//                     isPrime[j]=false;
//                 }
//             }
//         }
//         return count;
//     }
    
// };

#include <iostream>
# include <vector>
#include <climits>
using namespace std;
//armstrong

bool isArmstrong(int n){
    int copyN =n;
    int sumOfCubes=0;

    while(n !=0){
        int dig=n%10;
        sumOfCubes+=(dig * dig * dig);

        n=n/10;

    }
    return sumOfCubes ==copyN;
}

//gcd euclid algo
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }

    if(a==0) return b;
    return a;
}

//gcdrec

int gcdRec(int a, int b){
    if(b==0)  return a;

    return gcdRec(b , a % b);
}

int lcm(int a,int b){
    int gcd=gcdRec(a,b);
    return (a*b) /gcd;
}


int main(){


    cout<< lcm(20,24)<< endl;
    return 0;
}
