//
//  链表从尾到头返回.cpp
//  Cpp
//  love YH
//  Created by 李文祺 on 2019/4/15.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
struct ListNode{
    int val;
    struct ListNode *next;
    ListNode(int x):
    val(x),next(NULL){}
};
class Solution{
public:
    std::vector<int> printListFromTailtoHead(ListNode* head){
        ListNode *p=head,*temp=head,*nhead=new ListNode(0);
        while(p!=NULL){
            temp=temp->next;
            p->next=nhead->next;
            nhead->next=p;
            p=temp;
        }
        
        vector<int> a;
        p=nhead->next;
        while(p!=NULL){
        a.push_back(p->val);
            p=p->next;
        }
        return a;
    }
    
};
