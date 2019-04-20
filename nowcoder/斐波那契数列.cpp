//
//  斐波那契数列.cpp
//  Cpp
//  love YH
//  Created by 李文祺 on 2019/4/17.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
class Sulotion{
public:
    int F(int n){
    int a=1,b=0,result=0;
    if(n<2) return n;
    for (int i=1;i<n;i++){
        result=a+b;
        a=b;
        b=result;
    }
        return result;
    }
};
