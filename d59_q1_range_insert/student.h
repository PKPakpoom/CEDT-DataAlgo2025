#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  size_t len = last - first;
  size_t p_idx = position - begin();

  ensureCapacity(mSize + len);

  
  for (size_t i = mSize; i > p_idx; --i) {
    mData[i + len - 1] = mData[i - 1];
  }
  
  int i = 0;
  for (iterator it = first; it != last; ++it) {
    mData[p_idx + i] = *it;
    ++i;
  }
  
  mSize += len;

}

#endif
