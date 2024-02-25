#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
       std::unordered_map <char, int> countS;
       std::unordered_map <char, int> countT;

        for (char c : s){
            countS[c] += 1;
        }

        for (char c : t){
            countT[c] += 1;
        }

        return countS == countT;
    }
};