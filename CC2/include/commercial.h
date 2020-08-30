/****************
 * File: commercial.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This files contains the function declarations for
 * the commercial computing application
 ***************/

#ifndef COM
#define COM

#include "quick.h"
#include <ctime>

#define CIN std::cin
#define CERR std::cerr

std::vector<int> commercialInt (char input) {
  std::srand(unsigned(std::time(0)));
  int randNum;
  std::vector<int> data;
 
  // Vector containing 30 random zip codes
  std::vector<int> zips{10101, 12866, 23384, 43289, 34214, 53283, 33241, 18254, 61237, 67812, 78943, 73218, 21395, 64393, 71038, 95842, 82304, 81086, 94024, 85009, 83311, 94034, 12369, 95324, 64582, 23855, 85494, 94589, 84374, 62347};

  // Vector containing 30 random phone numbers
  std::vector<int> phones{7565332, 5186785, 2764366, 9075361, 5634933, 1367067, 2416316, 1628232, 6510700, 1324017, 8046374, 2817499, 9780427, 2898398, 7522103, 8187679, 9977565, 1720674, 3266408, 4530687, 7492093, 5270760, 6939595, 4590027, 8829215, 7865435, 3544022, 3209737, 8788730, 8758550};

  // Randomly assign 10 values to a vector 
  for (int i = 0; i < 10; ++i) {
    randNum = (rand() % 29) + 0;
    if (input == 'z') {
      data.push_back(zips[randNum]);
    }
    else if (input == 'p') {
      data.push_back(phones[randNum]);
    }
  }

  return data;
}


std::vector<std::string> commercialString (char input) {
  std::srand((unsigned)std::time(0));
  int randNum;
  std::vector<std::string> data;

  // Vector containing 30 random streets
  std::vector<std::string> streets{"Creekside", "Railroad", "Park", "Hillcrest", "Center", "River", "Evergreen", "Vine", "Lake", "Canal", "Edgewood", "Bayberry", "Durham", "Somerset", "West", "North", "Mill", "Fourth", "Warren", "Circular", "Cherry", "James", "Manor", "Eighth", "Division", "Valley", "Victoria", "Spring", "Third", "Maple"};

  // Vector containing 30 random names
  std::vector<std::string> names{"Darrel", "Lolita", "Jordan", "Ralph", "Molly", "Barton", "Brett", "Seth", "Deloris", "Jeanine", "Aaron", "Dee", "Cecelia", "Bernadine", "Isreal", "Jimmie", "Tracey", "Dwayne", "Carroll", "Stanton", "Josefina", "Alexandria", "Gerard", "Norberto", "Hope", "Cliff", "Edna", "Shirley", "Erick", "Dustin"};

  // Randomly assign 10 values to a vector 
  for (int i = 0; i < 10; ++i) {
    randNum = (rand() % 29) + 0;
    if (input == 's') {
      data.push_back(streets[randNum]);
    }
    else if (input == 'n') {
      data.push_back(names[randNum]);
    }
  }

  return data;
}

void doWork() {
  std::srand(unsigned(std::time(0)));
  char input;

  COUT << "Choose a following commercial data type to use:" << ENDL;
  COUT << "Zip code [z], Phone number [p], Street [s], Name [n]" << ENDL;
  CIN >> input;
  while (input != 'z' && input != 'p' && input != 's' && input != 'n') {
    COUT << "Choose a following commercial data type to use:" << ENDL;
    COUT << "Zip code [z], Phone number [p], Street [s], Name [n]" << ENDL;
    CIN >> input;
    if (input != 'z' && input != 'p' && input != 's' && input != 'n') {
      COUT << "Not a valid input." << ENDL;
    }
  }

  // Filter results based on what they want to see
  if (input == 'z') {
    // Create the vector
    std::vector<int>ex1 = commercialInt('z');
    COUT << "Before sort: ";
    printArray(ex1);
    COUT << ENDL;
    // Use quicksort
    sort(ex1, 0, (int)ex1.size() - 1);
    COUT << "After sort: ";
    printArray(ex1);
  }
  else if (input == 'p') {
    std::vector<int>ex1 = commercialInt('p');
    COUT << "Before sort: ";
    printArray(ex1);
    COUT << ENDL;
    sort(ex1, 0, (int)ex1.size() - 1);
    COUT << "After sort: ";
    printArray(ex1);
  }
  else if (input == 's') {
    std::vector<std::string>ex1 =commercialString('s');
    COUT << "Before sort: ";
    printArray(ex1);
    COUT << ENDL;
    sort(ex1, 0, (int)ex1.size() - 1);
    COUT << "After sort: ";
    printArray(ex1);
  }
  else {
    std::vector<std::string>ex1 = commercialString('n');
    COUT << "Before sort: ";
    printArray(ex1);
    COUT << ENDL;
    sort(ex1, 0, (int)ex1.size() - 1);
    COUT << "After sort: ";
    printArray(ex1);
  }
  COUT << ENDL;
  COUT << ENDL;
}
  
#endif
