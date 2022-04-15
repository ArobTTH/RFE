#ifndef RFE_MCMP_SETTING_HPP
#define RFE_MCMP_SETTING_HPP


/**
 *  \file     setting.hpp
 *  \mainpage solver multicomponent multiphase flow settings
 *  \author   Ruiyang Ji
 * */

    /// equation of state
    // equation of state parameters PR;
    constexpr double    PR_omega    =  0.344;
    constexpr double    PR_a        =  0.06122448;
    constexpr double    PR_b        =  0.09523809;
    constexpr double    PR_R        =  1.0;

    // Equation of state parameters CS
    constexpr double    CS_R        =  1.0;
    constexpr double    CS_b        =  4.0;
    constexpr double    CS_a        =  0.5;

    /// Shan-Chen model constant
    constexpr double    SC_G           =  (-1.0);
    constexpr double    SC_Gw          =  0.0;
    constexpr double    SC_sigma       =  0.11;

#endif //RFE_MCMP_SETTING_HPP
