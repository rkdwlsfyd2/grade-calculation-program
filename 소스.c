#include<stdio.h>

int main()
{

	int exam, Hw, Ad, i = 0, count = 0, result = 0;// Hw = Homework , Ad = Attendance
	float Pt = 0;// Pt = Percentage
	while (i < 10) // i<10 조건을 만족할때까지 반복
	{
		printf("시험 성적을 입력하시오: ");
		scanf_s("%d", &exam);
		printf("과제 성적을 입력하시오: ");
		scanf_s("%d", &Hw);
		printf("출석 기록을 입력하시오: ");
		scanf_s("%d", &Ad);
		if (exam <= 100 && Hw <= 50 && Ad <= 45)
		{
			result = exam + Hw + Ad;
			Pt = (double)(result / 195.0) * 100.0; // 백분율 구하는 공식 & result를 double형으로 형변환

			printf("\n백분율 값은 %.0f 입니다.\n", Pt); // %.0f를 이용하여 소수점 0번째 자리까지 반올림
			if (Ad < 30)
			{
				printf("F학점 입니다.\n\n");
			}
			else if (Pt <= 50)
			{
				printf("C학점 입니다.\n\n");
			}
			else if (Pt <= 60)
			{
				printf("C+학점 입니다.\n\n");
			}
			else if (Pt <= 70)
			{
				printf("B학점 입니다.\n\n");
			}
			else if (Pt <= 80)
			{
				printf("B+학점 입니다.\n\n");
			}
			else if (Pt <= 90)
			{
				printf("A학점 입니다.\n\n");
			}
			else if (Pt <= 100)
			{
				printf("A+학점 입니다.\n\n");
			}
			i++; // if문의 조건이 맞으면 i를 1씩 증가해서 10번 반복
		}
		else if (exam > 100)
		{
			printf("[%d] 시험 성적은 0~100 사이 정수로 입력하세요!\n", i);
			count++;
			if (count == 3) // count 변수를 생성 후 잘못 입력했을 시에 count 값을 ++로 올려서 3번 이상이 되면 exit()로 프로그램 종료
			{
				printf("입력된 값 오류로 프로그램 종료함\n");
				exit(); // 프로그램 종료 함수
			}
		}
		else if (Hw > 51)
		{
			printf("[%d] 과제 성적을 0~50 사이 정수로 입력하세요!\n", i);
			count++;
			if (count == 3)
			{
				printf("입력된 값 오류로 프로그램 종료함\n");
				exit();
			}
		}
		else if (Ad > 45)
		{
			printf("[%d] 출석 기록을 0~45 사이 정수로 입력하세요!\n", i);
			count++;
			if (count == 3)
			{
				printf("입력된 값 오류로 프로그램 종료함\n");
				exit();
			}
		}
	}
	return 0;

}