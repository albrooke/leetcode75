#include <cctype> 
#include <string>

//Key Idea: use two pointers, start and at end
//Time: O(n) length of string, Space O(1) no additional space used



class Solution {
public:
    bool isPalindrome(string s) {
        //check if empty
    if(s.length() == 0){
            return true;
        }

    //2 pointers one at start, one at end of string
    int i = 0; // 
    int j = s.length() - 1;
    //i and j will move toward each other and then stop
    while (i < j){
        //move past non-alphanumeric
        if(!isalnum(s[i])){
            i++;
            continue;
        }
        //move past non-alphanumeric
        if(!isalnum(s[j])){
            j--;
            continue;
        }
        //if alphanumerica are not same, false
        if (tolower(s[i]) != tolower(s[j])){
            return false; 
        }
        //keep checking
        i++;
        j--;
    }
    return true;
    }
};

/* could also create a new string
newStr = ""
for c in s:
if c.isalnum():
    newStr += c.lower()
return newStr=



*/