#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu(void)
{
	printf("---��ӭ������������Ϸ!---\n");
	printf("����1��ʼ��Ϸ������0�˳���\n");
}
void InitBoard(char board[ROW][COL],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void test(char board[ROW][COL], int row, int col)
{
	int input;
	scanf("%d", &input);
	srand((unsigned int)time(NULL));
	while (input==1)
	{
		display_board(board, ROW, COL);
		game(board, ROW, COL);
		menu();
		scanf("%d", &input);
	}
}
int main(void)
{
	char board[ROW][COL] = { '0' };
	menu();
	InitBoard(board,ROW,COL);
	test(board,ROW,COL);
	return 0;
}