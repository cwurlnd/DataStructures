/***************
* File: SorDLList.h
* Author: Corey Wurl
* NDID: 902091236
*
* This file contains the function definitions and
* structs for a Sorted Linked List Data structure
***************/

#ifndef SDLLIST_H
#define SDLLIST_H

#include "DLList.h"

template <class T>
class SorDLList : public DLList<T> {
  public:

    // Default Constructor
    SorDLList() : DLList<T>() {}

    ~SorDLList() {
    }

    void Insert (T value) {
      typename SorDLList<T>::node* temp = new typename SorDLList<T>::node(value);

      if ( this->IsEmpty() )
      {
        this->head = temp;
        this->tail = temp;
      }

      else
      {
        typename SorDLList<T>::node* prev = NULL;
        typename SorDLList<T>::node* curr = this->head;

        // Check if the value is the smallest in the list
        if (value < curr->data) {
          this->push_front(value);
          return;
        }

        /* traverse the list until the end */
        while (curr != NULL && curr->data < value)
        {
          prev = curr;
          curr = curr->next;
        }

        /* insert the node, temp, at the end */
        prev -> next = temp;

        /* Allocate the previous node */
        prev -> next -> prev = prev;

        // Set inserted node's next to curr
        prev -> next -> next = curr;

        // Allocate tail if at the end of the linked list
        if (curr == NULL) {
          this->tail = prev -> next;
        }
        else {
          // Assign curr's prev to the inserted node
          curr -> prev = prev -> next;
        }
      }
    }

    friend std::ostream& operator<<( std::ostream& output, const SorDLList<T>& theList ){

       typename SorDLList<T>::node* curr;

		   if (theList.IsEmpty())
		   {
			  output << "The list is empty" << std::endl;;
		   }
		   else
		   {
			   curr = theList.head;

			   /* Until the end of the list */
			   while (curr != NULL)
			   {
				   /* print the current data item */
				   output << curr->data << " ";

				   /* move to the next node */
				   curr = curr->next;
			   }
		   }

		   return output;
		}

};



#endif
