class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int l=nums.size();
        int c=1;
        for(int i=1;i<l;i++)
{
if(nums[i]!=nums[i-1])
{
nums[c]=nums[i];
c++;
}
    }
return c;
   }
};