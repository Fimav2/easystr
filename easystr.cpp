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

void itc_print_copy_str(string str, int number){

cout<< str[number];

}

