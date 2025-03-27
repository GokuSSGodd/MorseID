Project Overview

MorseSignal is an innovative Arduino-based project that translates a student ID number into Morse code using a multi-color LED system. This educational toolkit not only demonstrates basic principles of electronics and programming but also integrates Morse code communication methods with modern technology. Designed primarily for learning environments, MorseSignal offers hands-on experience in hardware manipulation and software logic.
Features

    Morse Code Translation: Convert any numeric student ID into Morse code signals.

    Color-Coded Output: Utilize a 3-color RGB LED to represent Morse code symbols ('dots' and 'dashes') in different colors.

    Interactive Control: Change the Morse code representation using a simple push button and reset the sequence with a reed switch.

    User Customization: Modify Morse code settings such as color and blinking speed via UART serial communication.

    Persistent Settings: Save customized settings (dot/dash color, blinking speed, student ID) using EEPROM to retain modifications even after power is disconnected.

Hardware Components

    Arduino UNO R3

    RGB LED (Red, Green, Blue)

    Push button

    Reed switch

    Connecting wires

    USB power cable

Software and Libraries

    Arduino IDE

    EEPROM.h library for saving settings

Setup and Installation

    Hardware Setup: Connect the RGB LED, push button, and reed switch to the Arduino according to the provided circuit diagram.

    Software Configuration: Load the provided Arduino script into the Arduino IDE and upload it to the Arduino UNO R3.

    EEPROM Initialization: On the first run, ensure that the EEPROM is correctly initialized to store and retrieve settings.

Usage

    Starting the Device: Power the Arduino using a USB cable or an external power supply.

    Operating the Device: Press the push button to display the next digit of the student ID in Morse code. Each press advances to the next digit.

    Resetting the Sequence: Bring a magnet close to the reed switch to reset the Morse code sequence to the beginning of the student ID.

    Modifying Settings: Send commands through the serial monitor of the Arduino IDE to change the Morse code colors and speed.

Commands Format

    Change Dot Color: dr (red), db (blue), dg (green)

    Change Dash Color: Dr (red), Db (blue), Dg (green)

    Change Flashing Speed: s1 (slow), s2 (medium), s3 (fast)

    Change Student ID: i######## (replace ######## with new ID)

Future Enhancements

    Network Capabilities: Implement wireless control options such as Bluetooth or Wi-Fi to adjust settings remotely.

    User Interface: Develop a simple mobile app or web interface for easier configuration and visualization.

    Advanced User Input: Integrate a keypad or voice recognition for entering and modifying the student ID directly on the device.

Contributions

Contributions to CodeFlash are welcome. Please fork the repository, make your changes, and submit a pull request for review.
License

CodeFlash is released under the MIT License. See the LICENSE file for more details.
