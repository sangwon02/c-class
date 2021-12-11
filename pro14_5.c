#include <stdio.h>
#include <math.h>

typedef struct point
{
	int x;
	int y;
} PT;

PT* distance(PT* p0, PT* p1, PT* p2)
{
	int distance1, distance2;
	distance1 = sqrt(pow(p0->x - p1->x, 2) - pow(p0->y - p1->y, 2));
	distance2 = sqrt(pow(p0->x - p2->x, 2) - pow(p0->y - p2->y, 2));

	if (distance1 > distance2)
		return p2;
	else if (distance1 <= distance2)
		return p1;

}

int main()
{
	struct point p0;
	struct point p1;
	struct point p2;

	printf("p0�� x��ǥ��?");
	scanf("%d", &p0.x);
	printf("p0�� y��ǥ��?");
	scanf("%d", &p0.y);

	printf("p1�� x��ǥ��?");
	scanf("%d", &p1.x);
	printf("p1�� y��ǥ��?");
	scanf("%d", &p1.y);

	printf("p2�� x��ǥ��?");
	scanf("%d", &p2.x);
	printf("p2�� y��ǥ��?");
	scanf("%d", &p2.y);

	printf("p0�� �� ����� ��ǥ�� (%d,%d)", distance(&p0, &p1, &p2)->x, distance(&p0, &p1, &p2)->y);


	return 0;
}