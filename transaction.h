#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction
{
private:
    std::string type;
    double amount;                 // 负数代表支出，正数代表收入
    std::string account;            // 对方账户
    std::string date;               // 交易日期 YYYY-MM-DD
    std::string payment_way;        // 支付方式
    std::string note;               // 备注

public:
    Transaction();
    Transaction(const std::string& type1,
                double amount1,
                const std::string& account1,
                const std::string& date1,
                const std::string& payment_way1,
                const std::string& note1);

    std::string getType() const;
    std::string getDate() const;
    double getAmount() const;
    std::string getAccount() const;
    std::string getPaymentWay() const;
    std::string getNote() const;
};

#endif // TRANSACTION_H
