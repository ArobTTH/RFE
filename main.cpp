/**
 * \file      main.cpp
 * \mainpage  This is a lattice Boltzmann Computational Fluid Dynamics (CFD) solver
 * \author    Ruiyang Ji
 * */


#include <iostream>
#include "src/setting/general_setting.hpp"
#include "src/general/timer.hpp"

int main() {


    Timer timer1;
    timer1.Start();
    std::cout<< DataTp (NX) << std::endl;
    timer1.Stop();

    std::cout<< timer1.GetRunTime() << std::endl;

    return 0;
}
