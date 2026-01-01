#include "transaction.h"

Transaction::Transaction()
    : amount(0.0)
{
}

Transaction::Transaction(const std::string& type1,
                         double amount1,
                         const std::string& account1,
                         const std::string& date1,
                         const std::string& payment_way1,
                         const std::string& note1)
    : type(type1),
      amount(amount1),
      account(account1),
      date(date1),
      payment_way(payment_way1),
      note(note1)
{
}

std::string Transaction::getType() const
{
    return type;
}

std::string Transaction::getDate() const
{
    return date;
}

double Transaction::getAmount() const
{
    return amount;
}

std::string Transaction::getAccount() const
{
    return account;
}

std::string Transaction::getPaymentWay() const
{
    return payment_way;
}

std::string Transaction::getNote() const
{
    return note;
}
