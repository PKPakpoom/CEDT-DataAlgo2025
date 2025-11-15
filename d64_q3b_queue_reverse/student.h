#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  size_t len = (b - a + 1) / 2;

  for (size_t i = 0; i < len; ++i) {
    size_t idx_a = (a + i + mFront) % mCap;
    size_t idx_b = (b - i + mFront + mCap) % mCap;
    T t = mData[idx_a];
    mData[idx_a] = mData[idx_b];
    mData[idx_b] = t;
  }
}

#endif
