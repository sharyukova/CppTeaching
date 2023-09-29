#include "cstack.hpp"


CStack::CStack(){}

CStack::~CStack(){
    //destroy me!)
    clear();
}

void CStack::pop(){

}

void CStack::clear(){

}

void CStack::push(uint32_t val){


}

uint32_t CStack::top(){
    return 0;
}

bool CStack::empty(){
    return ptop==nullptr;
}