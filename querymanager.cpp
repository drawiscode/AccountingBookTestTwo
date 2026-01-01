#include "querymanager.h"

std::vector<Transaction> QueryManager::Query_By_Amount(double money1,double money2,const std::vector<Transaction>& transactions)
{
    std::vector<Transaction> result;
    for (const auto& t : transactions)
    {
        if (t.getAmount() >= money1 && t.getAmount() <= money2)
        {
            result.push_back(t);
        }
    }
    return result;
}

std::vector<Transaction> QueryManager::Query_By_Date(const std::string& date,const std::vector<Transaction>& transactions)
{
    std::vector<Transaction> result;
    for (const auto& t : transactions)
    {
        if (t.getDate().rfind(date, 0) == 0) // startsWith
        {
            result.push_back(t);
        }
    }
    return result;
}

std::vector<Transaction> QueryManager::Query_By_Type(const std::string& type,const std::vector<Transaction>& transactions)
{
    std::vector<Transaction> result;
    for (const auto& t : transactions)
    {
        if (t.getType().rfind(type, 0) == 0)
        {
            result.push_back(t);
        }
    }
    return result;
}
