#include <stdio.h>


void copy_arr(double arr1[], double arr2[], int numToCopy);
void copy_ptr(double * ptr1, double * ptr2, int numToCopy);
void copy_ptrs(double * ptr1, double * ptr2, double * ptr3);


int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(source, target1, 5);
	copy_ptr(source, target2, 5);
	copy_ptrs(target3, source, source+5);

	printf("Soure中的元素分别为：%.1f,%.1f,%.1f,%.1f,%.1f \n", source[0], source[1], source[2], source[3], source[4]);
	printf("target1中的元素分别为：%.1f,%.1f,%.1f,%.1f,%.1f \n", target1[0], target1[1], target1[2], target1[3], target1[4]);
	printf("target2中的元素分别为：%.1f,%.1f,%.1f,%.1f,%.1f \n", target2[0], target2[1], target2[2], target2[3], target2[4]);
	printf("target3中的元素分别为：%.1f,%.1f,%.1f,%.1f,%.1f \n", target3[0], target3[1], target3[2], target3[3], target3[4]);


	return 0;

}

// 用数组表示法对数据进行拷贝
void copy_arr(double arr1[], double arr2[], int numToCopy)
{
	int i;
	for (i = 0; i < numToCopy; i++)
	{
		arr2[i] = arr1[i];
	}

}

// 指针表示法
void copy_ptr(double * ptr1, double * ptr2, int numToCopy)
{
	int i;
	for (i = 0; i < numToCopy; i++)
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}
}


// 第三种表示方法
void copy_ptrs(double * ptr1, double * ptr2, double * ptr3)
{
	while (ptr2 < ptr3)
	{
		*ptr1++ = *ptr2++;
	}
	
}

