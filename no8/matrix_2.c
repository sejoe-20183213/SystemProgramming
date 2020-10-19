#include <stdio.h>

int main(void)
{

int row1, row2, col1, col2;
int i, j;

printf("Enter first row : ");
scanf("%d", &row1);
printf("Enter first column : ");
scanf("%d", &col1);

int **m = malloc(sizeof(int *) * row1);   // 이중 포인터에 (int 포인터 크기 * row)만큼
                                             // 동적 메모리 할당. 배열의 세로
    for (int i = 0; i < row1; i++)            // 세로 크기만큼 반복
    {
        m[i] = malloc(sizeof(int) * col1);    // (int의 크기 * col)만큼 동적 메모리 할당. 배열의 가로
    }

    for (int i = 0; i < row1; i++)    // 세로 크기만큼 반복
    {
        for (int j = 0; j < col1; j++)    // 가로 크기만큼 반복
        {
            m[i][j] = i + j;             // 2차원 배열의 각 요소에 i + j 값을 할당
        }
    }

  for (i = 0; i < row1; i++)
  {
   for(j=0; j<col1; j++)
    scanf("%d", &m[i][j]);
  }
///////////////////////////////////////////////////////////////////////////////////

printf("Enter second row : ");
scanf("%d", &row2);
printf("Enter second column : ");
scanf("%d", &col2);

int **m2 = malloc(sizeof(int *) * row2);   // 이중 포인터에 (int 포인터 크기 * row)만큼
                                             // 동적 메모리 할당. 배열의 세로

    for (int i = 0; i < row2; i++)            // 세로 크기만큼 반복
    {
        m2[i] = malloc(sizeof(int) * col2);    // (int의 크기 * col)만큼 동적 메모리 할당. 배열의 가로
    }

    for (int i = 0; i < row2; i++)    // 세로 크기만큼 반복
    {
        for (int j = 0; j < col2; j++)    // 가로 크기만큼 반복
        {
            m2[i][j] = i + j;             // 2차원 배열의 각 요소에 i + j 값을 할당
        }
    }


  for (i = 0; i < row2; i++)
  {
   for (j = 0; j<col2; j++)
    scanf("%d", &m2[i][j]);
  }
 
//////////////////////////////////////////////////////////////////////////
  if (row1 == row2 && col1 == col2)
  {
printf("RESULT\n");
   for (i = 0; i < row1; i++)
   {
    for (j = 0; j < col1; j++)
    {
     printf("%d", m[i][j] + m2[i][j]);

     if (j != col1 -1)
      printf(" ");
    }
    printf("\n");
   }
  }
  else
   printf("Impossible\n");
/////////////////////////////////////////////////////////////////////////////
for (int i = 0; i < row1; i++)    // 세로 크기만큼 반복
    {
        free(m[i]);                  // 2차원 배열의 가로 공간 메모리 해제
    }

    free(m);    // 2차원 배열의 세로 공간 메모리 해제
printf("First Matrix Memory Free\n");
for (int i = 0; i < row2; i++)    // 세로 크기만큼 반복
    {
        free(m2[i]);                  // 2차원 배열의 가로 공간 메모리 해제
    }

    free(m2);    // 2차원 배열의 세로 공간 메모리 해제
printf("Second Matrix Memory Free\n");


 return 0;
} 

