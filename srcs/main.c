/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:05:50 by lduheron          #+#    #+#             */
/*   Updated: 2023/09/18 14:46:49 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
		parsing(argv[1]);
	else
		error_message(ERROR_ARG);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		if (is_valid_extension(argv[1], ".xpm") == SUCCESS)
// 			printf("SUCCESS\n");
// 	return (0);
// }
