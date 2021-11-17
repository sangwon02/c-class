#include <stdio.h>

//연습문제 8번
int main_10_9()
{
	char* ptr, note[] = "See you at the snack bar!";
	ptr = note;
	puts(ptr);
	ptr++;
	puts(++ptr);
	note[7] = '!';
	note[8] = '\0';
	puts(note);

	return 0;

}