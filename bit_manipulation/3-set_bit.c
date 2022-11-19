/**
 * set_bit - sets the value of a bit
 * @n: pointer to a number
 * @index: index
 * Return: 1 (Sucess) else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}

