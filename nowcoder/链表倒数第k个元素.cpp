//
//  链表倒数第k个元素.cpp
//  Cpp
//  love YH
//  Created by 李文祺 on 2019/4/21.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include <stdio.h>
#include <iostream>
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
    val(x), next(NULL) {
    }
};
class solution{
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode *p,*q;
        unsigned int count=0;
        p=q=pListHead;
        while(p){
            count++;
            p=p->next;
            if(count>k) q=q->next;
        }
        if (count<k) return 0;
        
        return q;
    }
    ListNode* FindKthToTail1(ListNode* pListHead, unsigned int k) {
        ListNode *p,*q;
        p=q=pListHead;
        for(unsigned int i=0;i<k;i++){
            p=p->next;
        }
        while(p->next!=NULL){
            p=p->next;
            q=q->next;
        }
        return q;
    }
};
