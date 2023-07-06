#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program that create random passwords.
 * return: random passwords
 */

char *generatePassword(int length)
{
    // Define the characters allowed in the password
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int numCharacters = sizeof(characters) - 1; // Calculate the number of characters

    // Allocate memory for the password
    char *password = malloc((length + 1) * sizeof(char));

    // Generate each character of the password
    for (int i = 0; i < length; i++)
    {
        // Generate a random index within the range of characters
        int randomIndex = rand() % numCharacters;

        // Assign the randomly selected character to the password
        password[i] = characters[randomIndex];
    }

    // Add a null terminator at the end of the password
    password[length] = '\0';

    return password;
}

int main(void)
{
    srand(time(NULL));

    int passwordLength = 10; // Set the desired length of the password

    // Generate a password
    char *password = generatePassword(passwordLength);

    // Print the generated password
    printf("Generated Password: %s\n", password);

    // Free the allocated memory for the password
    free(password);

    return 0;
}
