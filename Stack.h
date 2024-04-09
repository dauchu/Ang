#pragma once
#define __STACK__
#include "LinkedList.h"
#include <iostream>
using namespace std;
template <class T>
class Stack : public LinkedList<T> {
  public:
    bool Delete(T &element);
};
template <class T>
bool Stack<T>::Delete(T &element) {
    if (this->current_size == 0) return false;
    Node<T>* temp = this->first;
    this->first = this->first->link;
    element = temp->data;
    delete temp;
    this->current_size--;
    return true;
}
