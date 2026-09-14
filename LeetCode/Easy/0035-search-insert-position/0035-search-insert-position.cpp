class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
        int res = -1;
        bool flag = false;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] >=target){
                flag = true;
                res = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        if(flag == true){
            return res;
        }
        else{
            int index = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
            return index;
        }
    }
};