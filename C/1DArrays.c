// Programm name: 1D Arrays

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
    int a, b, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        sum = sum + b;
    }
    printf("%d", sum);

    return 0;
}

/*	====	Functions	====	*/
