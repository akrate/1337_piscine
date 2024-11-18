/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:47:40 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/15 17:34:09 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
void print_array(int *tab, int size) {
	int i = 0;
	while( i < size) {
		
		
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main() {
	int array[] = {5, 3, 8, 6, 2, 4, 7};
	int size = 7;
	
	printf("Original array: ");
	print_array(array, size);
   ft_sort_int_tab(array, size);
	
	printf("Sorted array: ");
	print_array(array, size);
	
	return 0;
}*/
