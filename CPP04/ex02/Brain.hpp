/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:09:24 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/17 07:43:26 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	private:
			std::string _ideas[100];
	public: 
			Brain();
			Brain(const Brain &other);
			Brain &operator=(const Brain &other);
			~Brain();
	

};

#endif