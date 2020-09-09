/***************
 * File: DoubleHash.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the DoubleHash class
 * needed to use double hashing
 **************/

#ifndef DOUBLEHASH
#define DOUBLEHASH

#include "LinearProbe.h"

template<class Key, class Value>
class DoubleHash : public HashTable<Key, Value> {

  private:

    long unsigned int HashFunc( const int& keyToTranslate ) const{
        
      if (keyToTranslate < 0){
        return (long unsigned int)(-1 * keyToTranslate);
      }
      
      return (long unsigned int) keyToTranslate;
      
    }
   
    long unsigned int HashFunc( const std::string& keyToTranslate ) const{
      
      return keyToTranslate.size();
      
    }
    long unsigned int HashFunc( const int& keyToTranslate ) const{
        
      if (keyToTranslate < 0){
        return (long unsigned int)(-1 * keyToTranslate);
      }
      
      return (long unsigned int) keyToTranslate;
      
    }

    long unsigned int HashFunc( const std::string& keyToTranslate ) const{
      
      return keyToTranslate.size();
      
    }

    long unsigned int findPos( const Key& theKey ) const{
      
      long unsigned int currentPos;
      long unsigned int iter = 0;
      const unsigned int STEPSIZE = 1;
      
      do{
        // Hash Function determines current position
        currentPos = ((HashFunc( theKey )   % array.capacity() );
        ++iter;
      }
      while(
        array.at( currentPos ).state != EMPTY
        && array.at( currentPos ).state != DELETED
        && array.at( currentPos ).key != theKey
        && iter < array.capacity()
      );
      
      // Return capacity if the current value isn't the key. For safety
      if(array.at( currentPos ).state == ACTIVE 
        && array.at( currentPos ).key != theKey ){
          
          return array.capacity();
          
        }
      
      return currentPos;
      
    }


  public:
    
    // Constructor
    DoubleHash(const unsigned int = 0) : HashTable<Key, Value>(sizeIn) {}

    ~DoubleHash () {
      
    }
  
};

#endif
