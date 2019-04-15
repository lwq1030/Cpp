//
//  两个栈实现队列出栈入栈.cpp
//  Cpp
//
//  Created by 李文祺 on 2019/4/15.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
#include <iostream>
class Solution{
public:
    void push(int node){
        stack1.push(node);
    }
    int pop(){
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int t=stack1.top();
        stack2.pop();
        return t;
    }
private:
    stack<int> stack1;
    stack<int> stack2;
    
};
