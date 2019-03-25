#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include<math.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;
int nomeDaFuncao(int n1, int n2)
{
	while(n2 != 0)
	{
		int total = n1 % n2;
		n1 = n2;
		n2 = total;
	}
	return n1;
}

int main(int argc, char *argv[])
{
 int N, X1, X2, Y1, Y2, num1, num2, total, snum1, snum2;
	string sinal, lixo;
	scanf("%d", &N);

	for(int i=0; i<N; i++)
	{

		cin >> X1 >> lixo >> Y1 >> sinal >> X2 >> lixo >> Y2;

		if(sinal == "+")
		{

			num1 = (X1*Y2 + X2*Y1);
			num2 = (Y1*Y2);

		}

        else if(sinal == "-")
		{

			num1 = (X1*Y2 - X2*Y1);
			num2 = (Y1*Y2);

		}

		else if(sinal == "*")
		{

			num1 = (X1*X2);
			num2 = (Y1*Y2);

		}

		else
		{

			num1 = (X1*Y2);
			num2 = (X2*Y1);


		}

		int fnum1 = num1;
		int fnum2 = num2;
		
		int mdc = nomeDaFuncao(fnum1, fnum2);
		
		fnum1 = fnum1 / mdc;
		fnum2 = fnum2 / mdc;
		
		if(fnum2 < 0)
	    {
			fnum1 = fnum1 * (-1);
			fnum2 = fnum2 * (-1);
		}
/*
		if((num1 > num2 && num1%num2 == 1) || (num1 < num2 && num2%num1 == 1))
		{

            printf("%d/%d = %d/%d\n", num1, num2, num1, num2);

		}
		else
		{
			while(true)
			{

				if(fnum1 < 0) fnum1 = fnum1 * -1;
				if(fnum2 < 0) fnum2 = fnum2 * -1;


				if(num1 > num2)
				{
                	if(num1%num2 == 0)
					{
						total = fnum2;
						break;
					}
				else
					total = nomeDaFuncao(fnum1, fnum2)

				}

				else if(num1 < num2)
				{
					if(num2%num1 == 0)
					{
						total = fnum1;
						break;
					}
					else
					{
		            	total = fnum2 % fnum1;
						if(total != 0)
						{
							fnum2 = fnum1;
							fnum1 = total;
						}
						else
						{
		   					total = fnum1;
							break;
						}
					}

				}
			}
			snum1 = num1 / total;
	  	 	snum2 = num2 / total;
*/
			printf("%d/%d = %d/%d\n", num1, num2, fnum1, fnum2);
		//}
	}
	system("pause");
	return 0;
}
