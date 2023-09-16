#pragma once 
#include <cstdint>

/*
Реализовать класс CStack - стэк элементов int с помощью односвязного списка (node)

пример работы стандартной реализации
https://en.cppreference.com/w/cpp/container/stack
*/


struct node
{
    uint32_t info;
    node* next = nullptr;
};


class CStack{
    node* ptop = nullptr;
    void clear();
public:
    CStack();
    ~CStack(); //clears all memory
    
    void pop(); //	removes the top element
    void push(int val); //inserts element at the top
    int top(); //accesses the top element
    bool empty(); //checks whether the underlying container is empty
};