#include <iostream>
using namespace std ;

// int main(){
//     char ch;
//     cout<<"enter char:";
//     cin>>ch;

//     if(ch>='a' && ch<='z'){
//         cout<<"lowercase";
//     }else{
//         cout<<"uppercase";
//     }

//     return 0;
// }


//ternary operator

// int main(){

//     int n=-45;

//     cout<<(n>=0?"positive" : "negative ")<<endl;

//     return 0;
// }



//WHILE LOOP

// int main(){

//     int count=1;

//     while(count<=10){
//         cout<< count<<" ";
//         count++;
//     }


//     cout<<endl;
//     return 0;
// }

//FOR LOOP

//q1

// int main(){

//     int n=50;
//     int sum=0;

//     for (int i=1; i<=n;i++){
//         sum+=i;
//     }

//     cout<<"sum="<<sum<<endl;

//     return 0;
// }

//q2

// int main(){

//     int n=10;
//     int oddSum=0;

// //print odd no.
// int i=1;

// while(i<=n){
//     if(i%2!=0){

        
//         oddSum+=i;
//     }
//     i++;
// }
// cout<<"odd sum="<<oddSum<<endl;


// cout<<endl;
// }

//prime number yes or no

int main(){

    int n=7;
    bool isPrime=true;

    for(int i=2;i*i<=n-1;i++){

        if(n%i==0){

            if(n%i==0){

                isPrime=false;
                break;
            }
        }

        if(isPrime==true){
            cout<<"prime";
        }else{
            cout<<"non prime";
        }
        return 0;
    }
}