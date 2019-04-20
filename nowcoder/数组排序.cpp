//
//  数组排序.cpp
//  Cpp
//  love YH
//  Created by 李文祺 on 2019/4/17.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int minNumberInRotateArray(vector<int> rotateArray){
        sort(rotateArray.begin(),rotateArray.end());
        return rotateArray[0];
        
    }
};
class Solution1{
public:
    int minNumberInRotateArray(vector<int> rotateArray){
        int min=65536;
        if(!rotateArray.empty()){
            for (int i=0;i<rotateArray.size();i++){
                if(min>rotateArray.at(i)){
                    min=rotateArray.at(i);
                }
                return min;
            }
        }
        else return 0;
        return 0;
    }
};
