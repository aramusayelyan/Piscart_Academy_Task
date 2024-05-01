int o_strlen(const char *s){
	int size = 0;
	while(*(size + s) != 0){
		size++;
	}
	return size;
}
