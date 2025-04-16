
#include "kalkulator.h"
#include <iostream>
#include <cmath>
void menu(){
    Kalkulator kal;
    double a,b;
    char opcja;
    bool działania = true;
    while(działania==true){
        cout<<"Wybierz co chciałbyś robić:\n";
        cout<<"+ :Dodawanie, - : odejmowanie, *: mnozenie,/: - dzielenie,%: pierwiastkowanie lub q -wyjscie, m - pamiec, e -usuwanie";
        cin>>opcja;
        if(opcja=='q'){
            działania= false;
        }
        else if(opcja=='m'){
            if(kal.isMemUsed()){
                cout<<"twoja wartość:"<<kal.isMemUsed()<<"\n";
            }
            else{
                cout<<"Nie zapisałeś nic byniu\n";
            }
        }
        else if(opcja=='e'){
            kal.erase();
            cout<<"Magiku zniknołeś swoją pamięć\n";
        }
        else{
            cout<<"Podaj dwie wartości i co chcesz obliczyć:";
            cout<<"+: Dodawanie, - : odejmowanie, *: mnozenie,/: - dzielenie,%: pierwiastkowanie:";
            cin>>a>>b;
            switch (opcja){
                case '+':
                    cout<<kal.add(a,b);
                    break;
                case '-':
                    cout<<kal.sub(a,b);
                    break;
                case '*':
                    cout<<kal.tim(a,b);
                    break;
                case '/':
                    cout<<kal.div(a,b);
                    break;
                case '%':
                    cout<<kal.mod(a,b);
                    break;
                default:
                    cerr<<"nie wiem co chcesz zrobic\n";


            }
        }
    }
}
int main() {
    menu();
    return 0;

}
