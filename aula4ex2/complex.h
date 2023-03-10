#ifndef AULA4EX2_COMPLEX_H
#define AULA4EX2_COMPLEX_H

#include <iostream>

class complex{
public:
    complex();
    complex(int a, int b);
    int geta();
    int getb();
    void update(int a, int b);
    void shownum(int a, int b);
    complex operator+(complex& outro){
        complex temp;
        temp.a = this->a + outro.geta();
        temp.b = this->b + outro.getb();
        return temp;
    }
    complex operator-(complex& outro){
        complex temp;
        temp.a = this->a - outro.geta();
        temp.b = this->b - outro.getb();
        return temp;
    }
    complex operator*(complex& outro){
        complex temp;
        temp.a = this->a * outro.geta();
        temp.b = this->b * outro.getb();
        return temp;
    }
    complex& operator++(int ){
        a++;
        b++;
        return *this;
    }
    complex& operator--(int ){
        a--;
        b--;
        return *this;
    }
    bool operator==(complex& outro){
        if(this->a==outro.geta() && this->b==outro.getb())
            return true;
        else
            return false;
    }

private:
    int a; //real
    int b;//imaginary
};

#endif //AULA4EX2_COMPLEX_H
