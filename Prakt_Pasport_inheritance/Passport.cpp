#include "Passport.h"

Passport::Passport(const string& name, const string& surname, const string& nationality, const string& passportNumber)
    : name(name), surname(surname), nationality(nationality), passportNumber(passportNumber) {
    cout << ">>> Ctor Passport: " << passportNumber << endl;
}

Passport::~Passport() {
    cout << ">>> Dtor Passport: " << passportNumber << endl;
}

void Passport::setName(const string& name) {
    this->name = name;
}

void Passport::setSurname(const string& surname) {
    this->surname = surname;
}

void Passport::setNationality(const string& nationality) {
    this->nationality = nationality;
}

void Passport::setPassportNumber(const string& passportNumber) {
    this->passportNumber = passportNumber;
}

const string& Passport::getName() const {
    return name;
}

const string& Passport::getSurname() const {
    return surname;
}

const string& Passport::getNationality() const {
    return nationality;
}

const string& Passport::getPassportNumber() const {
    return passportNumber;
}

void Passport::print() const {
    cout << "Name            :: " << name << endl;
    cout << "Surname         :: " << surname << endl;
    cout << "Nationality     :: " << nationality << endl;
    cout << "Passport Number :: " << passportNumber << endl;
}
