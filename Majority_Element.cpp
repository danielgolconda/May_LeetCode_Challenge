class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int mj = nums[0],count = 1;
        for(int i=1;i<n;i++)
        {
            if(nums[i] == mj)
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count == 0)
            {
                mj = nums[i];
                count = 1;
            }
        }
        int res = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == mj)
            {
                res++;
            }
        }
        if(res > (n>>1))
        {
            return mj;
        }
        else
        { 
            // Does not exist case
            return -1;
        }
    }
};
