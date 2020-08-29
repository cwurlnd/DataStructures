/****************
 * File: fundamental.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the tests for
 * the Quick Sort application
 ***************/

#include "../include/quick.h"

int main() {
  std::srand(unsigned(std::time(0)));
  // Test 1
  COUT << "-----------------------------" << ENDL;
  std::vector<char> ex1{'T', 'H', 'E', 'C', 'O', 'R', 'O', 'N', 'A', 'V', 'I', 'R', 'U', 'S', 'S', 'U', 'C', 'K', 'S'};
  COUT << "First Test: " << ENDL;
  COUT << "Inital is: ";
  printArray(ex1);
  COUT << ENDL;
  // Shuffle the array for quick sort
  std::random_shuffle(ex1.begin(), ex1.end());
  sort(ex1, 0, (int)ex1.size() - 1);
  COUT << "Final is: ";
  printArray(ex1);
  COUT << ENDL;

  // Test 2
  COUT << "-----------------------------" << ENDL;
  std::vector<int> ex2{22, 13, 33, 44, -10, 55, 88, 27};
  COUT << "Second Test: " << ENDL;
  COUT << "Inital is: ";
  printArray(ex2);
  COUT << ENDL;
  // Shuffle the array for quick sort
  std::random_shuffle(ex2.begin(), ex2.end());
  sort(ex2, 0, (int)ex2.size() - 1);
  COUT << "Final is: ";
  printArray(ex2);
  COUT << ENDL;

  // Test 3
  COUT << "-----------------------------" << ENDL;
  std::vector<int> ex3{14, 99, 42, 77, 2, 66, 1, 8, 44};
  COUT << "Third Test: " << ENDL;
  COUT << "Inital is: ";
  printArray(ex3);
  COUT << ENDL;
  // Shuffle the array for quick sort
  std::random_shuffle(ex3.begin(), ex3.end());
  sort(ex3, 0, (int)ex3.size() - 1);
  COUT << "Final is: ";
  printArray(ex3);
  COUT << ENDL;

  // Test 4
  COUT << "-----------------------------" << ENDL;
  std::vector<char> ex4{'N', 'o', 't', 'r', 'e', ' ', 'D', 'a', 'm', 'e'};
  COUT << "Fourth Test: " << ENDL;
  COUT << "Inital is: ";
  printArray(ex4);
  COUT << ENDL;
  // Shuffle the array for quick sort
  std::random_shuffle(ex4.begin(), ex4.end());
  sort(ex4, 0, (int)ex4.size() - 1);
  COUT << "Final is: ";
  printArray(ex4);
  COUT << ENDL;

  // Test 5
  COUT << "-----------------------------" << ENDL;
  std::vector<std::string> ex5{"Data", "Structures", "Creativity", "Challenge", "2"};
  COUT << "Fifth Test: " << ENDL;
  COUT << "Inital is: ";
  printArray(ex5);
  COUT << ENDL;
  // Shuffle the array for quick sort
  std::random_shuffle(ex5.begin(), ex5.end());
  sort(ex5, 0, (int)ex5.size() - 1);
  COUT << "Final is: ";
  printArray(ex5);
  COUT << ENDL;
}
