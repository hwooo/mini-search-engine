#ifndef INDEXER_HPP
#define INDEXER_HPP

#include <cstdlib>
#include <ctime>

// #include <sw/redis++/redis++.h>

#include "queryParser.hpp"

#include "../modules/CSVParser.hpp"
#include "../modules/hashMap.hpp"

class Indexer {
public:
    Indexer() : id(0), title(""), qualification("") {};
    
    void createIndex(const std::string& filePath, HashMap& hashMap);

private:
    int id;
    
    std::string title;
    std::string qualification;
};

#endif
