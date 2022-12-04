#pragma once
#include <chrono>
// Count down timer with pre-alarm
class Timer {
public:
  void start();           // Start, does not initialize
  void stop();            // Stop, does not initialize
  void reset();           // Reset to pre-load, does not change running state
  bool is_elapsed();      // Timer elapsed (zero or below)
  bool is_alarm();        // Alarm active (below alarm schedule)
  void set_preload(std::chrono::duration<int>);     // Set pre-load value, does not change running states
  void set_alarm();       // Set alarm threshold
  std::chrono::duration<float> get_ms(); // Reads actual value
  std::chrono::duration<float> get_s();
  std::chrono::duration<float> get_mins();
  std::chrono::duration<float> get_hours();
  std::chrono::duration<float> get_days();
  Timer(std::chrono::duration<int>); // Instanciates running, initialized.
  Timer();                 // Instanciates non running, init to zero.
  ~Timer();
};

// Count up chronometer
class Chronometer {
public:
  void start();     // Start, does not initialize
  void stop();      // Stop, does not initialize
  void reset();     // Reset to zero, does not change running state
  void set_alarm(); // Set alarm threshold
  bool is_alarm();  // Alarm active (below alarm schedule)
  std::chrono::duration<float> get_ms(); // Reads actual value
  std::chrono::duration<float> get_s();
  std::chrono::duration<float> get_mins();
  std::chrono::duration<float> get_hours();
  std::chrono::duration<float> get_days();
  Chronometer(); // Starts initialized to zero, not running
  ~Chronometer();
};
