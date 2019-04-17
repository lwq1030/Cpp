//
//  递归.cpp
//  Cpp
//
//  Created by 李文祺 on 2019/4/17.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
// 青蛙一次只能跳1或2个台阶，跳n阶台阶有几种跳法
//1 2 3 5 8 前两个相加
class Sulution{
public:
    int Jump(int n){
        if(n==1) return 1;
        else if(n==2) return 2;
        else if(n>=3) return Jump(n-1)+Jump(n-2);
        return 0;
    }
   
};
// 青蛙一次可以跳1，2，。。n阶台阶有几种跳法
//1 2 4 8。。。。。
class Sulotion1{
public:
    int Jump1(int n){
        if(n==1) return 1;
        else if(n>=2) return Jump1(n-1)*2;
        return 0;
    }
};

