#ifndef KALKULATOR_H
#define KALKULATOR_H
using namespace std;
class Kalkulator{
private:
    double mem;
    bool mem_used;
public:
    Kalkulator();
    double add(double a, double b);
    double tim(double a, double b);
    double sub(double a, double b);
    double mod(double a, double b);
    double div(double a, double b);
    void erase();
    double getMem() const;
    bool isMemUsed() const;
    void setMem(double value);
};
#endif
