//
//  list.hpp
//  4
//
//  Created by 李文祺 on 2019/4/11.
//  Copyright © 2019 李文祺. All rights reserved.
//

#ifndef list_hpp
#define list_hpp

#include <stdio.h>
class List{
public:
    List(int size);
    ~List();
    void ClearList();
    bool ListEmpty();
    int ListLength();
    bool GetElem(int i,int *e);
    int LocateElem(int *e);
    bool PriorElem(int *currentElem,int *preElem);
    bool NextElem(int *currentElem,int *NextElem);
    void ListTraverse();
    bool ListInsert(int i,int *e);
    bool ListDelete(int i,int *e);
    
private:
    int *m_pList;
    int m_iSize;
    int m_iLength;
};

#endif /* list_hpp */
