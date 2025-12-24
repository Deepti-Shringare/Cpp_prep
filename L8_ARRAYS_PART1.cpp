#include <iostream>
using namespace std;

//PASS BY VALUE AND REFERENCE

// void modify_value(int num) { // 'num' is a copy of 'number'
//     num = 20; // Modifies the local copy
// }

// int main() {
//     int number = 10;
//     modify_value(number);
//     std::cout << "Original number: " << number << std::endl; // Output: Original number: 10
//     return 0;
// }

// void modify_reference(int& num) { // 'num' is a reference to 'number'
//     num = 20; // Modifies the original 'number'
// }

// int main() {
//     int number = 10;
//     modify_reference(number);
//     std::cout << "Original number: " << number << std::endl; // Output: Original number: 20
//     return 0;
// }

//QUES1


// Function to calculate sum and product of array elements
void sumAndProduct(int arr[], int n, int &sum, int &product) {
    sum = 0;
    product = 1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
}

//QUES 2

void swapMinMax(int arr[], int n) {
    if (n <= 1)
        return;

    int minIndex = 0;
    int maxIndex = 0;

    // Find min and max indices
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;

        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Swap min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}
//ques3

//my logic

int unique(int arr[], int n){

     for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                cout<<arr[i]<<endl;
            }
        }
     }
     return 0;
}
//chatgpt

void printUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << endl;
        }
    }
}

//QUES 4

//my approach
void unique(int arr1[], int n,int arr2[], int m){

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<endl;
            }
        }
        
     }
     
}
//chatgpt


void intersection(int arr1[], int n, int arr2[], int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 4, 6, 5};
    int n = 5;

    int arr2[] = {2, 4, 9, 8};
    int m = 4;

    cout << "Intersection = ";
    intersection(arr1, n, arr2, m);

    return 0;
}



