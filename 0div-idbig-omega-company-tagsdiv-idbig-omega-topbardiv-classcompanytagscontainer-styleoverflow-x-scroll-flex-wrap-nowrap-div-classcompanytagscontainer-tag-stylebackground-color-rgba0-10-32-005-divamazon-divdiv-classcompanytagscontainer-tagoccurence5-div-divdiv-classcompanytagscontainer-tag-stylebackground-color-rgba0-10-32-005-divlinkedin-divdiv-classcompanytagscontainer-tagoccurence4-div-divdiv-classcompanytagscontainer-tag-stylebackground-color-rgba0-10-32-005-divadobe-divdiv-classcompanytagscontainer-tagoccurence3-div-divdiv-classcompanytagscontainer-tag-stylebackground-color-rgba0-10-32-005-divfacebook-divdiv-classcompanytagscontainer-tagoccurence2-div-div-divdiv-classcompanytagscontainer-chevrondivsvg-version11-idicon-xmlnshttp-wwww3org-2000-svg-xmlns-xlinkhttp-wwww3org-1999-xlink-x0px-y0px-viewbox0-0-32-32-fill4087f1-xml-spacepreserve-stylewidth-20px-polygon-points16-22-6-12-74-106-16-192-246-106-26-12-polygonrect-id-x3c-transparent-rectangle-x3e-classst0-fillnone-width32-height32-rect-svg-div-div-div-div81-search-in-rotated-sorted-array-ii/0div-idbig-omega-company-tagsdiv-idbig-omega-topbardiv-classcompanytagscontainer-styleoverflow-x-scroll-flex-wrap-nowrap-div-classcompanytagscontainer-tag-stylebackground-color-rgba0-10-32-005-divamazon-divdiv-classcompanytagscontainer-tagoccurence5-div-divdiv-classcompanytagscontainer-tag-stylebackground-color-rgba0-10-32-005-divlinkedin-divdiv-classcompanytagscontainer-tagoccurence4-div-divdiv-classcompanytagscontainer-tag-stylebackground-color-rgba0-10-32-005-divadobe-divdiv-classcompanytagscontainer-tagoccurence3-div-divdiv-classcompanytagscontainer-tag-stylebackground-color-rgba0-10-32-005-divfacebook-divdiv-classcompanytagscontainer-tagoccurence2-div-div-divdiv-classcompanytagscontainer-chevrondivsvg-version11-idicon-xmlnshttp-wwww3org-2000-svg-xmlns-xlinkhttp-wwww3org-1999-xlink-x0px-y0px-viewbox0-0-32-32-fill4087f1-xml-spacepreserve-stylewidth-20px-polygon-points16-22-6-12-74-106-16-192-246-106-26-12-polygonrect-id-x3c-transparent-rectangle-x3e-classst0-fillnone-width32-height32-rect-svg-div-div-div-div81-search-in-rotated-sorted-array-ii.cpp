class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            
            if(nums[mid]==target)
                return true;
            
            if((nums[l] == nums[mid]) && (nums[h] == nums[mid]))
            {
                l++;
                h--;
            }
            
            else if(nums[mid]>=nums[l]){
                if(nums[mid]>=target && nums[l]<=target) h=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(nums[mid]<=target && nums[h]>=target) l=mid+1;
                else
                    h=mid-1;
            }
        }
        return false;
    }
};