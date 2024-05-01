size_t o_strlcpy(char *dest, const char *src, size_t size){
	int sizel = 0;
	while(size != sizel){
		*(sizel + dest) = *(sizel + src);
		sizel++;
	}
	return sizel;
}

