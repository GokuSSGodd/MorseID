MorseID
About

MorseID is an innovative Arduino project designed to teach and demonstrate the application of Morse code through interactive hardware components. Utilizing an Arduino UNO R3, a 3-color RGB LED, a push button, and a reed switch, this project allows users to visually represent their student ID in Morse code, enhancing their understanding of both Morse code and Arduino programming.
Introduction

The purpose of MorseID is to provide a hands-on experience with embedded systems by implementing a system that flashes a student ID number in Morse Code. A unique color represents each Morse code symbol with a red light for dots and a green light for dashes. The project uses a push button to navigate through the digits of the ID and a reed switch to reset to the beginning of the sequence.
Features

    Interactive Morse Code Display: Utilizes RGB LEDs to display Morse code.

    User Input Control: Uses a push button to step through Morse code representations of a student ID.

    Reset Functionality: Includes a reed switch that resets the display sequence.

    Expandable: Code and hardware setup allow for future enhancements and additional functionality.

Usage

    Setup: Assemble the Arduino UNO R3, RGB LED, push button, and reed switch according to the provided wiring diagram.

    Programming: Upload the provided code to the Arduino.

    Operation:

        Start: Press the push button to begin displaying the Morse code for the first digit of your student ID.

        Continue: Press the button again to proceed to the next digit.

        Reset: Activate the reed switch by bringing a magnet close to it to reset to the first digit.

Hardware Components

    Arduino UNO R3

    3-color RGB LED

    Push button

    Reed switch

    Wires and breadboard

Software

    Arduino IDE for programming

Installation

Compile and upload the following Arduino sketch in the repository to your Arduino UNO R3.

Appendix

    Source Code: Complete Arduino sketch for MorseID.

    Morse Code Reference: https://en.wikipedia.org/wiki/Morse_code

Contributing

Contributions are welcome! Please fork the repository, make your improvements, and submit a pull request.

License

MorseID is open-source and distributed under the MIT License.
