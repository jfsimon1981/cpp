#include "time.h"

std::chrono::duration<float> rv {1.f}; // Temp

// Count down timer with pre-alarm
// class Timer
// Private
// public
// Start, does not initialize
void Timer::start() {};

// Stop, does not initialize
void Timer::stop() {};

// Reset to pre-load, does not change running state
void Timer::reset() {};

// Timer elapsed (zero or below)
bool Timer::is_elapsed() {return 0;};

// Alarm active (below alarm schedule)
bool Timer::is_alarm() {return 0;};

// Set pre-load value, does not change running states
void Timer::set_preload(std::chrono::duration<int> duration_in) {};

// Set alarm threshold
void Timer::set_alarm() {};

// Reads actual value
std::chrono::duration<float> Timer::get_ms() {return rv;};
std::chrono::duration<float> Timer::get_s() {return rv;};
std::chrono::duration<float> Timer::get_mins() {return rv;};
std::chrono::duration<float> Timer::get_hours() {return rv;};
std::chrono::duration<float> Timer::get_days() {return rv;};

// Instanciates running, initialized.
Timer::Timer(std::chrono::duration<int> duration_in) {};

// Instanciates non running, init to zero.
Timer::Timer() {};
Timer::~Timer() {};

// Count up chronometer
// class Chronometer
// Private
// public
// Start, does not initialize
void Chronometer::start() {};

// Stop, does not initialize
void Chronometer::stop() {};

// Reset to zero, does not change running state
void Chronometer::reset() {};

// Set alarm threshold
void Chronometer::set_alarm() {};

// Alarm active (below alarm schedule)
bool Chronometer::is_alarm() {return 0;};

// Reads actual value
std::chrono::duration<float> Chronometer::get_ms() {return rv;};
std::chrono::duration<float> Chronometer::get_s() {return rv;};
std::chrono::duration<float> Chronometer::get_mins() {return rv;};
std::chrono::duration<float> Chronometer::get_hours() {return rv;};
std::chrono::duration<float> Chronometer::get_days() {return rv;};

// Starts initialized to zero, not running
Chronometer::Chronometer() {};
Chronometer::~Chronometer() {};
