//
//  LinkedList.hpp
//  LinkedListC++
//
//  Created by Stephen Lardieri on 9/29/2015.
//  Copyright © 2015 Stephen Lardieri. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

class LinkedListNode;

class LinkedList {

private:
  LinkedListNode * head;

  void printList();

public:
  LinkedList();
  virtual ~LinkedList();

  void addValueToHead (void * value);
  void addValueToTail (void * value);
  void removeValue (void * value);

  static void testList();

};

#endif /* LinkedList_hpp */
