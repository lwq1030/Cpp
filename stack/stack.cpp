//
//  stack.cpp
//  Cpp
//
//  Created by 李文祺 on 2019/4/11.
//  Copyright © 2019 李文祺. All rights reserved.
//

#include "stack.hpp"
#include <iostream>
MyStack::MyStack(int size){
    m_iSize=size;
    m_pBuffer=new char[size];
    m_iTop=0;//空栈
}
MyStack::~MyStack(){
    delete[] m_pBuffer;
    m_pBuffer=NULL;
}
bool MyStack::stackEmpty(){
    if(m_iTop==0){     //if(0==m_iTop)
        return true;
    }else return false;
    return 0;
}
bool MyStack::stackFull(){
    if(m_iTop>=m_iSize){
        return true;
    }return false;
}
void MyStack::clearStack(){
    m_iTop=0;
}
int MyStack::stackLength(){
   return m_iTop;
}
bool MyStack::push(char elem){
    if(stackFull()){
        return false;
    }
  m_pBuffer[m_iTop]=elem;
    m_iTop++; //永远指向空位置
    return true;
}
bool MyStack::pop(char &elem){
    if(stackEmpty()) return false;
    m_iTop--;
    elem=m_pBuffer[m_iTop];
    return true;
}
/*
 char MyStack::pop(){
 if(stackEmpty()) return false;
 else {
 m_iTop--;
 return m_pBuffer[m_iTop];
 */

void MyStack::stackTraverse(){
    for(int i=0;i<m_iTop;i++){
        std::cout<<m_pBuffer[i]<<",";
        
    }
}
