#include <stdio.h>
#include <time.h>
#include <iostream>

void task1()
{
	/*1.*��������, ���������, ������� ��������� ������� ����� �� 6 �������.������������ ������ ������� ����� �� ������ �����.*/
	int A[6][2] = { 0 };
	int month = 10;
	int summ = 0;
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (month==13)
			{
				month = 1;
				A[i][0] = month++;
				A[i][1] =100 +rand() % 10000;
			}
		}
	}
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			int summ = 0;
			summ += A[i][1];
		}
	}
	printf("�����:%d\n", summ);

}

void task2()
{
	int A[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 100;
		printf("������ ������� :%d\n", A[i]);
	}
	printf("\n\n\n");
	for (size_t i = 9; i >0; i--)
	{
		printf("�������� �������:%d\n", A[i]);
	}
}

//3.	*������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, ���������� ��������� �������� �������������(�������� � ����� ���� ������).
void task3()
{
	int A[12][2] = { 0 };
	int max = 0, maxM = 0;
	int min=100000, minM = 0;
	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			A[i][1] = 3400 + rand() % 1000000;
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		for (size_t  j= 0;  j< 2; j++)
		{
			if (max<A[i][1])
			{
			max = A[i][1];
			maxM = i;
			}
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (min > A[i][1])
			{
				min = A[i][1];
				minM = i;
			}
		}
	}
	printf("����� ,� ������� ������� ���� �����������-%d � ������� ��������� %d\n", maxM, max);
	printf("����� ,� ������� ������� ���� ����������-%d � ������� ��������� %d\n", minM, min);
}

void task5()
{
	int A[7] = { 0 };
	int min = 30, max = 0, minM = 0, maxM = 0;
	for (size_t i = 0; i < 7; i++)
	{
		A[i] = 1 + rand() % 29;
		printf("�������� �������:%d\n", A[i]);
		if (A[i] < min)
		{
			min = A[i];
			minM = i;
		}
		if (A[i] >= max)
		{
			max = A[i];
			maxM = i;
		}
	}
	
	printf("������������ �������� %d �� %d �����\n", max, maxM);
	
	printf("����������� �������� %d �� %d �����\n", min, minM);
}

void task6()
{
	const int N = 15;
	int A[N] = {0};
	int summ = 0,pr=1,pr1=1,summ1=0;
	int min = -10, max = 19;
	for (size_t i = 0; i < N; i++)
	{
		A[i] = -10 + rand() % 29;
		printf("�������� �������:%d\n", A[i]);
	}
	for (size_t i = 0; i < N; i++)
	{
		if (A[i]<0)
		{
			summ = summ + A[i];
		}
	}
	printf("����� ������������� ���������:%d\n", summ);
	for (size_t i = 0; i < N; i++)
	{
		if (A[i]<max && A[i]>min)
		{
			pr = pr * A[i];
		}
	}
	printf("������������...%d\n", pr);
	for (size_t i = 0; i < N; i++)
	{
		if (i%2==0)
		{
			pr1 = pr1 * A[i];
		}
	}
	printf("������������ � ������� �������� :%d\n", pr1);
	for (size_t i = 0; i < N; i++)
	{
		if (A[i]>-10&& A[i]<0)
		{
			summ1 = summ1 + A[i];
		}
	}
	printf("������������ ����� ������...%d\n", summ1);
}
void task8()
{
	const int N = 9;
	int A[N] = { 0 },t;
	for (size_t i = 0; i < N; i++)
	{
		A[i] = 1 + rand() % 34;
		printf("�������� ������� :%d\n", A[i]);
	}
	for (size_t i = 0; i < N-1; i++)
	{
		for (size_t j = 0; j < N-i-1; j++)
		{
			if (A[j]>A[j+1])
			{
				t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
			}
		}
	}
	for (size_t i = 0; i < N; i++)
	{
		printf("��������������� ������:%d\n", A[i]);
	}
 }
void task9()
{
	int A[10] = { 0 };
	int flag;
	float summ = 0;
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 2 + rand() % 3;
		printf("���� ������ ����� %d :%d\n", i, A[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("������ ��������� ������ ����� ���������?1/0\n");
		scanf_s("%d", &flag);
		if (flag == 1)
		{
			printf("������� ����� ������:");
			scanf_s("%d", &i);
			printf("������� ������ ����� ���������:");
			scanf_s("%d", &A[i]);
		}while (flag == 1);
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("���� ������ :%d\n", A[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		summ = (float)(summ + A[i]) / 10;
		if (summ >= 10.7)
		{
			printf("� ��� ���� ���������\n");
		}
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("������� ����� ������: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
		case 8:
		{
			task8();
		}
		break;
		case 9:
		{
			task9();
		}
		default:
			break;
		}

		printf("������ ����������?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}