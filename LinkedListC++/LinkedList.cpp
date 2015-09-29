//
//  LinkedList.cpp
//  LinkedListC++
//
//  Created by Stephen Lardieri on 9/29/2015.
//  Copyright © 2015 Stephen Lardieri. All rights reserved.
//

#include <iostream>

#include "LinkedList.hpp"
#include "LinkedListNode.hpp"

LinkedList::LinkedList() {
  this->head = nullptr;
}

LinkedList::~LinkedList() {
  LinkedListNode * next = nullptr;
  for (LinkedListNode * current = this->head; current; current = next) {
    next = current->next;
    delete current;
  }
}

void LinkedList::addValueToHead (void * value) {
  LinkedListNode * newNode = new LinkedListNode(value);

  newNode->next = this->head;
  this->head = newNode;
}

void LinkedList::addValueToTail (void * value) {
  LinkedListNode * newNode = new LinkedListNode(value);

  LinkedListNode ** current = &this->head;
  while (*current) {
    current = &(*current)->next;
  }

  *current = newNode;
}

void LinkedList::removeValue (void * value) {
  for (LinkedListNode ** current = &this->head; *current; current = &(*current)->next) {
    if ((*current)->value == value)
    {
      LinkedListNode * zombie = *current;
      *current = zombie->next;
      delete zombie;
      return;
    }
  }
}


#pragma mark - Test methods

void LinkedList::printList() {

  for (LinkedListNode * node = this->head; node; node = node->next) {
    std::cout << *(int *)node->value << "\n";
  }
  
}

void LinkedList::testList() {

  int one = 1;
  int two = 2;
  int three = 3;
  int four = 4;
  int five = 5;
  int six = 6;
  int seven = 7;
  int eight = 8;
  int nine = 9;
  int ten = 10;

  LinkedList testList;
  testList.addValueToTail(&one);
  testList.addValueToTail(&two);
  testList.addValueToTail(&three);
  testList.addValueToTail(&four);
  testList.addValueToTail(&five);
  testList.addValueToTail(&six);
  testList.addValueToTail(&seven);
  testList.addValueToTail(&eight);
  testList.addValueToTail(&nine);
  testList.addValueToTail(&ten);

  std::cout << "Original list\n";
  testList.printList();

  std::cout << "Remove three (some element in the middle)\n";
  testList.removeValue(&three);
  testList.printList();

  std::cout << "Remove one (first element)\n";
  testList.removeValue(&one);
  testList.printList();

  std::cout << "Remove ten (last element)\n";
  testList.removeValue(&ten);
  testList.printList();
  
}
