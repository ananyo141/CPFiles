#include "leetcode.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  using ll = long long;
  template <typename T> using mat_t = vector<vector<T>>;

  enum { X = 0, Y = 1 };

public:
  int maxPoints(const vector<vector<int>> &points) {
    // Find the slope with maximum points
    // For every point, find the slope with other points
    // increase the slope count
    // return the point count of the slope with max number of points
    int maxSlopePoints = 1;
    double slope;
    for (int i = 0; i < points.size(); i++) {
      unordered_map<double, int> slopeMap;
      for (int j = i + 1; j < points.size(); j++) {
        // slope formula (y2-y1) / (x2-x1)
        double divisor = (points[j][X] - points[i][X]);
        slope = divisor ? (points[j][Y] - points[i][Y]) / divisor : INT_MIN;
        slopeMap[slope]++;
        maxSlopePoints = max(maxSlopePoints, slopeMap[slope] + 1);
      }
    }
    return maxSlopePoints;
  }
};

int main() {
  cerr << boolalpha;

  auto s = Solution();
  mat_t<int> inp = {{0, 0}, {4, 5}, {7, 8}, {8, 9}, {5, 6}, {3, 4}, {1, 1}};
  DEBUG(s.maxPoints(inp));

  return 0;
}
