/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:08:48 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 12:58:28 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &obj);
    	Cat(std::string NewType, std::string idea);
		Cat &operator=(const Cat &obj);
		Brain *getBrain() const;
		void set_Brain(Brain *other_brain);
		void makeSound() const;void compareTo(Cat const & other_cat) const;
};

#endif