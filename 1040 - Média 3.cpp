#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{

	float N1, N2, N3, N4, n1, n2 ,n3 ,n4, media, nota_exame, media_exame;
	
	cin >> N1 >> N2 >> N3 >> N4;
	
	n1 = (N1 * 2) / 10;
	
	n2 = (N2 * 3) / 10;
	
	n3 = (N3 * 4) / 10;
	
	n4 = (N4 * 1) / 10;
	
	media = n1 + n2 + n3 + n4;
	printf("Media: %.1f\n", media);
	
	if((media >= 7))
	{
		
		printf("Aluno aprovado.\n");
	

	}
	else if((media < 5))
	{
        
		printf("Aluno reprovado.\n");
		

	}
	else if((media >= 5)&&( media <=6.9))
	{

		printf("Aluno em exame.\n");
		
		cin >> nota_exame;
		media_exame = (nota_exame + media) / 2;
		printf("Nota do exame: %.1f\n", nota_exame);
		
		if(media_exame >= 5)
		{

            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_exame);

		}
		else if(media_exame <= 4.9)
		{

            printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", media_exame);
		}

	}
	
	
	
	
	
	system("pause");
	return 0;
	
	
}
