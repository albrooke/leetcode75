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

/* less optimal way is creating a new string

#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
                //initialize new string
        std::string newStr = "";
                //iterate through chars in string
        for (char c : s) {
                //if is alnum add lowercase to newStr
            if (std::isalnum(c)) {
                newStr += std::tolower(c);
            }
        } //return T/F comparison of the created newStr and its reverse 
                //How: string ranger constructor (7):
                //string (iterator first, iterator last)
                //rbegin() is a reverse iterator pointing to last char
                //rend() points to first char 
        return newStr == std::string(newStr.rbegin(), newStr.rend());
    }
};

*/