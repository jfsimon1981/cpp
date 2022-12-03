#pragma once

// Count down timer with pre-alarm
class Timer {
  void start();           // Start, does not initialize
  void stop();            // Stop, does not initialize
  void reset();           // Reset to pre-load, does not change running state
  bool is_elapsed();      // Timer elapsed (zero or below)
  bool is_alarm();        // Alarm active (below alarm schedule)
  void set_preload();     // Set pre-load value, does not change running states
  void set_alarm();       // Set alarm threshold
  chrono::duration get(); // Reads actual value
public:
  Timer(chrono::duration); // Instanciates running, initialized.
  Timer();                 // Instanciates non running, init to zero.
  ~Timer();
}

// Count up chronometer
class Chronometer {
  void start();     // Start, does not initialize
  void stop();      // Stop, does not initialize
  void reset();     // Reset to zero, does not change running state
  void set_alarm(); // Set alarm threshold
  bool is_alarm();  // Alarm active (below alarm schedule)
  chrono::duration get(); // Reads actual value
public:
  Chronometer(); // Starts initialized to zero, not running
  ~Chronometer();
}
