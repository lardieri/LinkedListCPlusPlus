//
//  LinkedListNode.hpp
//  LinkedListC++
//
//  Created by Stephen Lardieri on 9/29/2015.
//  Copyright © 2015 Stephen Lardieri. All rights reserved.
//

#ifndef LinkedListNode_hpp
#define LinkedListNode_hpp

class LinkedListNode {

private:
  void * value;
  LinkedListNode * next;

public:
  LinkedListNode (void * value);
  
  friend class LinkedList;

};

#endif /* LinkedListNode_hpp */
