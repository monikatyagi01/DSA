class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxsum=INT_MIN;
        int n=nums.size();
       
            int csum=0;
            for(int j=0;j<n;j++)
            {
                csum+=nums[j];
                maxsum =max(maxsum,csum);
                if(csum<0)
                csum=0;
            }
        
        return maxsum;
    }
};