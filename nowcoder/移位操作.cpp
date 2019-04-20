//
//  移位操作.cpp
//  Cpp
//  love YH
//  Created by 李文祺 on 2019/4/20.
//  Copyright © 2019 李文祺. All rights reserved.
//  输入数字，看二进制表示有多少个1；

#include <stdio.h>
class Solution{
public:
    int Function(int n){
        int count=0;
        while(n){
            count++;
            n=n&(n-1);
        }
        return count;
    }
    int Function1(int n){
        int count=0;
        while(n){
            if(n&1) count++;
            n=n>>1;
        }
        return count;
    }
    int f2(int n) {
        int num = 0;
        unsigned int flag = 1;
        while(flag) {
            if(n & flag)
                num++ ;
            flag <<= 1;
        }
        return num;
    }
    
}s;
