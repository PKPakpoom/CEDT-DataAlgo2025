void replace(const T& x, list<T>& y) {
	//write your code here
	auto curr_node = begin();
	while (curr_node != end()) {
		if (*curr_node == x) {
			curr_node = erase(curr_node);
			for (auto &e : y) {
				insert(curr_node, e);
			}

		} else {
			curr_node++;
		}
	}

}