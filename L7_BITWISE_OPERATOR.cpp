#include <iostream>
using namespace std;

// int main(){

//     cout<<(6&10)<<endl;
//     cout<<(6|10)<<endl;
//     cout<<(6^10)<<endl;
//     cout<<(10<<2)<<endl;
//     cout<<(10>>1)<<endl;

//     return 0;
// }

//REVERSE NUMBER

// int reverseDigit(int num) {
//     int reversedDigit = 0;

//     while (num > 0) {
//         int lastDig = num % 10;
//         num /= 10;

//         reversedDigit = reversedDigit * 10 + lastDig;
//     }

//     return reversedDigit;
// }

// int main() {
//     int num = 315;
//     cout << reverseDigit(num) << endl;  // Output: 513
// }

//POWER OF 2?


// Function to convert decimal to binary
int dectoBinary(int decNum){
    int ans=0,pow=1;

    while(decNum >0){
        int rem=decNum%2;
        decNum/=2;

        ans +=(rem*pow);
        pow*=10;

    }
    return ans;
}


// Function to check power of 2 using LEFT SHIFT
bool isPowerOfTwo(int n) {
    if (n <= 0)
        return false;

    int power = 1;

    while (power <= n) {
        if (power == n)
            return true;
        power = power << 1;   // multiply by 2
    }
    return false;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // cout << "Binary representation: ";
    // decimalToBinary(n);
    // cout << endl;

    if (isPowerOfTwo(n))
        cout << n << " is a Power of 2" << endl;
    else
        cout << n << " is NOT a Power of 2" << endl;

    return 0;
}



