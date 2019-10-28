/* Exercise 2-3. Write the function htoi(s), which converts a string of hexa-
   decimal digits (including an optional 0x or 0X) into its equivelnt integer value.
   The allowable digits are 0 through 9, a through f and A through F. */
int htoi(char s[])
{
	int i, n;

	n = 0;
	i = 2;
	while (s[i] != '\0') {
		if (s[i] >= '0' && s[i] <= '9')
			n = 16 * n + (s[i] - '0');
		else if (s[i] >= 'a' && s[i] <= 'f')
				n = 16 * n + 10 + (s[i] - 'a');
		else if (s[i] >= 'A' && s[i] <= 'Z')
				n = 16 * n + 10 + (s[i] - 'a');

		i++;
	}	
}