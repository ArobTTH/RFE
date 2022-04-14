
#ifndef RFE_GENERAL_SETTING_HPP
#define RFE_GENERAL_SETTING_HPP


/**
 *  \file     setting.hpp
 *  \mainpage solver general settings
 *  \author   Ruiyang Ji
 * */

    /// solver general settings
    // floating point accuracy
    typedef double DataTp;

    // gird setting
    constexpr unsigned int      NX = 100;
    constexpr unsigned int      NY = 100;
    constexpr unsigned int      NZ = 100;

    // output setting
    constexpr unsigned int      NIter        = 10000;
    constexpr unsigned int      SaveIter     = 10000;
    constexpr unsigned int      MonitorIter  = 10000;
    constexpr bool              IsSave       = true;
    constexpr bool              IsMonitor    = true;





#endif //RFE_GENERAL_SETTING_HPP
