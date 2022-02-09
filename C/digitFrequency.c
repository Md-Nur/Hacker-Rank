// Programm name: Digit Frequency

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/*	====	Stucture & Uninons	====

73348t9895298h768464894a958zda58

0 0 1 2 4 3 2 2 7 5
    ====	Declaration of Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int num[10] = {0};
    char sentence[1001];
    gets(sentence);

    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == '0')
        {
            num[0]++;
        }
        else if (sentence[i] == '1')
        {
            num[1]++;
        }
        else if (sentence[i] == '2')
        {
            num[2]++;
        }
        else if (sentence[i] == '3')
        {
            num[3]++;
        }
        else if (sentence[i] == '4')
        {
            num[4]++;
        }
        else if (sentence[i] == '5')
        {
            num[5]++;
        }
        else if (sentence[i] == '6')
        {
            num[6]++;
        }
        else if (sentence[i] == '7')
        {
            num[7]++;
        }
        else if (sentence[i] == '8')
        {
            num[8]++;
        }
        else if (sentence[i] == '9')
        {
            num[9]++;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", num[j]);
    }

    return 0;
}

/*	====	Functions	====	*/
