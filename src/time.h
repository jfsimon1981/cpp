#pragma once

// Count down timer with pre-alarm
class Timer {
start(); // Start, does not initialize
stop(); // Stop, does not initialize
reset(); // Reset to pre-load, does not change running state
is_elapsed(); // Timer elapsed (zero or below)
is_alarm(); // Alarm active (below alarm schedule)
set_preload(); // Set pre-load value, does not change running states
set_alarm(); // Set alarm threshold
get(); // Reads actual value
public:
//  Timer(chrono::duration);  // Instanciates running, initialized.
  Timer();  // Instanciates non running, init to zero.
  ~Timer();
}

// Count up chronometer
class Chronometer {
public:
  Chronometer();
  ~Chronometer();
}
