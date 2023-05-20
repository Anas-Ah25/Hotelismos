#ifndef CSV_HANDLER_H
#define CSV_HANDLER_H

#include <string>
#include <vector>

class CSVHandler {
public:
    void appendData(const std::string& name, const std::string& id, const std::string& contactInfo);
    void searchColumn(int column, const std::string& searchTerm);
    void writeColumn(int column, const std::string& newData);

private:
    std::string filename = "TEST.csv";
    std::vector<std::vector<std::string>> data;
};

#endif