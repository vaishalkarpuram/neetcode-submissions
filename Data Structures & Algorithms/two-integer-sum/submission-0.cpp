#include <unordered_map>
#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int, int> map;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            auto it = map.find(target - nums.at(i));
            if(it != map.end()) {
                
                if(i > it->second) {
                    result.push_back(it->second);
                    result.push_back(i);
                }else{
                    result.push_back(i);
                    result.push_back(it->second); 
                }
                return result;
            }else{
                map.insert({nums.at(i), i});
            }
        }
        return result;
    }
};
