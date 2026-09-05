class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> finalans;
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans1;
        for(int i = 0; i < n1; i++){
            int j = 0;
            bool found = false;
            while(j < n2){
                if(nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
                j++;
            }
            if(!found){
                ans1.push_back(nums1[i]);
            }
        }

        vector<int> ans2;
        for(int m = 0; m < n2; m++){
            int l = 0;
            bool found = false;
            while(l < n1){
                if(nums1[l] == nums2[m]){
                    found = true;
                    break;
                }
                l++;
            }
            if(!found){
                ans2.push_back(nums2[m]);
            }
        }

        sort(ans1.begin(), ans1.end());
        ans1.erase(unique(ans1.begin(), ans1.end()), ans1.end());

        sort(ans2.begin(), ans2.end());
        ans2.erase(unique(ans2.begin(), ans2.end()), ans2.end());

        finalans.push_back(ans1);
        finalans.push_back(ans2);
        return finalans;

    }
};