#include <iostream>
#include <cmath>
using namespace std;
class Kalkulator{
public:

};

double mem;
bool mem_used;
double add(double a, double b){
    mem = a + b;
    mem_used=true;
    return a+b;

}
double sub(double a, double b){
    mem = a - b;
    mem_used=true;
    return a-b;
}
double tim(double a, double b){
    mem = a * b;
    mem_used=true;
    return a*b;
}
double div(double a, double b){
    if( b==0 || a==0){
    cerr<<"Nie wolno dzielić przez zero big nono!";
    return 0;
    }
    mem = a / b;
    mem_used=true;
    return a/b;
}
double mod(double a, double b){
    return a-(int)(a/b)*b;
}

void erase(){
 mem=0,0;
 mem_used=false;
}
void menu(){
    double a,b;
    char input;
    cout<<"Podaj dwie wartości i co chcesz obliczyć:";
    cout<<"+: Dodawanie, - : odejmowanie, *: mnozenie,/: - dzielenie,%: pierwiastkowanie:";
    cin>>a>>b>>input;
    switch (input){
        case '+':
            add(a,b);
            break;
        case '-':
            sub(a,b);
            break;
        case '*':
            tim(a,b);
            break;
        case '/':
            div(a,b);
            break;
        case '%':
            mod(a,b);
            break;
    }
}
int main() {
    menu();

}
