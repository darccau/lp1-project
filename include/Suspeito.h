#ifndef SUSPEITO_H
#define SUSPEITO_H
#include <iostream>
#include <string>
#include <vector>

class Suspeito
{
private:
    int suspeitoId;
    std::string dnacsv; 

public:

    /*! Construtor da classe Suspeito */
    Suspeito();

    /*! Construtor com parâmetros da classe Suspeito */
    Suspeito(const int suspeitoId, const std::string pdnacsv);

    /*! Destrutor da classe suspeito */
    ~Suspeito();

    int getSuspeito();
    std::string getdnacsv();
};



#endif