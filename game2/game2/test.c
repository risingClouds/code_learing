#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void game()
{
	char mine[ROWS][COLS] ;
	char show[ROWS][COLS];
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	printf("\n");
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ��ͼ
	//display(mine, ROW, COL);
	display(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL, 10);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void menu(){
	printf("---------------------\n");
	printf("---1.play---0.exit---\n");
}
int main(void)
{
	int option;
	srand((unsigned int)time(NULL));
	do
	{	
		menu();
		printf("��ѡ��1 �� 0:>");
		scanf("%d", &option);
		switch (option)
		{
			case 1:game(); break;
			case 0:printf("�˳���Ϸ\n"); break;
			default:printf("������������������\n"); break;
		}
	} while (option);
	return 0;
}