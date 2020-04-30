//
//  46_Permutations.hpp
//  algorithms
//
//  Created by Maple Yin on 2020/4/24.
//  Copyright © 2020 Maple Yin. All rights reserved.
//

#ifndef _6_Permutations_hpp
#define _6_Permutations_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> resultVector(0);
        auto size = nums.size();
        if (size == 0) {
            return resultVector;
        }
        resultVector.push_back(vector<int>(1,nums[0]));
        for (unsigned long i = 1; i < size; ++i) {
            resultVector = addElement(nums[i], resultVector);
        }
        
        return resultVector;
    }
    
    vector<vector<int>> addElement(int num, vector<vector<int>>&nums) {
        auto size = nums.size();
        for (unsigned long i = 0; i < size; ++i) {
            vector<int> each = nums[i];
            auto eachSize = each.size();
            for (unsigned long eachIndex = 0; eachIndex < eachSize; ++eachIndex) {
                vector<int> copyEach(each);
                copyEach.insert(copyEach.begin() + eachIndex, num);
                nums.push_back(copyEach);
            }
            nums[i].insert(nums[i].end(), num);
        }
        
        return nums;
    }
};

#endif /* _6_Permutations_hpp */
;
