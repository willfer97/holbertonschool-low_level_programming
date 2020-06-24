/**
 * rev_string - Function to reverse string
 * @s: imput to reverse string.
 */
void rev_string(char *s)
{
	int i, j;
	char r[10];

	i = j = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = r[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
