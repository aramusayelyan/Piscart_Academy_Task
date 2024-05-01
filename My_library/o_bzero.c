void o_bzero(void *s, size_t n){
	int size = 0;
	while(size != n){
		*((char *)s + size) = 0;
		size++;
	}
}
