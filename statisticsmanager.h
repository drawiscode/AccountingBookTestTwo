#ifndef STATISTICSMANAGER_H
#define STATISTICSMANAGER_H

#include <vector>
#include <string>
#include <map>
#include "transaction.h"

class StatisticsManager
{
public:
    StatisticsManager() = default;

    std::vector<std::vector<std::string>>
    calculateMonthlyTotal(const std::vector<Transaction>& transactions);

    std::vector<std::vector<std::string>>
    calculateYearlyTotal(const std::vector<Transaction>& transactions);
};

#endif
