#include <stdio.h>

int	main(int ac, char **av) {
	if (ac != 2)
		return;
	int i = 0;
	while (av[1][i]) {
		printf("%c", av[1][i] - i);
		i++;
	}
	printf("\n");
	return 0;
}
