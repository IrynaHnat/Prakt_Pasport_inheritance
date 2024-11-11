#pragma once
#include "Passport.h"

const int MAX_VISAS = 10;  

class ForeignPassport : public Passport {
public:
    ForeignPassport(const string& name = "Unknown", const string& surname = "Unknown",
        const string& nationality = "Ukrainian", const string& passportNumber = "0000000000",
        const string& foreignPassportNumber = "FP0000000000");
    ~ForeignPassport();

    void setForeignPassportNumber(const string& foreignPassportNumber);
    bool addVisa(const string& visa);

    const string& getForeignPassportNumber() const;
    void print() const override;

private:
    string foreignPassportNumber;
    string visas[MAX_VISAS];  
    int visaCount = 0;        
};
