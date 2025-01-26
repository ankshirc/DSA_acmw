class NextPerm {
public:
    void nextPermutation(vector<int>& nums) {
        int b = -1;
        for(int i = nums.size()-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                b = i-1;
                break;
            }
        }
        if(b<0){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]>nums[b]){
                swap(nums[b], nums[i]);
                reverse(nums.begin()+b+1, nums.end());
                break;
            }
        }
    }
};
