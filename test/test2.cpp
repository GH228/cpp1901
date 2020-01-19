#include <iostream>

using namespace std;
int main(){
    int g; //Объявление переменной
    cout << "Введите число" << endl;
    cin >>g;//Запись числа в переменную

    if(g >0 &&!(g == 5) && g <11){
        cout << g*10 << endl;
    }
    else{
        main();
    }
    return 0;
}