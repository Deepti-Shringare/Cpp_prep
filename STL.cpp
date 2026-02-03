#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<int> vec={1,2,3,4};
vector<int>::reverse_iterator it;

for(auto it=vec.rbegin(); it!=vec.rend();it++){
    cout << *(it) << endl;
}
cout << endl;
return 0;
}



