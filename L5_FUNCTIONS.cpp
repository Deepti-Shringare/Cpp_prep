#include <iostream>
using namespace std;

// int factorial(int n){
//     int fact=1;

//     for(int i=1;i<=n; i++){
//         fact*=i;
//     }

//     return fact;
// }


// int main(){
//     cout<<factorial(5)<<endl;
// }

// int sumofDigits(int num){

//     int digSum=0;

//     while(num>0){

//         int lastDig=num %10;
//         num/=10;

//         digSum+=lastDig;
//     }

//     return digSum;
// }

// int main(){

//     cout<<"sum ="<<sumofDigits(2356)<<endl;

//     return 0;
// }


// int factorial(int n){

//     int fact=1;

//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }

// int nCr(int n,int r){

//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nmr=factorial(n-r);

//     return fact_n/(fact_r*fact_nmr);
// }

//ISPRIME

// bool isPrime(int n) {
//     if (n <= 1)
//         return false;

//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int printAllPrime(int N){

//     for(int i=2; i<=N ;i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// int main() {
//     int N;
//     cin >> N;

//     printAllPrime(N);
    

//     return 0;
// }

/// FIBONACCI
void printFibonacci(int a, int b, int N) {
    cout << a << " " << b << " ";

    for (int i = 2; i < N; i++) {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}

int main() {
    int N = 5;
    int a = 0;
    int b = 1;

    printFibonacci(a, b, N);

    return 0;
}