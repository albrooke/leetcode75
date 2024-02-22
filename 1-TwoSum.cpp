#include <stdlib.h>
#include <unordered_map>

//Give an target num, find two integers in an array who's sum is target, return their indices
//Method:
// A) create an empty hashmap
// B) iterate through the array and checking if the difference (target - nums[i]) exists in the hash map
//if it does, we return hashMap diiference location and nums[i]
// C) if it doesn't exist we update hashmap with nums[i] that we checked


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashMap;

        //interate through vector nums get difference
        for (int i = 0; i < nums.size(); i++){
            //calculate diff = target - nums;
            int difference = target - nums[i];

        //check difference in map alreayd in map, return indices [diff], i 
        //.count(checks if present) true is 1
            if(hashMap.count(difference) > 0) {
                return { 
        //difference is mapped to its index
        //so returns it's index, and other num index
                    hashMap[difference], i 
                    };
                }
        //Not in hashMap, so add Key (num), value (index)
        //similar to:  hashMap.insert( {nums[i], i});
        //hashMap.first (key- number in vector) , hashMap.second (value- index of nums vector)
                hashMap[nums[i]] = i;
            }
            //no solutin return empty hashmap
            return {};
    }
};