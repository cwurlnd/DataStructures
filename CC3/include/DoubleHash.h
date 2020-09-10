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

    // Hash Function 2 for ints
    long unsigned int HashFunc2( const int& keyToTranslate ) const{   
      return (3 - this->HashFunc(keyToTranslate) % 3);
    }
   
    // Hash Function 2 for strings
    long unsigned int HashFunc2( const std::string& keyToTranslate ) const{  
      return (3 - this->HashFunc(keyToTranslate) % 3);
    }

    // New findPos function for DoubleHash
    long unsigned int findPos( const Key& theKey ) const{
      
      long unsigned int currentPos;
      // Set iter to 1
      long unsigned int iter = 1;
      const long unsigned int STEPSIZE = HashFunc2( theKey );
      
      do{
        // New Hash function to find the bucket
        currentPos = (this->HashFunc( theKey ) + iter*STEPSIZE) % this->array.capacity();
        ++iter;
      }
      while(
        this->array.at( currentPos ).state != EMPTY
        && this->array.at( currentPos ).state != DELETED
        && this->array.at( currentPos ).key != theKey
        && iter < this->array.capacity()
      );
      
      // Return capacity if the current value isn't the key. For safety
      if(this->array.at( currentPos ).state == ACTIVE 
        && this->array.at( currentPos ).key != theKey ){
          
          return this->array.capacity();
          
        }
      
      return currentPos;
      
    }


  public:
    
    // Constructor
    DoubleHash(const unsigned int sizeIn = 0) : HashTable<Key, Value>(sizeIn) {}

    ~DoubleHash () {
      // Do nothing
    }
  
    // Rewrite friend operator since friend methods need to be rewritten in
    // derived classes
    friend std::ostream& operator<<( std::ostream& output, const DoubleHash<Key, Value>& theTable ){
      
      output << "Hash Table Size: " << theTable.array.size() << std::endl;
      output << "Hashed Elements: " << theTable.numHash << std::endl;
      
      for(unsigned int iter = 0; iter < theTable.array.size(); iter++){
        
        output << "{" << iter << ": ";
        
        if( theTable.array[iter].state == ACTIVE ){
        
          output << "ACTIVE, ";
        
        }
        else if( theTable.array[iter].state == DELETED ){
        
          output << "DELETED, ";
        
        }
        else{
          
          output << "EMPTY, ";
        }
        
        output << theTable.array[iter].key << ", ";
        
        output << theTable.array[iter].value << "}" << std::endl;
        
      }
      
      return output;
    }

};

#endif
