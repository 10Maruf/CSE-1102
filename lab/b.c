/*maruf_bro*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define ll long long int

int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int freq[26] = {0};
    for (int i = 0; i < len; i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < len; i++)
    {
        if (freq[str[i] - 'a'] != 0)
            printf("%c", str[i]);
        if ((freq[str[i] - 'a'] >= 1))
        {
            freq[str[i] - 'a'] = 0;
        }
    }

    return 0;
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     scanf("%s", str);
    
//     int freq[26] = {0};
//     int len = strlen(str);
    
//     for (int i = 0; i < len; i++) {
//         if (freq[str[i] - 'a'] == 0) {
//             printf("%c", str[i]);
//             freq[str[i] - 'a'] = 1;
//         }
//     }
    
//     return 0;
// }
