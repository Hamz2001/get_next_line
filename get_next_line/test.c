/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:13:29 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/27 11:13:31 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

const int MAX = 5;

// int main () {
// // // int *nb[MAX];
// // int num[] = {10, 20, 30, 40, 50, 60, 70};
// // // nb[0]= &num[0];
// // int x, *ptr[MAX];

// // for (x = 0; x < MAX; x++)
// // {
// // 	ptr[x] = &num[x];
// // }

// // for ( x = 0; x < MAX; x++) 
// // {
// // 	printf("The value of the num[%d] = %d\n", x, *ptr[x] );
// // }

// // return 0;


// }
int f(int *a, int n)
{
	if(n <= 0)
		return(0);
	else if(*a % 2 == 0)
		return(*a + f(a + 1, n - 1));
	else
		return *a - f(a + 1, n - 1);
}

int main()
{
	int a[] = {12, 7, 13, 4, 11 , 6};
	printf("%d", f(a, 6));
	getchar();
	return(0);
}