/************
 * File: Pacific.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This files contains the function definitions
 * used to solve the Pacific Atlantic problem
 *
 ************/

#ifndef PACIFIC
#define PACIFIC

#include <iostream>
#include <queue>
#include <vector>
#include <utility>

#define PAIR std::pair
#define VECTOR std::vector
#define QUEUE std::queue
#define COUT std::cout
#define ENDL std::endl

VECTOR<PAIR<int,int>> dir = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

void bfs(QUEUE<PAIR<int,int>>& q, VECTOR<VECTOR<bool>>& ocean, const VECTOR<VECTOR<int>>& matrix, int r, int c) {
  // Check for empty queue
  while (!q.empty())
  {
    // Create an iterator for the queue
    auto& cur = q.front();
    // Access the elements of the pair
    int i = cur.first;
    int j = cur.second;
    q.pop();
    // Check each direction
    for (const PAIR<int, int>& p : dir) {
      int x = i + p.first;
      int y = j + p.second;
      if (x < 0 || x >= r || y < 0 || y >= c) {
        continue;
      }
      // Push to queue if it is a valid number/route in specific ocean
      if (ocean[x][y] == false && matrix[x][y] >= matrix[i][j]) {
                    ocean[x][y] = true;
                    q.push({x,y});
      }
    }
  }
}

VECTOR<VECTOR<int>> pacificAtlantic(const VECTOR<VECTOR<int>>& matrix) {
  // Check if the matrix is empty
  if (matrix.empty()) {
    return {};
  }

  // Create queue and gather row/col data
  int r = (int)matrix.size();
  int c = (int)matrix[0].size();
  QUEUE<PAIR<int,int>> q;

  // Create vector of vectors of bools to store if pairs are valid
  VECTOR<VECTOR<bool>> pacific(r, VECTOR<bool>(c, false));
  // Check edges of matrix
  for (int i = 0; i < c; ++i) {
    pacific[0][i] = true;
    q.push({0, i});
  }
  for (int i = 1; i < r; ++i) {
    pacific[i][0] = true;
    q.push({i, 0});
  }
  // Perform bfs to check for valid values
  bfs(q, pacific, matrix, r, c);

  // Create vector of vectors of bools to store if pairs are valid
  VECTOR<VECTOR<bool>> atlantic(r, VECTOR<bool>(c, false));
  // Check edges of matrix
  for (int i = 0; i < c; ++i) {
    atlantic[r - 1][i] = true;
    q.push({r - 1, i});
  }
  for (int i = 0; i < r - 1; ++i) {
    atlantic[i][c - 1] = true;
    q.push({i, c - 1});
  }
  // Perform bfs to check for valid values
  bfs(q, atlantic, matrix, r, c);

  // Create vector of vectors to hold final results
  VECTOR<VECTOR<int>> pairs;
  for (int i = 0; i < r; ++ i) {
    for (int j = 0; j < c; ++ j) {
      // Check if route is valid to both oceans
      if (pacific[i][j] && atlantic[i][j]) {
        pairs.push_back(VECTOR<int>{i, j});
      }
    }
  }
 return pairs;
}

#endif
