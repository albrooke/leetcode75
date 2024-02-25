
//Problem 217: Contains Duplicate
//Given an integer array nums, return true if any value appears at least twice
//in the array, and return false if every element is distinct.

//options: A- add to set, check set size to vector size
//B- unordered map should work: increase count, check count
//C- 2 pointer solution 
//bruteforce solution  to nested loops

#include <unordered_set> 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         std::unordered_set<int> setA;
    
    for (int i : nums) {
        setA.insert(i);
        }
    return setA.size() != nums.size();  
    } 
};

