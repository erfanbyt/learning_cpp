#include <iostream>

int multiplier(int first_num, int second_num){
    int product = first_num * second_num;
    return product;
}


int main(){

    int first_num = 3;
    int second_num = 4;

    int product = multiplier(first_num, second_num);
    std::cout << "product of 2 numbers are " << product << std::endl;

    return 0;
}