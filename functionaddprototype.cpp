#include <iostream>
using namespace std;

int add(int num1, int num2);

int main(){
    int a = 4;
    int b = 5;
    cout << add(a, b) << endl;
    return 0;
}

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}