cmake_minimum_required(VERSION 3.5)
project(database VERSION 0.1 LANGUAGES CXX )


### Executável
# Diretório contendo os .hpp
include_directories( include )

# Cria um executável com nome "database", adiciona neste executável os arquivos src/ArmazenaDNA.cpp src/CenaCrime.cpp src/Commands.cpp
add_executable( concordo
                src/ArmazenaDNA.cpp
                src/CenaCrime.cpp 
		src/Commands.cpp)

# The end