#include <iostream>

using namespace std;
void logic(int g);
int main(){
    int g; //Объявление переменной
    cout << "Введите число" << endl;
    cin >>g;//Запись числа в переменную

    logic(g);
    return 0;
}
void logic(int g){

    if(g == 1 || g == 0){ //Логичиское разветвление
        cout << "You picked 0 or 1" << endl;
    }
    else{
        cout << "Error" << endl;
    }


}