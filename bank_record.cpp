#include <iostream>
using namespace std;
class account_query
{
private:
    // declaring character
    char account_number[20];
    char first_name[10];
    char last_name[10];
    float total_number;

public:
    // declaring voids
    void read_data();
    void show_data();
};

// bank_record::bank_record(/* args */)
// {
// }

// bank_record::~bank_record()
// {
// }

// making void
void account_query::read_data()
{
    cout << " enter account number: ";
    cin >> account_number;
    cout << "enter first name: ";
    cin >> first_name;
    cout << "enter last name: ";
    cin >> last_name;
    cout << "enter balace: ";
    cin >> total_number;
    cout << endl;
}
void account_query::show_data()
{
    cout << "account number > " << account_number << endl;
    std::cout << "first name > " << first_name << std::endl;
    std::cout << "last name > " << last_name << std::endl;
    std::cout << "current balance > " << total_number << std::endl;
}
void write_rec()
{
    char database[10];
    ofstream database;
}

int main(int argc, char const *argv[])
{
   account_query::read_data();
    return 0;
}
