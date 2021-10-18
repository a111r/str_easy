#ifndef STR_EASY_H_INCLUDED
#define STR_EASY_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

string itc_hello_str(string name);
long long itc_len(string str);
void itc_print_copy_str(string str, int numberer);
void itc_first_end_three(string str);
int itc_count_char_in_str(char che, string str);
string itc_even_place(string str);
double itc_percent_lower_uppercase(string str);
string itc_reverse_str(string str);
string itc_slice_str(string str, int starting, int endt);
bool itc_equal_reverse(string str);
string itc_cmp_str(string str12, string str23, int numm);

long long itc_find_str(string str12, string str23);
string itc_three_str(string str12, string str23, string str34);
long long itc_max_char_on_end(string str);



#endif // STR_EASY_H_INCLUDED