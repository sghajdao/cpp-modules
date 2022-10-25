/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:38:28 by sghajdao          #+#    #+#             */
/*   Updated: 2022/08/03 13:30:42 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    if (meta == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    const Animal* j = new Dog();
    if (j == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    const Animal* i = new Cat();
    if (i == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;
}

/* int main()
{
    Animal **animal = new (Animal*[5]);
    if (animal == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    animal[5] = NULL;
    for(int i = 0; i <= 4; i++)
    {
        if ((i % 2) == 0)
        {
            animal[i] = new Cat();
            if (animal[i] == NULL)
            {
                perror("Allocation failed");
                exit(1);
            }
        }
        else
        {
            animal[i] = new Dog();
            if (animal[i] == NULL)
            {
                perror("Allocation failed");
                exit(1);
            }
        }
    }
    for(int i = 0; i <= 4; i++)
    {
        std::cout << animal[i]->getType() << std::endl;
        animal[i]->makeSound(); 
    }
    
    for(int i = 0; i <= 4; i++)
    {
        delete animal[i];
    }
    delete[] animal;
} */

/* int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    if (meta == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    const WrongAnimal* i = new WrongCat();
    if (i == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    delete meta;
    delete i;
    return 0;
}  */
