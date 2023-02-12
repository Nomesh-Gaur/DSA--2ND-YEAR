class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1;

        for (int k = m+m-1; k>=0; k--){
            if(nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                cout << nums1[k] << " ";
            }
            else {
                nums1[k] = nums2[j];
                j--;
                cout << nums1[k] << " ";
            }
        }
    }
};
