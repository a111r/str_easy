#include "str_easy.h"

string itc_hello_str(string name)
 {
     return "Hello, " + name;
 }

long long itc_len(string str)
 {
     int i;
     i = 0;
     while(str[i] != '\0')
        i++;
     return i;
 }

void itc_print_copy_str(string str, int number)
 {
     for(int i = 0; i < number; i++)
        cout << str << endl;
 }

void itc_first_end_three(string str)
 {
        if (itc_len(str) > 5){
        for (int i = 0 ; i < 3; i++)
            cout << str[i];
        for (int k = 3; k > 0; k--)
            cout << str[itc_len(str)-k];
    }
        else
        {
        for (int i = 0; j < itc_len(str); j++){
            cout << str[j];
        }
        cout << endl;
    }
 }

int itc_count_char_in_str(char ch, string str)
 {
    int res;
    res = 0;
    for (int i = 0; i < itc_len(str); i++)
    {
        if (str[i] == ch)
            res++;
    }
    return res;
 }
