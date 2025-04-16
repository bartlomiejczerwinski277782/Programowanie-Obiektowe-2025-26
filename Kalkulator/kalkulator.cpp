#include "kalkulator.h"
#include <iostream>
#include <cmath>
Kalkulator::Kalkulator() : mem(0), mem_used(false){}
double Kalkulator::add(double a, double b){
    mem = a + b;
    mem_used=true;
    return a+b;

}
double Kalkulator::sub(double a, double b){
    mem = a - b;
    mem_used=true;
    return a-b;
}
double Kalkulator::tim(double a, double b){
    mem = a * b;
    mem_used=true;
    return a*b;
}
double Kalkulator::div(double a, double b){
    if( b==0 || a==0){
        cerr<<"Nie wolno dzielić przez zero big nono!";
        return 0;
    }
    mem = a / b;
    mem_used=true;
    return a/b;
}
double Kalkulator::mod(double a, double b){
    mem =  a-(int)(a/b)*b;
    mem_used= true;
    return a-(int)(a/b)*b;
}

void Kalkulator::erase(){
    mem=0,0;
    mem_used=false;

}
double Kalkulator::getMem() const{
    return mem;
}
bool Kalkulator::isMemUsed() const {
    return mem_used;
}
void Kalkulator::setMem(double value) {
    mem=value;
    mem_used = true;
}