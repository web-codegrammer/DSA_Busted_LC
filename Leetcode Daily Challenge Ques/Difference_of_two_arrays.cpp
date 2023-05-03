class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
	// Two OHsets to put only unique elements
	set<int> hset_1;
        set<int> hset_2;
        
	// Put all unique elements from nums2 in hset_2 
        for(int i : nums2){
            hset_2.insert(i);
        }
        
	// Put all unique elements from nums1 in hset_1 
        for(int j : nums1){
            hset_1.insert(j);
        }
        
        vector<int> vec1, vec2;
	// we will return {vec1, vec2}
		
	/* We solved ques easily using 2 C++ STL function */
	// set_difference -> Copies the elements from the sorted "hset_1" which are not found in the sorted "hset_2" to a container in sorted order
	// back_inserter -> This STL is used to add elements to the end of a container
        
	//Find difference in between hset_1 and hset_2 and put unique element of hset_1 in vec1
        set_difference(begin(hset_1), end(hset_1), begin(hset_2), end(hset_2), back_inserter(vec1));
        
	//Find difference in between hset_2 and hset_1 and put unique element of hset_2 in vec2
        set_difference(begin(hset_2), end(hset_2), begin(hset_1), end(hset_1), back_inserter(vec2));
        
        return {vec1, vec2};
    }
};
