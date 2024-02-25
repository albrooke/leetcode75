#include <unordered_map>



class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;
    vector<vector<string>> results;
//for (int i = 0; i < strs.size(); i++) 
    for (const string& strValue : strs) {
        string key = strValue;
        sort(key.begin(), key.end()); //eat --> aet
        //key is now aet
        //map aet/key to a value- vector of corresponding strings 
      anagramMap[key].push_back(strValue);
    }
//put all vector of strings in new vector
    for (auto i : anagramMap){
      results.push_back(i.second);
    }
    return results;
  }
};

//anagramMap[key] retrieves value associated with key: e.g. aet
//eat and tea will also have same value of key-> eat 
// to they will get added together:
// key: value 
//  aet: eat, tea, ate
