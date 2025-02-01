class MergeSortedArrays{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i, j, tmp;
        
        for ( i = 0, j= m; i < n, j < m+n; i++, j++){
            nums1[j] = nums2[i];
        }
        for (j = 0; j < m+n-1; j++ ){
            for (i= ( m+n)-2; i>=j; i--){
                if (nums1[i]>nums1[i+1]){
                    tmp = nums1[i];
                    nums1[i] = nums1[i+1];
                    nums1[i+1] = tmp;
                }
            }
        }
    }
};
