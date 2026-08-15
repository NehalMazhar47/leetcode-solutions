class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int sum = arr[left].first + arr[right].first;
            if(sum==target){
                return {arr[left].second, arr[right].second};;
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};

        
    }
};

View more
 
More challenges
. Number of Pairs of Strings With Concatenation Equal to Target
. First Letter to Appear Twice
. Find Subarrays With Equal Sum


/5
C++

Auto










class Solution {public:    vector<int> twoSum(vector<int>&     nums, int target) {        vector<pair<int, int>> arr;        for(int i=0;i<nums.size();i++){            arr.push_back({nums[i], i});        }        sort(arr.begin(), arr.end());        int left=0;        int right=nums.size()-1;        while(left<right){            int sum = arr[left].first +             arr[right].first;            if(sum==target){                return {arr[left].                second, arr[right].                second};;
Saved
Upgrade to Cloud Saving
Ln 1, Col 1
