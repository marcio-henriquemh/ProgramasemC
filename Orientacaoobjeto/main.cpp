#include <iostream>
#include<string>
#include<stdlib.h>



using namespace std;
// Orientação de Objetos
#include "Carro.h"

int main(int argc,char** argv)
{

        Carro c1;
        c1.setmarca("fiat");
        c1.setano(2009);
        //c1.cor = "Azul";


        Carro c2;
        c2.setmarca("Uno");
        c2.setano(1784);
        //c2.cor="Vermelho";




    cout << c2.getmarca() << endl;
    cout << c2.getano() << endl;
    return 0;
}
