#include<stdio.h>
#include<stdlib.h>

void show(int data[4][4]) {
	printf("\n\t2048");
	for (int i = 0; i < 4; i++) {
		printf("\n|-----|-----|-----|-----|\n|");
		for (int j = 0; j < 4; j++) {
			if (data[i][j] == 0) {
				printf("%5c|", ' ');
			}
			else {
				printf("%3d%2c|", data[i][j],' ');
			}
		}
	}
	printf("\n|-----|-----|-----|-----|\n");
}

void saveFile(int data[4][4]) {
	FILE* f = fopen("2048.dat", "w");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			fprintf(f, "%d ", data[i][j]);
		}
		fprintf(f, "\n");
	}
	fclose(f);
}

void readFile(int data[4][4]) {
	FILE* f = fopen("2048.dat", "r");
	if (f == NULL) {
		printf("\n無遊戲存檔，開始新遊戲\n");
		init(data, 2);
		return;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			fscanf(f, "%d ", &data[i][j]);
		}
		fscanf(f, "\n");
	}
	fclose(f);
}
