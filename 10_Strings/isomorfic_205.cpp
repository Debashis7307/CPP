#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;  // Different lengths cannot be isomorphic
        }
        
        // Arrays to store the last seen positions of characters in s and t
        vector<int> s_map(256, -1);
        vector<int> t_map(256, -1);
        
        for (int i = 0; i < s.size(); ++i) {
            char s_char = s[i];
            char t_char = t[i];
            
            // Check if the current character mappings match
            if (s_map[s_char] != t_map[t_char]) {
                return false;
            }
            
            // Update the last seen positions for s_char and t_char
            s_map[s_char] = i;
            t_map[t_char] = i;
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    string s = "eggless";
    string t = "addoazz";
    
    bool result = solution.isIsomorphic(s, t);
    cout << (result ? "True" : "False") << endl;

    return 0;
}
