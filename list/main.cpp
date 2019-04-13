//
//  main.cpp
//  4
//
//  Created by 李文祺 on 2019/4/11.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
#include"list.hpp"
#include<iostream>
using namespace std;
int main(void){
    Node node1;
    node1.data=3;
    List *pList=new List();
    pList->ListInsertHead(&node1);
    
    delete pList;
    pList=NULL;
    
}
