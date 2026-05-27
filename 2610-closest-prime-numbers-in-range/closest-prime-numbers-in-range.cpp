class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>nums;
        for(int i=left;i<=right;i++){
           if(i < 2) continue;

            bool flag = true;

            for(int j = 2; j * j <= i; j++) {
                if(i%j==0){
                    flag=false;
                    break;
                }
            }

            if(flag){
                nums.push_back(i);
            }
            
        }
        if(nums.size() < 2) {
            return {-1, -1};
        }

        int mini = INT_MAX;
        vector<int> ans;

        for(int i = 1; i < nums.size(); i++) {

            int diff = nums[i] - nums[i - 1];

            if(diff < mini) {

                mini = diff;

                ans = {nums[i - 1], nums[i]};
            }
        }

        return ans;
    }
};