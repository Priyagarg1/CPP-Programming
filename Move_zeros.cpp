void moveZeroes(int* nums, int numsSize){
           int i,j=0,temp;
        for(i=1;i<numsSize;i++)
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
