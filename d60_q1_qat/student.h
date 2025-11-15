#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  if (idx < 0) {
    idx = ((mFront + mSize + idx) % mCap);
  } else {
    idx = (idx + mCap + mFront) % mCap;
  }
  return mData[idx];
}

#endif
