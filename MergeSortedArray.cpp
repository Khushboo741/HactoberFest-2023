class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //vector<int> l;
        for(int i=0; i<n; i++){
            nums1[m+i]=nums2[i];
        }
        
        sort(nums1.begin(),nums1.end());
        for(int i=0; i<nums1.size(); i++){
            cout<<nums1[i]<<" ";
        }

    }

};
