#include <unordered_map>
#include <utility>
/*
Given an integer array nums and an integer k,
return the k most frequent elements. 
You may return the answer in any order.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
*/

/*
Approach: 
Use a map to count elements in array: [Element]:Count
Iterate through map onto a vector of number pairs: Count:[Element]
Descend sort through vector so highest count at front
Iterate through vector K times, putting number value from pair into new vector
*/



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    std::unordered_map<int,int> countMap;  
    std:vector<pair<int, int>> sortVector;
    std::vector<int> results;
    //populate countMap is numbers and frequency
for (int i : nums) {
    countMap[i]++;
    }
    //populate vector with pairs: frequency:number
for(auto i : countMap){
    sortVector.push_back(make_pair(i.second, i.first));
}
//sort vector from reverse 
sort(sortVector.rbegin(), sortVector.rend());

//iterate through sortVector k times, put numbers in  results Vector
for (int i = 0; i < k; i++){
    results.push_back(sortVector[i].second); }

return results;
    }
};