#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& name, const string& surname, const string& nationality,
    const string& passportNumber, const string& foreignPassportNumber)
    : Passport(name, surname, nationality, passportNumber), foreignPassportNumber(foreignPassportNumber) {
    cout << ">>> Ctor ForeignPassport: " << foreignPassportNumber << endl;
}

ForeignPassport::~ForeignPassport() {
    cout << ">>> Dtor ForeignPassport: " << foreignPassportNumber << endl;
}

void ForeignPassport::setForeignPassportNumber(const string& foreignPassportNumber) {
    this->foreignPassportNumber = foreignPassportNumber;
}

bool ForeignPassport::addVisa(const string& visa) {
    if (visaCount < MAX_VISAS) {
        visas[visaCount++] = visa;
        return true;
    }
    else {
        cout << "No more space for visas." << endl;
        return false;
    }
}

const string& ForeignPassport::getForeignPassportNumber() const {
    return foreignPassportNumber;
}

void ForeignPassport::print() const {
    Passport::print();
    cout << "Foreign Passport Number :: " << foreignPassportNumber << endl;
    cout << "Visas:" << endl;
    for (int i = 0; i < visaCount; ++i) {
        cout << "\t- " << visas[i] << endl;
    }
}
