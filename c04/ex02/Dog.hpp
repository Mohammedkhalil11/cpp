/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:17:32 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 13:17:30 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
    	Dog(std::string NewType, std::string idea);
		Dog &operator=(const Dog &obj);
		void makeSound() const;
		void set_Brain(Brain *other_brain);
		Brain *getBrain() const;
		void compareTo(Dog const & other_dog) const;
};

#endif