#include<stdio.h>

int main()
{

	int exam, Hw, Ad, i = 0, count = 0, result = 0;// Hw = Homework , Ad = Attendance
	float Pt = 0;// Pt = Percentage
	while (i < 10) // i<10 ������ �����Ҷ����� �ݺ�
	{
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf_s("%d", &exam);
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf_s("%d", &Hw);
		printf("�⼮ ����� �Է��Ͻÿ�: ");
		scanf_s("%d", &Ad);
		if (exam <= 100 && Hw <= 50 && Ad <= 45)
		{
			result = exam + Hw + Ad;
			Pt = (double)(result / 195.0) * 100.0; // ����� ���ϴ� ���� & result�� double������ ����ȯ

			printf("\n����� ���� %.0f �Դϴ�.\n", Pt); // %.0f�� �̿��Ͽ� �Ҽ��� 0��° �ڸ����� �ݿø�
			if (Ad < 30)
			{
				printf("F���� �Դϴ�.\n\n");
			}
			else if (Pt <= 50)
			{
				printf("C���� �Դϴ�.\n\n");
			}
			else if (Pt <= 60)
			{
				printf("C+���� �Դϴ�.\n\n");
			}
			else if (Pt <= 70)
			{
				printf("B���� �Դϴ�.\n\n");
			}
			else if (Pt <= 80)
			{
				printf("B+���� �Դϴ�.\n\n");
			}
			else if (Pt <= 90)
			{
				printf("A���� �Դϴ�.\n\n");
			}
			else if (Pt <= 100)
			{
				printf("A+���� �Դϴ�.\n\n");
			}
			i++; // if���� ������ ������ i�� 1�� �����ؼ� 10�� �ݺ�
		}
		else if (exam > 100)
		{
			printf("[%d] ���� ������ 0~100 ���� ������ �Է��ϼ���!\n", i);
			count++;
			if (count == 3) // count ������ ���� �� �߸� �Է����� �ÿ� count ���� ++�� �÷��� 3�� �̻��� �Ǹ� exit()�� ���α׷� ����
			{
				printf("�Էµ� �� ������ ���α׷� ������\n");
				exit(); // ���α׷� ���� �Լ�
			}
		}
		else if (Hw > 51)
		{
			printf("[%d] ���� ������ 0~50 ���� ������ �Է��ϼ���!\n", i);
			count++;
			if (count == 3)
			{
				printf("�Էµ� �� ������ ���α׷� ������\n");
				exit();
			}
		}
		else if (Ad > 45)
		{
			printf("[%d] �⼮ ����� 0~45 ���� ������ �Է��ϼ���!\n", i);
			count++;
			if (count == 3)
			{
				printf("�Էµ� �� ������ ���α׷� ������\n");
				exit();
			}
		}
	}
	return 0;

}