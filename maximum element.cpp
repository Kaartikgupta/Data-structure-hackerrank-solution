#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {

    	long stack[100000];
		int queryType = 0;
		int n = 0;
		long top = -1;
		long iterator = 0;
		long number = 0;
		long max = 0 ;

		scanf("%d", &n);

		while (n > 0)
		{
			//scan query type
			scanf("%d", &queryType);
			//do stack operations
			switch (queryType)
			{
			case 1:
				//push
				scanf("%ld", &number);
				if (number > max)
					max = number;
				stack[++top] = number;
				break;
			case 2:
				//delete
				if (stack[top] == max)
				{
					top--;
					
					max = 0;
					iterator = top;
					while (iterator > -1)
					{
						max = stack[iterator] > max ? stack[iterator] : max;
						iterator--;
					}
				}
				else
					top--;
				break;
			case 3:
				//print maximum element
				printf("%ld\n", max);
				break;
			}
			n--;
		}
    return 0;
}
