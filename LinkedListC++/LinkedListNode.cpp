//
//  LinkedListNode.cpp
//  LinkedListC++
//
//  Created by Stephen Lardieri on 9/29/2015.
//  Copyright © 2015 Stephen Lardieri. All rights reserved.
//

#include "LinkedListNode.hpp"

LinkedListNode::LinkedListNode (void * value) {
  this->value = value;
  this->next = nullptr;
}