class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0)
            nums1 = nums2;
        else if(n != 0){
            int temp = m;
            int indexM = 0;
            int indexN = 0;

            while(indexM < m || indexN < n){
                if(indexM >= m){
                    nums1.insert(nums1.begin() + indexM, nums2[indexN]);
                    indexM++;
                    indexN++;
                }else if(indexN >= n){
                    indexM++;
                }else if (nums1[indexM] > nums2[indexN]){
                    nums1.insert(nums1.begin() + indexM, nums2[indexN]);
                    m++;
                    indexM++;
                    indexN++;
                }else{
                    indexM++;
                }
            }
            nums1.resize(temp+n);
        }
    }
};

//O(M+N)