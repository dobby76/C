#include <stdio.h>

int main()
{
	char s[] = "ABCD";
	int a = 0, b = 3;
	char t;
	while (a < b)
	{
		t = s[a];
		s[a] = s[b];
		s[b] = t;
		a++;
		b--;
	}
	printf("%s", s);
	return 0;
}