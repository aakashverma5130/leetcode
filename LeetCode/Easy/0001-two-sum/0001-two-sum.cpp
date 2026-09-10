class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low = 0,sum = 0;
        int high = nums.size()-1;
        vector<pair<int,int>>nums2;
        for(int i = 0; i < nums.size(); i++) {
        nums2.push_back({nums[i], i});
    }
        sort(nums2.begin(),nums2.end());
        while(low < high){
            sum = nums2[low].first + nums2[high].first;
            if(sum == target){
                return{nums2[low].second,nums2[high].second};
            }
            else if(sum < target){
                  low++;
            }
            else{
                 high--;
            }
        }
        return{};
    }
};