#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> vec(mData, mData + std::min(mSize, (size_t)7));
  sort(vec.begin(), vec.end(), mLess);

  return vec[vec.size() - k];
}

#endif
