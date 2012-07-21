Big Data Ergonomics
===================

## Proof of concept

For my first endeavour into big data ergonomics, I conduct a particularly
minimal experiment to demonstrate the concept of big data ergonomics.

## Variable selection

Given the definition of ergonomics put forth by the International Ergonomics Association,
I decided to select at least one productivity variable, at least one well-being
variable and at least one intervention. Given Jack's design-program-exposure
taxonomy, it might make sense to select three interventions, but I wanted to
go with something minimal so I actually finish it.

In order to collect big ergonomics data easily, I chose variables that would be
inexpensive and easy to collect with computer sensors. With this in mind, the
intervention would need to be a design or exposure intervention, not a program
intervention. I went with these variables.

In order to demonstrate the value of big data ergonomics, I chose a concern
that would be difficult to evaluate with small data. I looked at an issue
relating to static loading because such analysis involves estimation of variances,
which demands larger samples than estimation of means. I looked at very longitudinal
data (measurements each second for a person) because such data beg to be modeled
in a non-aggregated way with "machine-learning" techniques rather being aggregated
for traditional "statistics" (not that machine learning and statistics are
different).

**Productivity**: Times of key presses

**Well-being**: Magnitudes and times of keyboard movements

**Intervention**: Keyboard weight

## Measurement tools

I assembled an Arduino with sensors for each of the three measures. I document
below my process for deciding on components.

### Productivity: Times of key presses

I figured I'd use a keylogger but not log the keys. Some references

* [Teensy keylogger](http://www.irongeek.com/i.php?page=security/homemade-hardware-keylogger-phukd)
* [Arduino USB keyboard kluge](http://www.practicalarduino.com/projects/virtual-usb-keyboard), which is
    also my plan for my stenotype
* [USB keyboard firmware](http://hunt.net.nz/users/darran/) might be easier on Arduino Uno rather than
    Mega because someone already compiled the firmware. (I was having this trouble with the stenotype.)

### Well-being: Magnitudes and times of keyboard movements

I looked at [this guide](http://www.sparkfun.com/tutorials/167/) and thought that
one of these would make sense.

* http://www.sparkfun.com/products/9269
* http://www.sparkfun.com/products/9652
* http://www.sparkfun.com/products/9801
* http://www.sparkfun.com/products/10121

I could just get all of them and decide later....

### Intervention: Keyboard weight