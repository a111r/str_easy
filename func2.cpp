#include "str_easy.h"

string itc_cmp_str(string str, string str1, int number) {
    string a, b;
    if (itc_len(str) < number || number < 0)
        return str;
    for (int i = 0; i < number; i++)
        a += str[i];
    for (int i = 0; str1[i] != '\0'; i++)
        a += str1[i];
    for (int i = number; str[i] != '\0'; i++)
        a += str[i];
    for (int i = 0; i < itc_len(str); i++)
        b += a[i];
    return b;
}



int itc_find_str(string str1, string str2)
{
    int i1,i2,res;
    i1 = 0;
    res = -1;
    bool started = false;
    bool in = false;
    while (str1[i1] != '\0')
    {
        if (str1[i1] == str2[0] && !started){
            started = true;
            i2 = 0;
            res = i1;
        }
        if (started) {
            if (i2 == itc_len(str2) - 1) return res;
            if (str2[i2] != str1[i1]) started = false;
            i2 += 1;
        }
        i1 += 1;
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
{
    int i = 0;
    int start;
    start = itc_find_str(str1, str2);
    while (str1[i] != '\0'){
        start = itc_find_str(str1, str2);
        if (start == -1)
            i += 1;
        else
        {
        str1 = itc_slice_str(str1, 0, start - 1) + str3 + itc_slice_str(str1, start + itc_len(str2), itc_len(str1));
        i = start + itc_len(str2);
        }
    }
    return str1;
}


long long itc_max_char_on_end(string str)
{
    int lu, luc, a;
    lu = 0;
    luc = 0;
    a = 0 ;
    while (str[a] != '\0'){
        if (str[a] >= '0' && str[a] <= '9')
            luc++;
        else {
            if (luc > lu) lu = luc;
            luc = 0;
        }
        a++;
    }
    if (luc > lu) lu = luc;
    return lu;
}

