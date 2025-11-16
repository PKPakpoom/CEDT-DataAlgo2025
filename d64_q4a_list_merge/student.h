#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for (CP::list<T> &l : ls) {
    mHeader->prev->next = l.begin().ptr;
    l.begin().ptr->prev = mHeader->prev;

    mHeader->prev = l.end().ptr->prev;
    l.end().ptr->prev->next = mHeader;

    l.mHeader->next = l.mHeader;
    l.mHeader->prev = l.mHeader;
    mSize += l.mSize;
    l.mSize = 0;

  }

}

#endif
