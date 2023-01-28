#include <bits/stdc++.h>
using namespace std;

// type aliases
using ll = long long;
using ull = unsigned long long;
template <typename T> using mat_t = vector<vector<T>>;

#define ONLINE_JUDGE
#define DEBUG(elem) std::cerr << #elem " = " << elem << '\n'
#define DEBUGARR(arr)                                                          \
  {                                                                            \
    std::cerr << #arr " -> ";                                                  \
    for (const auto &x : arr)                                                  \
      std::cerr << setw(3) << x << ' ';                                        \
    std::cerr << '\n';                                                         \
  }
#define DEBUGMAP(map)                                                          \
  {                                                                            \
    std::cerr << #map " -> ";                                                  \
    for (const auto &item : map)                                               \
      std::cerr << item.first << ": " << item.second << '\n';                  \
  }
#define DEBUGMAT(mat)                                                          \
  {                                                                            \
    for (const auto &row : mat)                                                \
      DEBUGARR(row);                                                           \
  }

/** CODE START **/
void solution() {
  string input;
  getline(cin, input);
  stack<int> openers;
  int total = -121;

  for (const char &ch : input) {
    if (ch == '<')
      openers.push(ch);
    else {

    }
  }

  cout << total << '\n';
}
/** CODE END **/

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  long long num_test;
  cin >> num_test;
  while (cin.get() != '\n')
    ;
  while (num_test--)
    solution();
  return 0;
}
