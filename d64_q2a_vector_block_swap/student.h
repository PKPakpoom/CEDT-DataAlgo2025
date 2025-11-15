#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here

  if (m == 0) {
    return false;
  }

  if (a < begin() || a >= end() || b < begin() || b >= end()) {
    return false;
  }
  
  size_t pos_a = a - begin();
  size_t pos_b = b - begin();

  if (pos_a + m > mSize || pos_b + m > mSize) {
    return false;
  }

  size_t left = std::min(pos_a, pos_b);
  size_t right = std::max(pos_a, pos_b);

  if (left + m > right) {
    return false;
  }
  
  for (size_t i = 0; i < m; ++i) {
    std::swap(mData[pos_a + i], mData[pos_b + i]);
  }

  return true;
}

#endif
