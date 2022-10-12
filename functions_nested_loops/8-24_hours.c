#include <stdio.h>
/**
 * main - print every minute of day Jack Bauer
 * 
 * Return: always 0 (Success) 
 */
void jack_bauer(void)
{
    int horas = 0, minutos = -1;

    while (60)
    {
        minutos++;

        if(minutos == 60)
        {
            minutos=0;
            horas++;
        }
        /* code */
        printf("\n%.2d:%.2d", horas, minutos);
        
        if(horas == 23 && minutos == 59)
        {
            break;
		}
    }
    return (0);
}
