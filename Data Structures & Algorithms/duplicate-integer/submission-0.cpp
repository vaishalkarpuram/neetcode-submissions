#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> list; 
        for(int i = 0; i < nums.size(); i++) {
            if(list.find(nums.at(i))!=list.end()) {
                return true;
            }
            list.insert(nums.at(i));

        }
        return false;
    }
};