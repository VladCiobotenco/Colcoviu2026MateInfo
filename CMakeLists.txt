cmake_minimum_required(VERSION 4.0)
project(Colcoviu2026MateInfo)

set(CMAKE_CXX_STANDARD 20)

add_executable(Colcoviu2026MateInfo main.cpp
        include/Caz.h
        include/Fapta.h
        source/Fapta.cpp
        source/Caz.cpp
        include/Fapta_com.h
        source/Fapta_com.cpp
        include/Fapta_info.h
        source/Fapta_info.cpp
        include/Fapta_asis.h
        source/Fapta_asis.cpp
        include/Persoana.h
        source/Persoana.cpp
        include/Cadru_didactic.h
        source/Cadru_didactic.cpp
        include/Decan.h
        source/Decan.cpp
        include/Repr_asociatie.h
        include/Consult_extern.h
        source/Repr_asociatie.cpp
        source/Consult_extern.cpp
        include/App.h
        source/App.cpp
        source/Comisie.cpp
        include/Comisie.h
        source/Persoana_factory.cpp
        include/Persoana_factory.h)
