class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j=0,temp;
        int n = nums.size();
        for(i=1;i<n;i++)
        {
            if(nums[i]!=0 && nums[j]==0)
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            if(nums[j]!=0)
            {
                j++;
            }
        }
    
    }
};
