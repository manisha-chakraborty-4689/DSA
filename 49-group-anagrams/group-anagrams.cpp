class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // key = sorted word
        // value = all words having that sorted form
        unordered_map<string, vector<string>> mp;
        
        // Process every word
        for (string s : strs) {
            
            // Make a copy
            string key = s;
            
            // Sort characters
            sort(key.begin(), key.end());
            
            // Put original word into its group
            mp[key].push_back(s);
        }
        
        // Final answer
        vector<vector<string>> ans;
        
        // Take all groups from map
        for (auto& pair : mp) {
            ans.push_back(pair.second);
        }
        
        return ans;
    }
};