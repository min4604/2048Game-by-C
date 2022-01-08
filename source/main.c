#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"ArrayControler.h"
#include"show.h"
#define SIZE 4

int data[SIZE][SIZE];

int main(void)
{
	char move; //移動方向輸入
	printf("新遊戲\n");
	//move = getch();
	init(data,2);
	show(data);
	system("pause");
	return 0;
}