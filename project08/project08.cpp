#include <stdio.h>
#define COUNT	5		// 메크로 상수
int main()
{
	/*
	
	*****
	*****
	*****
	*****
	*****
	
	*/
	const int NUMBE = 5;	// 상수: 값을 변경할 수 없음



	// printf("*****"); (X)
	//printf("*");(O)

	int i = 0;
	while (i < COUNT)
	{
		int j = 0;
		while (j < COUNT)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}



	return 0;

}


