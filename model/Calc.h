class Calc
{
private:
    double a;
    double b;
    double result;
public:
    Calc();
    Calc(double a, double b);
    void setA(double a);
    void setB(double b);
    double getA();
    double getB();
    double add();
    double sub();
    double mul();
    double div();
    ~Calc();
};