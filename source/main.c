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
	char move; //���ʤ�V��J
	printf("�s�C��\n");
	//move = getch();
	init(data,2);
	while (1)
	{
		show(data);
		move =_getch();
		switch (move)
		{
			case 72: //�W��
				break;
			case 77: //�k��
				break;
			case 80: //�U��				
				break;
			case 75: //����
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