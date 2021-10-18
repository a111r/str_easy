#include "str_easy.h"

string itc_even_place(string str)
{
    string res = "";
    for (int i = 0; i < itc_len(str); i += 2)
        res += str[i];
    return res;
}


double itc_percent_lower_uppercase(string str)
{
    long long big;
    big = 0;
    long long small;
    small = 0;
    for ( int i = 0; i < itc_len(str); i++){
        int ch = str[i];
        if ( ch <= 90 && ch >= 65)
            big++;
        else if(ch <= 122 && ch >= 97)
            small++;

        return big/small * 100;
    }

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
    if ( end >= itc_len(str)){
        end = itc_len(str);
    }
    for ( int i = starting; i < end; i++){
        res += str[i];
    }
    return res;
}


bool itc_equal_reverse(string str)
{
    if ( str == itc_reverse_str(str))
        return true;
    return false;
}
