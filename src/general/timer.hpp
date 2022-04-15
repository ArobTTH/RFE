#ifndef RFE_TIMER_HPP
#define RFE_TIMER_HPP

/**
 * \fire timer
 * \mainpage An artificial class that allows for a convenient usage of a stopwatch.
 * \author Ruiyang Ji
*/

#include <chrono>
#include <iostream>
#include <string>
using namespace std;
using namespace chrono;


class Timer {

public:
    void Start() noexcept
    {
        start_ = high_resolution_clock::now();
    }

    void Stop() noexcept
    {
        stop_ = high_resolution_clock::now();
    }

    double GetRunTime() noexcept
    {
        duration_ = duration_cast<std::chrono::duration<double>>(stop_ - start_);
        runtime_ = duration_.count();
        return runtime_;
    }

    void TimeShow() noexcept
    {


    }

private:
    high_resolution_clock::time_point start_;
    high_resolution_clock::time_point stop_ ;
    duration<double>                  duration_    = duration<double>::zero();
    double runtime_     = 0.0;
};

#endif //RFE_TIMER_HPP
