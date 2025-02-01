class Duplicates{
public:
    int findDuplicate(vector<int>& nums) {
        int a=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                a = nums[i];
                break;
            }
        }
        return a;
    }
};
