
#include "str_easy.h"

string itc_even_place(string str)
{
    int i;
    i = 0;
    string newstring = "";
    while (str[i] != '\0')
    {
        if (i % 2 == 0)
            newstring += str[i];
        i += 1;
    }
    return newstring;
}


double itc_percent_lower_uppercase(string str)
{
    double low;
    low = 0;
    double up;
    up = 0;
    int i;
    i = 0;
    int newchar;
    while (str[i] != '\0'){
        newchar = str[i];
        if (newchar >= 65 && newchar <= 90)
            up += 1;
        if (newchar >= 97 && newchar <= 122)
            low += 1;
        i += 1;
    }
    return up / low;
}
string itc_reverse_str(string str)
{
    string res = "";
    for (int i = 0; i < itc_len(str); i++)
        res += str[itc_len(str)-i-1];
    return res;

}

string itc_slice_str(string str, int start, int end)
{
    string res ="";
    if ( end >= itc_len(str))
        end = itc_len(str);
    for ( int i = start; i < end; i++)ko
        res += str[i];
    return res;
}


bool itc_equal_reverse(string str)
{
    if ( str == itc_reverse_str(str))
        return true;
    return false;
}
