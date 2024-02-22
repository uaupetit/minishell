/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:10:23 by aloubier          #+#    #+#             */
/*   Updated: 2023/09/25 12:10:24 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# define RESET		  "\001\033[00m\002"
# define BOLD       "\033[1m"
# define DARK       "\033[2m"
# define UNDERLINE  "\033[4m"
# define BLINK      "\033[5m"
# define REVERSE    "\033[7m"
# define CONCEALED  "\033[8m"
# define GRAY       "\033[30m"
# define GREY       "\033[30m"
# define RED        "\033[31m"
# define GREEN      "\001\033[32m\002"
# define YELLOW     "\001\033[33m\002"
# define BLUE       "\001\033[34m\002"
# define MAGENTA    "\033[35m"
# define CYAN       "\001\033[36m\002"
# define WHITE      "\033[37m"
# define BG_GRAY    "\033[40m"
# define BG_GREY    "\033[40m"
# define BG_RED     "\033[41m"
# define BG_GREEN   "\033[42m"
# define BG_YELLOW  "\033[43m"
# define BG_BLUE    "\033[44m"
# define BG_MAGENTA "\033[45m"
# define BG_CYAN    "\033[46m"
# define BG_WHITE   "\033[47m"

#endif
