char *o_strchr(const char *s, int c){
	int size = 0;
	int index =0;
	while(*(size + s) != 0){
		size++;
	}

	for(int size1 = 0; size != size1; size++){
		if(*(size1 + s) == c){
			intex = size1;
		}
	}
	return (char *)(index + s);
}
