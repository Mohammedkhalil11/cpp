/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:22:39 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 22:01:12 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replaceSubstring(const std::string& mainString, const std::string& searchString, const std::string& replacementString)
{
    std::string result = mainString;
    size_t position = result.find(searchString);

    while (position != std::string::npos)
	{
		result = result.substr(0, position) + replacementString + result.substr(position + searchString.length());
        position = result.find(searchString, position + replacementString.length());
    }
    return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
		exit(1);
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error opening the file." << std::endl;
		return 1;
	}
	std::string file = av[1];
	file += ".replace";
	std::ofstream outputFile(file);
	if (!outputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }
	std::string line;
    while (std::getline(inputFile, line))
	{
		outputFile << replaceSubstring(line, av[2], av[3]) << std::endl;
	}
	
}