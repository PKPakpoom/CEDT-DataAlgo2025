#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  for (auto it = pos.rbegin(); it != pos.rend(); ++it) {
    this->erase(this->begin() + *it);
  }
}

#endif
