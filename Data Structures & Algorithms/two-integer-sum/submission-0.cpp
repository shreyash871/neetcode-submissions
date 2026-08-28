class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        unordered_map<int , int> ump;

        while(i < n ){
            int current = nums[i];
            int needed = target - current ;
            if(ump.find(needed) != ump.end()){
                return{ump[needed], i};
            }else{
                ump[current] = i;
            }
            i++;
        }
        return{};
    }
   
};
