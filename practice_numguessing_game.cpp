#include <iostream>
#include <ctime>
int main(){
    int guess_num;
    int tries = 0;
    int rand_num;
    srand(time(NULL));
    rand_num = (rand()%100) + 1;
    do{
        std::cout << "GUESS ";
        std::cin >> guess_num;
        tries++;
        if(guess_num > rand_num){
            std::cout << "TOO HIGH" << '\n';
        }
        else if(guess_num < rand_num){
            std::cout << "TOO LOW" << '\n';
        }
        else{
            std::cout << "CONGRATS" << '\n';
        }
    }while(guess_num != rand_num);

    std::cout << tries << "times of tries!";
    
    return 0;
}