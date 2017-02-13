# Light Organ
Program of digital light organ for Arduino Uno.
This is an Arduino sketch.

- It takes in data on ADC0 (Analog0) and processes them with the fft.
- The FFT & FHT libraries can be downloaded from Open Music Labs.
- ADC sampling: ~38kHz - takes: ~6.7ms
- FFT with 256 samples produces 128 bands - takes: ~8ms
- It produces output as 3 PWM channels for RGB.
