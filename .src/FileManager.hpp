#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "cell.hpp"
#include <memory>

class FileManager {
public:
    // Lecture d'un fichier pour charger une grille
    static std::vector<std::vector<bool>> loadFromFile(const std::string& filename, int& width, int& height);

    // Sauvegarde d'une grille dans un fichier
    static void saveToFile(const std::string& filename, const std::vector<std::vector<bool>>& grid, int width, int height);
};

#endif
