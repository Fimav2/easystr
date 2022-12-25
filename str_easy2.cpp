#include <string>
#include "str_easy.h"

using namespace std;
string itc_even_place(string str){
        if (itc_len(str)>=2){

            string g = "";

            for(int i = 1; i < itc_len(str); i = i + 2){
                g = g + str[i];
            }

            return g;
        }

        else{
            return "-1";
        }
}


double itc_percent_lower_uppercase(string str){

 double num_stroch = 0;

 double num_zag = 0;

double percent = 0;

 for (long long i = 0; i <= itc_len(str); ++i){


if (str[i] >= 'a' && str[i] <= 'z'){ //-  строчная
    num_stroch += 1;

}

if (str[i] >= 'A' && str[i] <='Z'){ //- заглавная
     num_zag +=1;
}


}

percent =  num_zag / num_stroch * 100;

return percent;
}
string itc_slice_str(string str,int tank, int nazad)
{
    string new_str;

    int i;

    if (tank < nazad)
    {
         while (i != tank)
        i = i + 1;

    for (i; i <= nazad; i++)

         new_str = new_str + str[i];

    }
    else

        new_str = "0";

    return new_str;
}
 bool itc_equal_reverse(string str){

     string g;

     g = itc_reverse_str(str);

     if (g == str){

            return 1;
     }

        else {
                return 0;
        }

 }




string itc_reverse_str(string str){

string new_str = "";

for (int i = itc_len(str) -1; i>=0; i--){
    new_str += str[i];
}
return new_str;

}
string itc_slice_str(string str,int tank, int nazad){

    string new_str;

    int i;

    if (tank < nazad)
    {
         while (i != tank)
        i = i + 1;

    for (i; i <= nazad; i++)

         new_str = new_str + str[i];

    }
    else

        new_str = "0";

    return new_str;
}
 bool itc_equal_reverse(string str){

     string g;

     g = itc_reverse_str(str);

     if (g == str){

            return 1;
     }

        else {
                return 0;
        }

 }
 
