//
//  main.cpp
//  4
//
//  Created by 李文祺 on 2019/4/11.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
#include"list.hpp"
int main(void){
    int e1=3;
    List *list1=new List(10);
    list1->ListInsert(0, &e1);
    list1->ListTraverse();
    delete list1;
}
