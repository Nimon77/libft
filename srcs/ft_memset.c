/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:42:35 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/04 12:18:44 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
int		i;

	i = 0;
	while (i < len)
	{
		b[i] = c;
	}
	return b;
}

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
    int		n = 10;
    int		arr[n];

    memset(arr, 50, n * sizeof(arr[0]));
    printArray(arr, n);
    return 0;
}
