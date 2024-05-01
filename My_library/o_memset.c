void o_memset(void *s, int c, size_t n){
	int size = 0;
	while(size != n){
		*((char *)s + size) = c;
		size++;
	}
}
