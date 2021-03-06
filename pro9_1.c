#include <stdio.h>
//프로그램 10-1
int main_9_1()
{
	int var = 100;//int형 변수 var을 선언하면서 값을 100으로 초기화
	int* ptr;     //int형 자료를 저장하는 기억 장소의 주소를 저장할 포인터 변수 ptr 선언

	ptr = &var;     //ptr이 변수 var을 가리키게 함

	//변수명 var을 이용하지 않고 ptr에 저장된 var의 주소를 이용해 변수 var을 참조

	//변수 var에 저장된 값을 직접 참조하여 출력
	printf("변수 var의 값: %d \n", var);

	//ptr을 이용해 var에 저장된 값을 간접적으로 참조하여 출력
	printf("var의 간접 참조 (*ptr) 결과값: %d \n\n", *ptr);


	//변수 var의 주기억장치 주소와 포인터 변수 ptr에 저장된 주소 출력
	printf("변수 var의 주소:%u(%p) \n", &var, &var);
	printf("변수 ptr에 저장된 주소:%u(%p) \n", ptr, ptr);

	return 0;
}
