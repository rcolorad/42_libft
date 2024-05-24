/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:24:29 by rcolorad          #+#    #+#             */
/*   Updated: 2024/03/18 16:02:58 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *) malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!copy || !s1)
		return (NULL);
	ft_memcpy(copy, s1, ft_strlen(s1));
	copy[ft_strlen(s1)] = '\0';
	return (copy);
}
/*
int main() {
    const char *original = "Hola, mundo!";

    // Usando la función strdup de la biblioteca estándar
    char *copia_strdup = strdup(original);
    if (copia_strdup == NULL) {
        fprintf(stderr, "Error al duplicar la cadena con strdup.\n");
        return 1;
    }

    // Usando tu función ft_strdup
    char *copia_ft_strdup = ft_strdup(original);
    if (copia_ft_strdup == NULL) {
        fprintf(stderr, "Error al duplicar la cadena con ft_strdup.\n");
        return 1;
    }

    // Comparando las copias
    if (strcmp(copia_strdup, copia_ft_strdup) == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    // Liberando la memoria
    free(copia_strdup);
    free(copia_ft_strdup);

    return 0;
}
*/