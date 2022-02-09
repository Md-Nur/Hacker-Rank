#include <stdio.h>

int main()
{
    int num1, num2, num3, vajjo, vajok, vagshesh;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        vajjo = num1;
        vajok = num2;
    }
    else
    {
        vajjo = num2;
        vajok = num1;
    }

    vagshesh = vajjo % vajok;
    while (vagshesh != 0)
    {
        vajok = vagshesh;
        vagshesh = vajjo % vajok;
        vajjo = vajok;
    }

    vajjo = num3;
    vagshesh = vajjo % vajok;
    while (vagshesh != 0)
    {
        vajok = vagshesh;
        vagshesh = vajjo % vajok;
        vajjo = vajok;
    }
    printf("GCM = %d", vajok);

    return 0;
}
