//Programm name: Printing tokens

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/*	====	Stucture & Uninons	====	*/

/*	====	Declaration of Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    char line[1001];

    gets(line);
    for (int i = 0; i < strlen(line); i++)
    {
        printf("%c",line[i]);
        if(line[i]==' '){
            printf("\n");
        }
    }
    
    return 0;
}

/*	====	Functions	====	*/
