class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> cSet;
        int left = 0;
        
        for (int i = 0; i < n; i++) 
        {
            if (cSet.count(s[i]) == 0) 
            {
                cSet.insert(s[i]);
                maxLength = max(maxLength, i - left + 1);
            } else 
            {
                while (cSet.count(s[i])) 
                {
                    cSet.erase(s[left]);
                    left++;
                }
                cSet.insert(s[i]);
            }
        }
        
        return maxLength;
    }
};