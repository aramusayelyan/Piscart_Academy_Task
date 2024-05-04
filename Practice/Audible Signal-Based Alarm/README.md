# Alarm Program

This program allows users to set an alarm and plays a sound when the alarm goes off.

## Features

- Users can input the period after which they want to receive the alarm.
- The program plays a sound when the alarm goes off.

## Prerequisites

- Linux operating system
- `aplay` command-line utility for playing sound files
- C compiler (e.g., gcc)

## Installation

1. Clone the repository:

    ```
    git clone <repository_url>
    ```

2. Compile the program:

    ```
    gcc -o alarm alarm.c
    ```

## Usage

1. Run the compiled program:

    ```
    ./alarm
    ```

2. Follow the prompts to enter the period after which you want to receive the alarm.

3. The program will play a sound when the alarm goes off.

## Note

- This program trusts that users will enter a valid number when prompted for the alarm period.
- The sound file `sound.wav` must be present in the same directory as the executable for the alarm to work.

## Author

[Your Name]

## License

This project is licensed under the [MIT License](LICENSE).
