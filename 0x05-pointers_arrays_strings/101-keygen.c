#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main program that create random passwords.
 * return: random passwords
 */

char *generatePassword(int length)
{
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int numCharacters = sizeof(characters) - 1;

    int i;

    char *password = malloc((length + 1) * sizeof(char));

    for (i = 0; i < length; i++)
    {
        int randomIndex = rand() % numCharacters;

        password[i] = characters[randomIndex];
    }

    password[length] = '\0';

    printf("%s\n", password);
    
    return password;

free(password);
}

int main(void)
{
	srand(time(NULL));
    	generatePassword(10);
    
    	return 0;
}
