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
	char move; //���ʤ�V��J
	printf("�s�C��\n");
	//move = getch();
	init(data,2);
	show(data);
	system("pause");
	return 0;
}