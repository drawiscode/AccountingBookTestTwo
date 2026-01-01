#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include "statisticsmanager.h"
#include "transaction.h"

static std::string formatDouble(double value)
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << value;
    return oss.str();
}

std::vector<std::vector<std::string>> StatisticsManager::calculateMonthlyTotal(const std::vector<Transaction>& transactions)
{
    std::map<std::string, std::pair<double, double>> totals;

    for (const auto& t : transactions)
    {
        std::string month = t.getDate().substr(0, 7);
        double amount = t.getAmount();

        if (amount < 0)
            totals[month].first += amount;
        else
            totals[month].second += amount;
    }

    std::vector<std::vector<std::string>> results;
    for (const auto& [month, value] : totals)
    {
        results.push_back({
            month,
            formatDouble(value.first),
            formatDouble(value.second)
        });
    }
    return results;
}

std::vector<std::vector<std::string>> StatisticsManager::calculateYearlyTotal(const std::vector<Transaction>& transactions)
{
    std::map<std::string, std::pair<double, double>> totals;

    for (const auto& t : transactions)
    {
        std::string year = t.getDate().substr(0, 4);
        double amount = t.getAmount();

        if (amount < 0)
            totals[year].first += amount;
        else
            totals[year].second += amount;
    }

    std::vector<std::vector<std::string>> results;
    for (const auto& [year, value] : totals)
    {
        results.push_back({
            year,
            formatDouble(value.first),
            formatDouble(value.second)
        });
    }
    return results;
}
