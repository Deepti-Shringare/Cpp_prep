#include <iostream>
#include <vector>
#include <climits>   // <-- required for INT_MIN

using namespace std;


//BRUTE FORCE APPROACH TIME COMPLEXITY O(n^3)

int main() {
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "max subarray " << maxSum << endl;

    return 0;
}
//kadanes Algorithm  Time complexity O(n)
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        for (int val : nums) {
            currSum += val;
            maxSum = max(currSum, maxSum);

            if (currSum < 0) {
                currSum = 0;
            }
        }

        return maxSum;   // ✅ return inside function
    }
};
