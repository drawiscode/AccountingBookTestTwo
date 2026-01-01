#ifndef QUERYMANAGER_H
#define QUERYMANAGER_H

#include <vector>
#include <string>
#include "transaction.h"

class QueryManager
{
public:
    QueryManager() = default;

    std::vector<Transaction> Query_By_Amount(double money1,double money2,const std::vector<Transaction>& transactions);

    std::vector<Transaction> Query_By_Date(const std::string& date,const std::vector<Transaction>& transactions);

    std::vector<Transaction> Query_By_Type(const std::string& type,const std::vector<Transaction>& transactions);
};

#endif
