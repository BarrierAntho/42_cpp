/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:48:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 17:37:59 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"

int	main( void )
{
	std::cout << SEP_P << std::endl;
	// SUBJECT TEST - MAIN
	{
		std::cout << "SUBJECT TEST - MAIN" << std::endl;
		std::cout << SEP_SP << std::endl;

//		const Animal	*meta = new Animal(); // ABSTRACT CLASS
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
//		meta->makeSound(); // ABSTRACT CLASS
//		delete(meta); // ABSTRACT CLASS
		delete(j);
		delete(i);
	}
	std::cout << SEP_P << std::endl;
	// SUBJECT TEST - WRONG CLASS
	{
		std::cout << "SUBJECT TEST - WRONG CLASS" << std::endl;
		std::cout << SEP_SP << std::endl;

		const WrongAnimal	*wrganimal = new WrongAnimal();
		const WrongAnimal	*wrgcat = new WrongCat();

		std::cout << wrgcat->getType() << " " << std::endl;
		wrgcat->makeSound();
		wrganimal->makeSound();
		delete(wrganimal);
		delete(wrgcat);
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST - CAT
	{
		std::cout << "PERSONAL TEST - CAT" << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Constructor" << std::endl;
		const Cat	a1;
		const Cat	*a2 = &a1;
		const Cat	&a3 = a1;

		std::cout << "a1: " << "ptr = " << &a1 << "\t" << a1 << std::endl;
		std::cout << "a2: " << "ptr = " << a2 << "\t" << *a2 << std::endl;
		std::cout << "a3: " << "ptr = " << &a3 << "\t" << a3 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Copy Constructor" << std::endl;
		const Cat	a10(a1);

		std::cout << "a10: " << "ptr = " << &a10 << "\t" << a10 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Overload operator =" << std::endl;
		const Cat	a11 = a1;
		std::cout << "a11: " << "ptr = " << &a11 << "\t" << a11 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Getter/Setter" << std::endl;
		std::cout << "a1 getType: " << a1.getType() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Functions" << std::endl;
		a1.makeSound();
		a2->makeSound();
		a3.makeSound();
		std::cout << SEP_SP << std::endl;

		std::cout << "Check Brains" << std::endl;
		std::cout << "a1: " << "brain ptr = " << &(&a1)->getBrain() << "\t" << a1 << std::endl;
		std::cout << "a10: " << "brain ptr = " << &(&a10)->getBrain() << "\t" << a10 << std::endl;
		std::cout << "a11: " << "brain ptr = " << &(&a11)->getBrain() << "\t" << a11 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Modify ideas" << std::endl;
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a10: " << "brain ideas[0] = " << (&a10)->getBrain().getIdea(0) << std::endl;
		std::cout << "a1: " << "Modification of brain ideas[0] = \"A crazy idea\"" << std::endl;
		(&a1)->getBrain().setIdea(0, "A crazy idea");
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a10: " << "brain ideas[0] = " << (&a10)->getBrain().getIdea(0) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Check modification brain ideas" << std::endl;
		Cat	a20;
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a20: " << "brain ideas[0] = " << (&a10)->getBrain().getIdea(0) << std::endl;
		a20 = a1;
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a20: " << "brain ideas[0] = " << (&a20)->getBrain().getIdea(0) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Destructor" << std::endl;
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST - DOG
	{
		std::cout << "PERSONAL TEST - DOG" << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Constructor" << std::endl;
		const Dog	a1;
		const Dog	*a2 = &a1;
		const Dog	&a3 = a1;

		std::cout << "a1: " << "ptr = " << &a1 << "\t" << a1 << std::endl;
		std::cout << "a2: " << "ptr = " << a2 << "\t" << *a2 << std::endl;
		std::cout << "a3: " << "ptr = " << &a3 << "\t" << a3 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Copy Constructor" << std::endl;
		const Dog	a10(a1);

		std::cout << "a10: " << "ptr = " << &a10 << "\t" << a10 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Overload operator =" << std::endl;
		const Dog	a11 = a1;
		std::cout << "a11: " << "ptr = " << &a11 << "\t" << a11 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Getter/Setter" << std::endl;
		std::cout << "a1 getType: " << a1.getType() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Functions" << std::endl;
		a1.makeSound();
		a2->makeSound();
		a3.makeSound();
		std::cout << SEP_SP << std::endl;

		std::cout << "Check Brains" << std::endl;
		std::cout << "a1: " << "brain ptr = " << &(&a1)->getBrain() << "\t" << a1 << std::endl;
		std::cout << "a10: " << "brain ptr = " << &(&a10)->getBrain() << "\t" << a10 << std::endl;
		std::cout << "a11: " << "brain ptr = " << &(&a11)->getBrain() << "\t" << a11 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Modify ideas" << std::endl;
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a10: " << "brain ideas[0] = " << (&a10)->getBrain().getIdea(0) << std::endl;
		std::cout << "a1: " << "Modification of brain ideas[0] = \"A crazy idea\"" << std::endl;
		(&a1)->getBrain().setIdea(0, "A crazy idea");
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a10: " << "brain ideas[0] = " << (&a10)->getBrain().getIdea(0) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Check modification brain ideas" << std::endl;
		Dog	a20;
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a20: " << "brain ideas[0] = " << (&a10)->getBrain().getIdea(0) << std::endl;
		a20 = a1;
		std::cout << "a1: " << "brain ideas[0] = " << (&a1)->getBrain().getIdea(0) << std::endl;
		std::cout << "a20: " << "brain ideas[0] = " << (&a20)->getBrain().getIdea(0) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Destructor" << std::endl;
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST - ANIMAL AND CAT
	{
		std::cout << "PERSONAL TEST - ANIMAL AND CAT" << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Constructor" << std::endl;
		const Animal	*a1 = new Cat();
		const Animal	*a2 = a1;
		const Animal	&a3 = *a1;

		std::cout << "a1: " << "ptr = " << a1 << "\t" << *a1 << std::endl;
		std::cout << "a2: " << "ptr = " << a2 << "\t" << *a2 << std::endl;
		std::cout << "a3: " << "ptr = " << &a3 << "\t" << a3 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Copy Constructor" << std::endl;
		const Animal	a10(*a1);

		std::cout << "a10: " << "ptr = " << &a10 << "\t" << a10 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Overload operator =" << std::endl;
		const Animal	a11 = *a1;
		std::cout << "a11: " << "ptr = " << &a11 << "\t" << a11 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Getter/Setter" << std::endl;
		std::cout << "a1 getType: " << a1->getType() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Functions" << std::endl;
		a1->makeSound();
		a2->makeSound();
		(&a3)->makeSound();
		std::cout << SEP_SP << std::endl;

		std::cout << "Destructor" << std::endl;
		delete(a1);
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST - ANIMAL AND DOG
	{
		std::cout << "PERSONAL TEST - ANIMAL AND DOG" << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Constructor" << std::endl;
		const Animal	*a1 = new Dog();
		const Animal	*a2 = a1;
		const Animal	&a3 = *a1;

		std::cout << "a1: " << "ptr = " << a1 << "\t" << *a1 << std::endl;
		std::cout << "a2: " << "ptr = " << a2 << "\t" << *a2 << std::endl;
		std::cout << "a3: " << "ptr = " << &a3 << "\t" << a3 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Copy Constructor" << std::endl;
		const Animal	a10(*a1);

		std::cout << "a10: " << "ptr = " << &a10 << "\t" << a10 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Overload operator =" << std::endl;
		const Animal	a11 = *a1;
		std::cout << "a11: " << "ptr = " << &a11 << "\t" << a11 << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Getter/Setter" << std::endl;
		std::cout << "a1 getType: " << a1->getType() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "Functions" << std::endl;
		a1->makeSound();
		a2->makeSound();
		(&a3)->makeSound();
		std::cout << SEP_SP << std::endl;

		std::cout << "Destructor" << std::endl;
		delete(a1);
	}
	return (0);
}
