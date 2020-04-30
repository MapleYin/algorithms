//
//  9_Palindrome_Number.hpp
//  algorithms
//
//  Created by Maple Yin on 2020/4/25.
//  Copyright © 2020 Maple Yin. All rights reserved.
//

#ifndef __Palindrome_Number_hpp
#define __Palindrome_Number_hpp

#include <stdio.h>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int initNum = x;
        long long revertNum = 0;
        while (x != 0) {
            int num = x % 10;
            x /= 10;
            revertNum = revertNum * 10 + num;
        }
        
        return revertNum == initNum;
    }
};

#endif /* __Palindrome_Number_hpp */
