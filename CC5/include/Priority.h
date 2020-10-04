/************
 * File: Priority.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This files contains the operators, constructors,
 * and more to create the Priortiy class
*************/
#ifndef PRIORITY
#define PRIORITY

#include <iostream>

template <class T>
class Priority {
  private:

    T value;
    unsigned int priority;

  public:

    // Default constructor
    Priority() : value(), priority() {}

    // Overloaded constructor
    Priority(T valIn, unsigned int priIn): value(valIn), priority(priIn) {}

    // Destructor
    ~Priority() {}

    // Copy constructor
    Priority(const Priority<T>& copy) : value(copy.value), priority(copy.priority) {}

    // Assignment operator
    Priority<T> operator=(const Priority<T>& assign) {
      if (this != assign) {
        this.value = assign.value;
        this.priority = assign.priority;
      }

      return *this;
    }

    friend std::ostream& operator<<( std::ostream& output, const Priority<T>& temp ){
      output << "{\"" << temp.value << "\", " << temp.priority << "}";
      return output;
    }

    bool operator>=( const Priority<T>& rhs ) const{
    	return priority < rhs.priority;
    }

    bool operator>( const Priority<T>& rhs ) const{
    	return priority <= rhs.priority;
    }

    bool operator<=( const Priority<T>& rhs ) const{
    	return priority > rhs.priority;
    }

    bool operator<( const Priority<T>& rhs ) const{
    	return priority >= rhs.priority;
    }

    bool operator==( const Priority<T>& rhs ) const{
    	return priority == rhs.priority;
    }

};

#endif
