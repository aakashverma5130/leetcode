class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size()-2;
        int index = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] >= nums[mid+1]){
                index = mid;;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        if(index == -1){
            return nums.size()-1;
        }
        return index;
    }
};