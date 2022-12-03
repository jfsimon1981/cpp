#include "time.h"

// Count down timer with pre-alarm
// class Timer
// Private
void Timer::start();       // Start, does not initialize
void Timer::stop();        // Stop, does not initialize
void Timer::reset();       // Reset to pre-load, does not change running state
bool Timer::is_elapsed();  // Timer elapsed (zero or below)
bool Timer::is_alarm();    // Alarm active (below alarm schedule)
void Timer::set_preload(); // Set pre-load value, does not change running states
void Timer::set_alarm();   // Set alarm threshold
chrono::duration Timer::get();  // Reads actual value
                                // public
Timer::Timer(chrono::duration); // Instanciates running, initialized.
Timer::Timer();                 // Instanciates non running, init to zero.
~Timer::Timer();

// Count up chronometer
// class Chronometer
// Private
void Chronometer::start();     // Start, does not initialize
void Chronometer::stop();      // Stop, does not initialize
void Chronometer::reset();     // Reset to zero, does not change running state
void Chronometer::set_alarm(); // Set alarm threshold
bool Chronometer::is_alarm();  // Alarm active (below alarm schedule)
chrono::duration Chronometer::get(); // Reads actual value
                                     // public
Chronometer::Chronometer();          // Starts initialized to zero, not running
~Chronometer::Chronometer();
