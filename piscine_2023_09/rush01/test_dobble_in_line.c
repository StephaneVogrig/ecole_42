
#include <stdio.h>
#include "checking.c"
#include "int_array.c"

void	print_int_tab(int *array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
		printf("= %d\n", is_dobble_in_column(array, 4));
}

int main(void)
{
	int array[4] = {1,2,3,4};
	print_int_tab(array, 4);
	
	int array2[4] = {2,3,4,2};
	print_int_tab(array2, 4);
	
	int array3[4] = {3,4,1,1};
	print_int_tab(array3, 4);
	
	int array4[4] = {4,1,2,3};
	print_int_tab(array4, 4);
	
	int array5[4] = {4,2,3,1};
	print_int_tab(array5, 4);
	
	int array6[4] = {4,1,2,3};
	print_int_tab(array6, 4);
}
