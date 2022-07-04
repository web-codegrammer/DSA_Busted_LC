LEETCODE: Find all unique element's solution

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> V;
        int len=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<len-1;i++){
            if(nums[i]==nums[i+1]){
                V.push_back(nums[i]);
            }
        }
        return V;
    }
};


all duplicates in an array:
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       sort(nums.begin(), nums.end()); //sorting given vector
       vector<int> a;  //intialising a new vector
       for(int i=1 ; i<nums.size() ; i++){
           if(nums[i]==nums[i-1]){  //checking for matching
              a.push_back(nums[i]); //adding nums[i] into array if it is repeating
           }
       }
        
     return a ;  //returning vector a 
    }
};

Ques:2 ->  Find All Duplicates in an Array
Solution:-
vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }