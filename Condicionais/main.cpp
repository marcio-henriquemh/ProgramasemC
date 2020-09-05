#include<cstdlib>
#include<string>
#include<iostream>
#include<carro.h>
using namespace std;



int main(int argc,char** argv){
carro c1;

c1.setMarca ("Chevrolet");
c1.setAno=2009;
 


carro c2;

c2.setMarca ("Fiat");
c2.setAno=2007;



cout<<c2.getMarca<< endl;
cout<<c2.getAno<< endl;
    return 0;
}