#include <string>
#include "str_easy.h"

using namespace std;
string itc_cmp_str(string str1, string str2, int num){

    string g;

    int i, j, h;

    h = itc_len(str1);

    if (str2[0] == '\0')

        return str1;

    for (i = 0; i < num; i++)

        g = g + str1[i];

    for (j = 0; str2[j] != '\0'; j++)

        if (i < h)
        {
           g = g + str2[j];

        i++;

        }

    if (i <= h)

        for (i; str1[i] !='\0'; i++)

            g = g + str1[i];


    return g;
}

int itc_find_str(string str1, string str2){

    string g;
    int j = 0;
    int h = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            g = g + str1[i];

            h += 1;

            j++;
        }

        else
        {
            g = "\0";

            j = 0;
        }
        if (g == str2)
            return i - (h - 1);
    }

    return -1;
}
