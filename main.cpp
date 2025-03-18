#include <iostream>
#include <cmath>
using namespace std;
double mem;
bool mem_used;
double add(double a, double b){
    return a+b;
}
double sub(double a, double b){
    return a-b;
}
double tim(double a, double b){
    return a*b;
}
double div(double a, double b){
    return a/b;
}
double mod(double a, double b){
    return a-(int)(a/b)*b;
}

void erase(){

}
void menu(){
    double a,b;
    string c;
    cin>>a>>b>>c;
    switch (add,sub,tim,div,mod) {
        case add:
            add(a,b);
        case sub:
            sub(a,b);
        case tim:
            tim(a,b);
        case div:
            div(a,b);
        case mod:
            mod(a,b);

    }
}
int main() {
    void_menu();

}
