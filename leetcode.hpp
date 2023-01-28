// leetcode.hpp -- helper declarations for leetcode

#ifndef LEETCODE_HPP_
#define LEETCODE_HPP_

#include <vector>

template <typename T> using mat_t = std::vector<std::vector<T>>;

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
#define DEBUGLIST(head)                                                        \
  {                                                                            \
    for (const ListNode *ptr = head; ptr; ptr = ptr->next)                     \
      std::cout << ptr->val << ' ';                                            \
    std::cout.put('\n');                                                       \
  }

/* Definition for singly-linked list. */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/* Definition for a binary tree node. */
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

/* Definition for a Node. */
class Node {
public:
  int val;
  Node *left;
  Node *right;
  Node *next;
  Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}
  Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}
  Node(int _val, Node *_left, Node *_right, Node *_next)
      : val(_val), left(_left), right(_right), next(_next) {}
};

template <typename T>
ListNode *toList(const T &list) {
  // build a linked list
  ListNode *head = nullptr, **headptr = &head;
  for (const auto &i : list) {
    *headptr = new ListNode(i);
    headptr = &(*headptr)->next;
  }
  return head;
}

#endif // for #ifndef LEETCODE_HPP_
