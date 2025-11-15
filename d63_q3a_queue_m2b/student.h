#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  size_t pos_idx = (mFront + pos) % mCap;
  size_t last_idx = (mFront + mSize - 1) % mCap;
  T e = mData[pos_idx];

  for (int i = pos_idx; i != last_idx; i = (i + 1) % mCap) {
    size_t from = (i + 1 + mCap) % mCap;
    mData[i] = mData[from];
  }
  mData[last_idx] = e;
}

#endif
