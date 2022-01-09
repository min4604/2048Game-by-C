#include<stdio.h>
#include<stdlib.h>
#include"ArrayControler.h"
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
	FILE* f;
	fopen_s(&f,"2048.dll", "w");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			fprintf(f, "%d ", data[i][j]);
		}
		fprintf(f, "\n");
	}
	fclose(f);
}

void readFile(int data[4][4]) {
	FILE*fptr;
	fopen_s( &fptr,"2048.dll", "r");
	if (fptr == NULL) {
		printf("\n無遊戲存檔，開始新遊戲\n");
		init(data, 2);
		return;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			fscanf_s(fptr, "%d ", &data[i][j]);
		}
		fscanf_s(fptr, "\n");
	}
	fclose(fptr);
}
