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
	char move; //���ʤ�V��J
	printf("�C���ާ@�覡:\n�B�ΤW�U���k�Ӳ��ʤ���\nesc��s��\n\n");
	printf("1�B�s�C��\n");
	printf("2�B�~�����\n");
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
			case 72: //�W��
				copyArray(olddata, data);
				annex_up(data);
				if (chackdata(olddata, data) == 1)
				{
					newNum(data, 2);
				}
				
				break;
			case 77: //�k��
				copyArray(olddata, data);
				annex_right(data);
				if (chackdata(olddata, data) == 1)
				{
					newNum(data, 2);
				}
				break;
			case 80: //�U��
				copyArray(olddata, data);
				annex_down(data);
				if (chackdata(olddata, data) == 1)
				{
					newNum(data, 2);
				}
				break;
			case 75: //����
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