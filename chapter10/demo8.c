#include <stdio.h>



void copy_ptr(double * ptr1, double * ptr2, int numToCopy);



int main(void)
{
	double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target1[3];

	copy_ptr(source, target1, 5);
	printf("target1中的元素分别为：%.1f,%.1f,%.1f \n", target1[0], target1[1], target1[2]);


	return 0;

}


// 指针表示法
void copy_ptr(double * ptr1, double * ptr2, int numToCopy)
{
	int i;
    ptr1 += 2;
	for (i = 0; i < numToCopy; i++)
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}
}



