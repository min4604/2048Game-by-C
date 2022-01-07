void show(int data[4][4]) {
	printf("\n\t2048");
	for (int i = 0; i < 4; i++) {
		printf("\n|-----|-----|-----|-----|\n|");
		for (int j = 0; j < 4; j++) {
			if (data[i][j] == 0) {
				printf("%5c|", '*');
			}
			else {
				printf("%5d|", data[i][j]);
			}
		}
	}
	printf("\n|-----|-----|-----|-----|\n");
}