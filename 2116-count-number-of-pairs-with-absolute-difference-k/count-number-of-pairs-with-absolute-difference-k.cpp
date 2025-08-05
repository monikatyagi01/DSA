class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        unordered_map<int,int> umap;
        int count=0;
        int l=nums.size();
      /*  for(auto num:nums)
        {
            umap[num]++;
            l++;
        }*/
        for(int i=0;i<l;i++)
        {
              for(int j=i+1;j<l;j++){
          //  int x=abs(num1-k);
          // if(umap.find(x)!=umap.end()){
            if(abs(nums[i]-nums[j])==k)
           count++;
          // umap[num1]--;
           }
        }
        
        return count;
    }
};