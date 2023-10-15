#include <stdio.h>

int main()
{
    int testCases, num, resultDigits[200], i, j, digit, carry, digitCount;
    scanf("%d", &testCases);
    
    while (testCases--)
    {
        scanf("%d", &num);
        digitCount = 1;
        resultDigits[0] = 1;
        
        for (digit = 2; digit <= num; digit++)
        {
            carry = 0;
            
            for (i = 0; i < digitCount; i++)
            {
                resultDigits[i] = resultDigits[i] * digit + carry;
                carry = resultDigits[i] / 10;
                resultDigits[i] = resultDigits[i] % 10;
            }
            
            while (carry)
            {
                resultDigits[i] = carry % 10;
                i++;
                digitCount++;
                carry = carry / 10;
            }
        }
        
        for (i = digitCount - 1; i >= 0; i--)
        {
            printf("%d", resultDigits[i]);
        }
        
        printf("\n");
    }
    
    return 0;
}
