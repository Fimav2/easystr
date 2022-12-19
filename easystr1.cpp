
#include <string>
#include "easystr.h"

using namespace std;

string itc_hello_str(string name ){
return ("Hello,"+ name);

}
//Написать функцию long long itc_len(string str), которая принимает на вход строку и возвращает на экран целое число количество символов в строке
long long itc_len(string str){
    long long b=0;
    for(int i=0; str[i]!= '\0'; i++){
        b++;
    }
    return b;


}

// void itc_print_copy_str(string str, int number), которая принимает на вход строку и целое число и
//выводит на экран строку столько раз, чему равен второй аргумент функции.

void itc_print_copy_str(string str, int number) 
{
    for (int i = 0; i < number; i++)
        cout << str << " ";
}
//Написать функцию void itc_first_end_three(string str), которая выводит первые три символа и
//последний три символа, если длина строки больше 5. Иначе вывести первый символ столько раз, какова длина строки.
void itc_first_end_three(string str){
    if (itc_len(str) > 5){
        cout << str[0]
         << str[1]
         <<str[2]
         << str[itc_len(str)-3]
         << str[itc_len(str)-2]
         << str[itc_len(str)-1];   //последний символ строки
    }
    else{
        for(int i=0; i<itc_len(str); i++){
            cout<< str[0];
        }
    }
}

int itc_count_char_in_str(char ch, string str){
    int number = 0;
    for(int i=0; i <= itc_len(str); i++){
            if (ch == str[i]){
                number = number + 1;
            }
        }



    return number;
}
