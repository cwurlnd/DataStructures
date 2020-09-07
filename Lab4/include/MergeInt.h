/*************
 * File: MergeInt.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This files contains the function definitions
 * used to merge appropriate intervals
 ************/

#ifndef LAB4
#define LAB4

#include <iostream> 
#include <vector>
#include <algorithm>

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

// Function to print the intervals
template< class T >
void printVecVec( const VECTOR< VECTOR<T> >& printVec ){ 
  COUT << "{";
  
  // Loop through whole set of intervals
  for(long unsigned int iter = 0; iter < printVec.size(); iter++){    
    COUT << " { ";    
    // Loop through each interval
    for(long unsigned int jter = 0; jter < printVec.at(iter).size(); jter++){    
      // Print the interval data
      COUT << printVec.at(iter).at(jter) << " ";   
    }
    COUT << "} ";
  }
  COUT << "}" << ENDL ;
}

// Function to use with sort method
bool cmp(VECTOR<int> a, VECTOR<int> b) {
  return a[0]<b[0];  
}

// Function to return the max of two values
int max( int& value1, int& value2) { 
  return (value1 > value2) ? value1 : value2;
      
}

// Function to return the min of two values
int min( int& value1, int& value2) {    
  return (value1 < value2) ? value1 : value2;    
}

// Function to merge the intervals
VECTOR<VECTOR<int>> merge(VECTOR<VECTOR<int>>& intervals) {
  VECTOR<VECTOR<int>> solution;

  // Sort the intervals
  std::sort(intervals.begin(),intervals.end(), cmp);

  // Insert the first interval
  solution.push_back(intervals[0]);

  long unsigned int index = 1;

  while(index < intervals.size()) {
    long unsigned int last = solution.size()-1;

    // Check if the second number in interval is less than first index of other
    if(max(solution[last][0],solution[last][1]) < min(intervals[index][0],intervals[index][1])){
      solution.push_back(intervals[index]);
    } 

    else {
      // Merge the two intervals
      solution[last][0] = min(solution[last][0], intervals[index][0]);
      solution[last][1] = max(solution[last][1], intervals[index][1]);
    }   
    index++;
  }
  return solution;
} 

#endif
