char *test (void);

void print_alphabet(void);

void print_alphabet(void)
{
    char character;

    for (character = 'a'; character <= 'z'; character++)
    {
        _putchar(character);
    }
    _putchar('\n');
}