class Solution {
    public int missingNumber(int[] nums) {
        int sum=0;
        for(int i=0;i<=nums.length;i++){
            sum+=i;
        }
        int arr_sum=0;
        for(int i=0;i<nums.length;i++){
            arr_sum+=nums[i];
        }
        return (sum-arr_sum);
    }
}