class Solution {
public:
    //Aniket-Sonwane
    int searchInsert(vector<int>& nums,int target) {
        int i;
        for(i=0;i<nums.size();i++) {
            if(target<=nums[i])
                return i;
        }
        return nums.size();
    }
};