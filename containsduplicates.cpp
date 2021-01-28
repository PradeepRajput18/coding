
// order of N as it reduces time consumption rather than broot force of using two for loops

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>set;
        for(int i:nums){
                set.insert(i);
        }
        return set.size()!=nums.size();
    }
};
