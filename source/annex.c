#include<stdio.h>
#include<stdlib.h>
#include"ArrayControler.h"

void squeeze(int data[4])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		if (data[i] != 0)
		{
			data[j] = data[i];
			j++;
		}
	}
	for (; j < 4; j++)
	{
		data[j] = 0;
	}
}

void annex_left(int data[4][4])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		squeeze(data[i]);
		for ( j = 0; j < 3; j++)
		{
			if (data[i][j] == data[i][j + 1])
			{
				data[i][j] = 2 * data[i][j];
				data[i][j + 1] = 0;
				squeeze(data[i]);
			}

		}
	}
}

void annex_right(int data[4][4])
{
	Rotation_matrix(data, 2);
	annex_left(data);
	Rotation_matrix(data, 2);
}

void annex_up(int data[4][4])
{
	Rotation_matrix(data, 3);
	annex_left(data);
	Rotation_matrix(data, 1);
}

void annex_down(int data[4][4])
{
	Rotation_matrix(data, 1);
	annex_left(data);
	Rotation_matrix(data, 3);
}

void Rotation_matrix(int data[4][4], int count)
{
	int temp[4][4];
	copyArray(temp, data);
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 4; b++)
		{
			data[a][b] = temp[3 - b][a];
		}
	}
	if (count>1)
	{
		Rotation_matrix(data, count - 1);
	}
}