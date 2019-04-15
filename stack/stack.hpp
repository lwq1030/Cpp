//
//  stack.hpp
//  Cpp
//
//  Created by 李文祺 on 2019/4/11.
//  Copyright © 2019 李文祺. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
class MyStack{
public:
    MyStack(int size);
    ~MyStack();
    bool stackEmpty();
    bool stackFull();
    void clearStack();
    int stackLength();
    bool push(char elem);
    bool pop(char &elem);
    void stackTraverse();
private:
    char *m_pBuffer; //指向栈空间，new空间并用指针指向。
    int m_iSize;
    int m_iTop; //栈顶，反应元素个数
    
};


#endif /* stack_hpp */
