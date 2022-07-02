#include <iostream>
#include <cctype>

int	main(int ac, char *av[])
{
	char	c;
	int		i;
	int		j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			c = toupper(av[i][j]);
			std::cout << c;
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
