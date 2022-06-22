#ifndef ArmazenaDNA_H
#define ArmazenaDNA_H
#include <iostream>
#include <vector>

// Classe que representa o Armazenamento de DNA do sistema
class ArmazenaDNA
{
    private:
        int dnaId;
        std::string dna_suspeito;

    public:

    /*! Construtor da classe ArmazenaDNA */
    ArmazenaDNA();

    /*! Costrutor com parâmetros */
    ArmazenaDNA(const int Id, const std::string pdna);

    /*! Destrutor da classe ArmazenaDNA */

    ~ArmazenaDNA();

    int getDna();
    std::string getDnaSuspeito();


};

#endif