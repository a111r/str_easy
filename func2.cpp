#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num)
{
    string res = "";
    for ( int i = 0; i < num-1;i++){
        res += str12[i];
    }
    res += str23;
  for ( int j = num-1; j< itc_len(str12);j++){
      res += str12[j];
  }
  return res;


}

int itc_find_str(string str1, string str2)
{
    long long res;
    res = -1;
    for ( int i = 0; i < itc_len(str1); i++){
        if (itc_slice_str(str1, i, i + itc_len(str2)) == str2){
            res = i;
            break;
        }
    }
    return res;

}

string itc_three_str(string str1, string str2, string str3)
{
    long long i;
    i = 0;
    while (itc_find_str(itc_slice_str(str1, i , itc_len(str1)), str2) != -1){
            long long start = itc_find_str(itc_slice_str(str1, i , itc_len(str1)), str2);
            str1 = itc_slice_str(str1, 0, start) + str3 + itc_slice_str(str1, start + itc_len(str2), itc_len(str1));
        }
        return str1;
    }

}
