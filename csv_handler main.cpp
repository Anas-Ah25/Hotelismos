#include "csv_handler.h"
#include <iostream>
#include <fstream>
#include <sstream>

void CSVHandler::appendData(const std::string& name, const std::string& id, const std::string& contactInfo) {
    std::ofstream outfile;
    outfile.open(filename, std::ios::app);
    if (outfile) {
        outfile << name << "," << id << "," << contactInfo << std::endl;
        outfile.close();
        std::cout << "Data appended successfully." << std::endl;
    } else {
        std::cout << "Error: could not open file for writing." << std::endl;
    }
}

void CSVHandler::searchColumn(int column, const std::string& searchTerm) {
    std::ifstream infile;
    infile.open(filename);
    if (infile) {
        data.clear();
        std::string line;
        while (getline(infile, line)) {
            std::istringstream iss(line);
            std::vector<std::string> row;
            std::string field;
            while (getline(iss, field, ',')) {
                row.push_back(field);
            }
            data.push_back(row);
        }
        infile.close();
        for (const auto& row : data) {
            if (row.size() > column && row[column] == searchTerm) {
                for (const auto& field : row) {
                    std::cout << field << " ";
                }
                std::cout << std::endl;
            }
        }
    } else {
        std::cout << "Error: could not open file for reading." << std::endl;
    }
}

void CSVHandler::writeColumn(int column, const std::string& newData) {
    std::ifstream infile;
    infile.open(filename);
    if (infile) {
        data.clear();
        std::string line;
        while (getline(infile, line)) {
            std::istringstream iss(line);
            std::vector<std::string> row;
            std::string field;
            while (getline(iss, field, ',')) {
                row.push_back(field);
            }
            data.push_back(row);
        }
        infile.close();
        std::ofstream outfile;
        outfile.open(filename);
        if (outfile) {
            for (const auto& row : data) {
                for (int i = 0; i < row.size(); ++i) {
                    if (i == column) {
                        outfile << newData << ",";
                    } else {
                        outfile << row[i] << ",";
                    }
                }
                outfile.seekp(-1, std::ios_base::cur);
                outfile << std::endl;
            }
            outfile.close();
            std::cout << "Data updated successfully." << std::endl;
        } else {
            std::cout << "Error: could not open file for writing." << std::endl;
        }
    } else {
        std::cout << "Error: could not open file for reading." << std::endl;
        }
}