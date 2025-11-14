#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here

  ensureCapacity(mSize + data.size());
  std::sort(data.begin(), data.end(), [](const std::pair<int, T> &a, const std::pair<int, T> &b) {
    return a.first < b.first;
  });

  int i = 0;
  for (auto d : data) {
    insert(begin() + d.first + i++, d.second);
  }
}

#endif
