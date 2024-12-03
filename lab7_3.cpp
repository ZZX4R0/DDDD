#include<iostream>
using namespace std;

char before(char input){
    if(input >= 'A' && input <= 'Z'){
        if (input == 'A'){
            return 'Z';
        }else{
            return input - 1;
        }
    }
    return '0';

}