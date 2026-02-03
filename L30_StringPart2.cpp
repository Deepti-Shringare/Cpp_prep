// //palindrome leetcode 125

// class Solution {
// public:
// bool isAlphaNum(char ch){
//     if((ch>='0' && ch <='9')|| (tolower(ch) >='a' && tolower(ch) <='z')){
//         return true;
//     }
//     return false;
// }

//     bool isPalindrome(string s) {
//         int st=0,end=s.length()-1;

//         while(st<end){
//             if(!isAlphaNum(s[st])){
//                 st++;continue;
//             }
//             if(!isAlphaNum(s[end])){
//                 end--;continue;

//             }
//             if(tolower(s[st]) != tolower(s[end])){
//                 return false;
//             }
//             st++;end--;
//         }
//         return true;
        
//     }
// };

//leetcode 1910
//stl function used here s.erase and s.find
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length()>0 && s.find(part) < s.length()){
//             s.erase(s.find(part), part.length());
//         }
//         return s;
        
//     }
// };