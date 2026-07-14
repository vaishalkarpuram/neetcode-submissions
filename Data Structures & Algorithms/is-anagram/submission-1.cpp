#include <unordered_set>
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) {
            return false;
        }

        unordered_multiset<char> characters;
        for(int i = 0; i < s.length(); i++){
            characters.insert(s.at(i));
        }

        for(auto it = characters.begin(); it != characters.end(); it++) {
            //if a letter cannot be found 
            //string library's find() is a little weird, thus the weird condition. find() can return an overloaded size_t int
            if(t.find(*it) < 0 || t.find(*it) > t.length()) {
                return false;
            }
            int index = t.find(*it);
            //reupdating the string t in order to reduce repeat letters
            t = t.substr(0, index) + t.substr(index + 1, t.length());
            //if the letter is found 
        }
        return true;
    }
};
