// Given an array of integers, every element appears twice
// except for one. Find that single one.
//
// Your algorithm should have a linear runtime complexity.
// Could you implement it without using extra memory?
//
class Solution {
public:
  int singleNumber(int A[], int n) {
#if 0
    while (--n > 0) {
      A[0] ^= A[n];
    }
#else
    for (int i = 0; i < n; ++i) {
      A[0] ^= A[i];
    }
#endif
    return A[0];
  }
};
