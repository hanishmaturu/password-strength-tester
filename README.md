# Password Strength Tester Project

## Project Overview
The Password Strength Tester is a simple C program designed to evaluate the strength of a password based on predefined criteria. It prompts the user to input a password and then analyzes it based on factors such as length, presence of uppercase and lowercase letters, digits, and special characters. The program provides feedback on the strength of the password according to the criteria met.

## Features
- Password length evaluation
- Presence of uppercase letters evaluation
- Presence of lowercase letters evaluation
- Presence of digits evaluation
- Presence of special characters evaluation
- Overall password strength rating out of 5

## Project Structure
1. **Main File:** `password_strength_tester.c`
    - Contains the main logic of the program.
    - Prompts the user to input a password.
    - Evaluates the password based on predefined criteria.
    - Displays the strength rating of the password.

2. **Helper Functions:**
    - `check_length(char *password)`: Checks if the password meets the minimum length requirement.
    - `has_uppercase(char *password)`: Checks if the password contains at least one uppercase letter.
    - `has_lowercase(char *password)`: Checks if the password contains at least one lowercase letter.
    - `has_digit(char *password)`: Checks if the password contains at least one digit.
    - `has_special_char(char *password)`: Checks if the password contains at least one special character.

## How to Use
1. Compile the `password_strength_tester.c` file using a C compiler.
2. Run the compiled executable.
3. Enter a password when prompted.
4. The program will evaluate the password and display its strength rating out of 5.

## Future Improvements
- Implement more sophisticated algorithms for evaluating password strength.
- Allow users to define custom criteria for password evaluation.
- Create a graphical user interface (GUI) for better user interaction.
- Incorporate secure storage mechanisms for storing and managing passwords.

## Contributors
- [Your Name]

## Version History
- Version 1.0 (Date): Initial release of the Password Strength Tester program.

## License
This project is licensed under the [insert license here].
