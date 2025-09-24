#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main() {
  int myInt = ft_recursive_power(2, 31);
  while (myInt != 0)
  {
    if (myInt % 2 == 0)
  	  printf("size: %zu bits value: %d\n", 8*sizeof(myInt), --myInt);
	  break;
    myInt++;
  }
  return 0;
}