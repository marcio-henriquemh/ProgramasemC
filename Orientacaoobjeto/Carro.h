#ifndef CARRO_H
#define CARRO_H
#include<string>

using namespace std;


class Carro{
public:
    void setmarca(string marca);
    string getmarca();
    void setano(int ano);
    int getano();

private:

    string marca;
    int ano;
};

#endif // CARRO_H
