#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"ArrayControler.h"
#include"show.h"
#include"annex.h"
#define SIZE 4

int data[SIZE][SIZE];
int olddata[SIZE][SIZE];
int main(void)
{
	char move; //移動方向輸入
	printf("遊戲操作方式:\n運用上下左右來移動介面\nesc鍵存檔\n\n");
	printf("1、新遊戲\n");
	printf("2、繼續游戲\n");
	move = _getch();
	if (move == '1')
	{
		init(data, 2);
	}
	else
	{
		readFile(data);
	}
	
	while (1)
	{
		show(data);
		move =_getch();
		switch (move)
		{
			case 72: //上鍵
				copyArray(olddata, data);
				annex_up(data);
				if (chackdata(olddata, data) == 1)
				{
					newNum(data, 2);
				}
				
				break;
			case 77: //右鍵
				copyArray(olddata, data);
				annex_right(data);
				if (chackdata(olddata, data) == 1)
				{
					newNum(data, 2);
				}
				break;
			case 80: //下鍵
				copyArray(olddata, data);
				annex_down(data);
				if (chackdata(olddata, data) == 1)
				{
					newNum(data, 2);
				}
				break;
			case 75: //左鍵
				copyArray(olddata, data);
				annex_left(data);
				if (chackdata(olddata, data) == 1)
				{
					newNum(data, 2);
				}
				break;
			case 27: //esc
				saveFile(data);
				return 0;
				break;

		}
		system("cls");
	}
	
	system("pause");
	return 0;
}