class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=0;j<n;j++){
                if(j!=i){
                    prod*=nums[j];
                }
            }
            ans[i]=prod;
        }
        return ans;
    }
};

