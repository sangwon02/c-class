#include <stdio.h>	//fputs, fgets 함수를 위한 헤더 파일
#include <stdlib.h>//exit 함수를 위한 헤더 파일

//프로그램 12-12
#define SIZE 5

int main_13_10()
{
	char f_name[20] = "address.txt";
	char info[80];

	FILE* fp = fopen(f_name, "w");//주소를 저장할 파일 열기
	int i;

	if (fp == NULL)	//파일 열기 에러 처리
	{
		printf("파일 열기 에러! \n"); exit(1);
	}

	printf("이름 전화번호 주소 입력 후 엔터키를 누르세요.(%d명) \n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d. ", i + 1);
		gets(info);	//키보드로 한 행씩 입력받는다.    
		fputs(info, fp);//입력받은 문자열을 파일에 저장한다.
		fputs("\n", fp);  //문자열 뒤에 개행 문자를 저장한다.
	}
	fclose(fp);	//파일 닫기

	fp = fopen(f_name, "r");//주소를 저장한 파일 열기
	if (fp == NULL)	//파일 열기 에러 처리
	{
		printf("파일 열기 에러! \n"); exit(1);
	}

	printf("\n>> 주소록 목록 << \n"); exit(1);
	fgets(info, 80, fp);//파일에서 문자열을 읽어 info 문자열에 저장한다
	while (!feof(fp))	//파일의 끝을 지나지 않았다면 반복한다
	{
		printf("%s", info);	//파일에서 읽은 문자열을 모니터에 출력
		fgets(info, 80, fp);
	}
	fclose(fp);					

	return 0;
}
