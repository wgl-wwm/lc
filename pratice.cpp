#include<iostream>


using namespace std;

int toint (char a,char b){
    int m = a - 48;
    int n = b - 48;

    return 10*m+n;
}
int main(){
    cout << toint('0','2');
    return 0;
}