class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
     for(int i=0;i<nums.size();i++)
     {
        umap[nums[i]]++;
     }
     vector<pair<int,int>> e(umap.begin(), umap.end());
      sort(e.begin(),e.end(),[](auto& a, auto& b)
      {
        return a.second>b.second;

      });
    vector<int> result;
    for(int i=0;i<k;i++)
    result.push_back(e[i].first);
    return result;
    }
};