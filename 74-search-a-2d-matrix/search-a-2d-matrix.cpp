#include<algorithm>
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i:matrix)
        {
            if(find(i.begin(),i.end(),target)!=i.end()) 
            return true;
        }
        return false;
    }
};