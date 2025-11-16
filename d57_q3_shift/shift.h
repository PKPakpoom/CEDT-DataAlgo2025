void shift(int k) {
	if (mSize == 0) return;

	bool negative = k < 0;
	if (negative) k *= -1;
	k %= mSize;

	if (k == 0) return;
	
	if (negative) k = mSize - k;

	iterator last = begin();
	for (size_t i = 0; i < k; ++i) ++last;
	iterator first = last;

	if (first == begin()) {
		first = end();
	}
	--first;
	
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;
	
	mHeader->prev = first.ptr;
	mHeader->next = last.ptr;

	first.ptr->next = mHeader;
	last.ptr->prev = mHeader;
	
}