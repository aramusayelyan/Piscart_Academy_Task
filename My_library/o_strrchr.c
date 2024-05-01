char *o_strrchr(const char *s, int c){
	int size = 0;
	while(*(size + s) != 0){
		size++;
	}

	for(int size1 = 0; size != size1; size++){
		if(*(size1 + s) == c){
			return (char *)(size1 + s);
		}
	}
	return NULL;

}
