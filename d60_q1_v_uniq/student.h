#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure

#include <set>

using namespace std;

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  set<T> seen;

  int idx = 0;

  for (int i = 0; i < mSize; ++i) {
    if (seen.find(mData[i]) == seen.end()) {
      seen.insert(mData[i]);
      mData[idx++] = mData[i];
    }
  }
  mSize = idx;
}

#endif
