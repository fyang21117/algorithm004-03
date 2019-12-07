class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid = right / 2;
        int result = -1;
        while (left <= right) {
            mid = left + (right - left)/2;
            if(target == nums[mid]) {
                    result = mid;
                    break;
            }
            if(nums[mid]>=nums[left]) {
                if(target>=nums[left]&&target<nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if(target>=nums[mid]&&target<=nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return result;
    }
};
