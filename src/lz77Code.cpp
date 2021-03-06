#include "../include/lz77Code.hpp"

std::ostream& operator<<(std::ostream& out, lz77Code& code){
    return out << "(" << code.getP() << "," << code.getL() << "," << code.getC() << ")";
}

lz77Code::lz77Code(size_t p, size_t l, char c)
{
    this->p = p;
    this->l = l;
    this->c = c;
}

void lz77Code::setP(size_t p){
    this->p = p;
}

void lz77Code::setL(size_t l){
    this->l = l;
}

void lz77Code::setC(char c){
    this->c = c;
}


size_t lz77Code::getP(){
    return this->p;
}

size_t lz77Code::getL(){
    return this->l;
}

char lz77Code::getC(){
    return this->c;
}

/*– Associar à sequência o código (p, l, c) onde
p é a posição relativa (a contar do cursor) da maior sequência do
dicionário
l é o comprimento da maior sequência
c é o símbolo do buffer que se segue à sequência
*/