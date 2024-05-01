size_t o_strlcat(char *dest, const char *src, size_t size){
	int sizel = 0;
	while(*(sizel + src) != 0){
		*(size + dest) = *(sizel + src);
		sizel++;
	}
	return (size + sizel);
}
