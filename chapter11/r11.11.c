char* findR(const char* st) {
	char* find = NULL;

	if (st) {
		find = strchr(st, '\n');
		if (find)
			return find;
		else
			while (getchar() != '\n')
				continue;
	}
	return find;
}