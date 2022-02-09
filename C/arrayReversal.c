// Programm name: Array Reversal

#include <stdio.h>
// #include <math.h>
// #include <string.h>
// #include <stdlib.h>
// #include <time.h>
// #include <windows.h>

/*	====	Stucture & Uninons	====	*/

/*	====	Declaration of Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int a, b[1001], i;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }

    for (--i; i >= 0; i--)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

/*	====	Functions	====	*/
