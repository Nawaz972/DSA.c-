class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,c=0,s=0,z=0,maxi = INT_MIN;

        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                z++;
            }
        }

        if(z==nums.size())
        {
            for(i=0;i<nums.size();i++)
            {
                maxi = max(nums[i], maxi);
            }
            return maxi;
        }
        else
        {
            for(i=0;i<nums.size();i++)
            {
                c=c+nums[i];
                if(c<0)
                {
                    c=0;
                }
                if(c>s)
                {
                    s=c;
                }
            }
            return s;
        }
    }
};
