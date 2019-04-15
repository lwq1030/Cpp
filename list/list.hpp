//
//  list.hpp
//  4
//  链表
//  Created by 李文祺 on 2019/4/11.
//  Copyright © 2019 李文祺. All rights reserved.
//

#ifndef list_hpp
#define list_hpp

#include <stdio.h>
#include "node.hpp"
class List{
public:
    List();
    ~List();
    void ClearList();
    bool ListEmpty();
    int ListLength();
    bool GetElem(int i,Node *pNode);
    int LocateElem(Node *pNode);
    bool PriorElem(Node *pCurrentNode,Node *pNode);
    bool NextElem(Node *pCurrentNode,Node *pNode);
    void ListTraverse();
    bool ListInsert(int i,Node *pNode);
    bool ListDelete(int i,Node *pNode);
    bool ListInsertHead(Node *pNode);
    bool ListInsertTail(Node *pNode);
    
private:
    Node *m_pList;
    //int m_iSize;
    int m_iLength;
};

#endif /* list_hpp */
