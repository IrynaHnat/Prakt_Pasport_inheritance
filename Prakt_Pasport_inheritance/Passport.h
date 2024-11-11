#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Passport {
public:
    Passport(const string& name = "Unknown", const string& surname = "Unknown",
        const string& nationality = "Ukrainian", const string& passportNumber = "0000000000");
    ~Passport();

    void setName(const string& name);
    void setSurname(const string& surname);
    void setNationality(const string& nationality);
    void setPassportNumber(const string& passportNumber);

    const string& getName() const;
    const string& getSurname() const;
    const string& getNationality() const;
    const string& getPassportNumber() const;

    virtual void print() const;

protected:
    string name;
    string surname;
    string nationality;
    string passportNumber;
};
