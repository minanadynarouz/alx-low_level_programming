#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program that create random passwords.
 * return: random passwords
 */

char *generatePassword(int length)
{
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int numCharacters = sizeof(characters) - 1;

    char *password = malloc((length + 1) * sizeof(char));

    for (int i = 0; i < length; i++)
    {
        int randomIndex = rand() % numCharacters;

        password[i] = characters[randomIndex];
    }

    password[length] = '\0';

    return password;
}

int main(void)
{
    srand(time(NULL));

    int passwordLength = 10;

    char *password = generatePassword(passwordLength);
    
    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}
