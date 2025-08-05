class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            for(int j=i;j<l;j++){
                if(nums[j]<nums[i])
                {
                    int x=nums[j];
                    nums[j]=nums[i];
                    nums[i]=x;
                }
            }
        }
     
    }

};