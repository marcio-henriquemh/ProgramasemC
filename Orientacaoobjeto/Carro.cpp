#include "Carro.h"
#include<string>

using namespace std;

void Carro::setmarca(stringmarca){

        this->marca=marca;

}

string Carro::getmarca(){
        return marca;

}

string Carro::setano(int ano){

        if(ano>1784){

            this->ano=ano;

        }else{


        this->ano=1784;

        }


int Carro::getano(){

    return ano;
}

}
