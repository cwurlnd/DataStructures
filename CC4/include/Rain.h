/************
 * File: Rain.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This files contains the function definitions
 * used to solve the Trapping Rain Water problem
 * Referred to the following source:
 * https://www.geeksforgeeks.org/trapping-rain-water/
 ************/

#ifndef RAIN
#define RAIN

#include <iostream>
#include <stack>

#define COUT std::cout
#define ENDL std::endl
#define STACK std::stack

int maxWater(int height[], int numBars) {
  // Stack to store bars
  STACK <int> st;

  // Stores how much water has been collected
  int water = 0;

  // Loop through the bars
  for(int i = 0; i < numBars; i++) {
    // Check for empty stack and top of stack height is less than current height
    while ((!st.empty()) &&  (height[st.top()] < height[i])) {
      // Pop top height from stack
      int pop_height = height[st.top()];
      st.pop();

      // Check again if after the pop the stack is empty
      if (st.empty()) {
        break;
      }

      // Find difference between left and right of top of stack
      int distance = i - st.top() - 1;

      int currMin = 0;
      if (height[st.top()] < height[i]) {
        currMin = height[st.top()];
      }
      else {
        currMin = height[i];
      }

      // Calculate the min height
      int min_height = currMin - pop_height;

      // Amount of water added is min height times the distance calculated above
      water += distance * min_height;
    } 
    // Stack empty or height <= top, then push i to stack
    st.push(i);
  }
  return water;
}

#endif
