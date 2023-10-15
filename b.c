#include <iostream>
#include <string>
#include <cstring>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::string s, p, result;
        std::cin >> s >> p;
        int count[26] = {0};

        for (char ch : s)
        {
            count[ch - 'a']++;
        }

        for (char ch : p)
        {
            count[ch - 'a']--;
        }

        for (char ch = 'a'; ch < p[0]; ch++)
        {
            while (count[ch - 'a']-- > 0)
                result += ch;
        }

        if (count[p[0] - 'a'] > 0)
        {
            int f = 1;
            for (int i = 1; i < p.length(); i++)
            {
                if (p[i] < p[0])
                {
                    f = 0;
                    break;
                }
                else if (p[i] > p[0])
                {
                    break;
                }
            }

            if (f == 1)
            {
                while (count[p[0] - 'a']-- > 0)
                    result += p[0];
                result += p;
            }
            // std::cout << result << std:
            // :endl;std::cout << result << std::endl;
            else
            {
                result += p;
                while (count[p[0] - 'a']-- > 0)
                    result += p[0];
            }
            // std::cout << result << std::endl;
        }
        else
        {
            result += p;
        }

        for (char ch = p[0] + 1; ch <= 'z'; ch++)
        {
            while (count[ch - 'a']-- > 0)
                result += ch;
        }

        std::cout << result << std::endl;
    }

    return 0;
}
