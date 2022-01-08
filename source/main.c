#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"ArrayControler.h"
#include"show.h"
#include"annex.h"
#define SIZE 4

int data[SIZE][SIZE];

int main(void)
{
	char move; //移動方向輸入
	printf("新遊戲\n");
	//move = getch();
	init(data,2);
	while (1)
	{
		show(data);
		move =_getch();
		switch (move)
		{
			case 72: //上鍵
				break;
			case 77: //右鍵
				break;
			case 80: //下鍵				
				break;
			case 75: //左鍵
				annex_left(data);
				newNum(data, 2);
				break;
			case 27: //esc
				break;

		}
		system("cls");
	}
	
	system("pause");
	return 0;
}