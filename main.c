/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chguerre <chguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:03:15 by chguerre          #+#    #+#             */
/*   Updated: 2025/12/10 19:21:35 by chguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función auxiliar para imprimir la lista y ver los resultados
// Para imprimir el contenido, hacemos un cast a (int *) y desreferenciamos con *

void	print_list(t_list *lst)
{
	printf("Estado de la lista: ");
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*mi_lista;
	t_list	*primer_nodo;
	t_list	*segundo_nodo;
	int		dato1;
	int		dato2;

	mi_lista = NULL; 
	print_list(mi_lista);
	printf("\nCreando el primer nodo...\n");
	dato1 = 100;
	primer_nodo = ft_lstnew(&dato1);
	ft_lstadd_front(&mi_lista, primer_nodo);
	print_list(mi_lista);
	printf("\nCreando y añadiendo un segundo nodo...\n");
	dato2 = 200;
	segundo_nodo = ft_lstnew(&dato2); 
	ft_lstadd_back(&mi_lista, segundo_nodo);
	print_list(mi_lista);
	return (0);
}
