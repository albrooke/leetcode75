#include <stdlib.h>
#include <unordered_map>

//Given a target number, find two integers in an array nums who's sum is = target, return their indices
//Method:
// A) create an empty hashmap
// B) iterate through the nums array and check if the difference (target - nums[i]) exists in the hash map
//if it does, we return hashMap difference index and index at nums 
// C) if it doesn't exist we update hashmap with nums[i] that we checked


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashMap;

        //interate through vector nums get difference
        for (int i = 0; i < nums.size(); i++){
            //calculate diff = target - nums;
            int difference = target - nums[i];

        //check if difference is hashmap, return indices [diff], i 
        //note first num in vector will be not be found so added to hashmap
        //this first num is later checked again 
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