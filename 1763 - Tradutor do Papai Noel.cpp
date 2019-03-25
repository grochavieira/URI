#include <iostream>
#include <list>
#include <map>
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

int main() {

  	string T;

	
	while(1)
	{
        getline(cin, T);
 		if(!cin)
 		{
			break;
 		}
		
		if(T == "brasil") printf("Feliz Natal!\n");
		else if(T == "alemanha") printf("Frohliche Weihnachten!\n");
		else if(T == "austria") printf("Frohe Weihnacht!\n");
		else if(T == "coreia") printf("Chuk Sung Tan!\n");
		else if(T == "espanha") printf("Feliz Navidad!\n");
		else if(T == "grecia") printf("Kala Christougena!\n");
		else if(T == "estados-unidos") printf("Merry Christmas!\n");
		else if(T == "inglaterra") printf("Merry Christmas!\n");
		else if(T == "australia") printf("Merry Christmas!\n");
		else if(T == "portugal") printf("Feliz Natal!\n");
		else if(T == "suecia") printf("God Jul!\n");
		else if(T == "turquia") printf("Mutlu Noeller\n");
		else if(T == "argentina") printf("Feliz Navidad!\n");
		else if(T == "chile") printf("Feliz Navidad!\n");
		else if(T == "mexico") printf("Feliz Navidad!\n");
		else if(T == "antardida") printf("Merry Christmas!\n");
		else if(T == "canada") printf("Merry Christmas!\n");
		else if(T == "irlanda") printf("Nollaig Shona Dhuit!\n");
		else if(T == "belgica") printf("Zalig Kerstfeest!\n");
		else if(T == "italia") printf("Buon Natale!\n");
		else if(T == "libia") printf("Buon Natale!\n");
		else if(T == "siria") printf("Milad Mubarak!\n");
		else if(T == "marrocos") printf("Milad Mubarak!\n");
		else if(T == "japao") printf("Merii Kurisumasu!\n");
		else printf("--- NOT FOUND ---\n");
	}
  
  

  system("pause");
  return 0;
}
