#include "Passport.h"
#include "ForeignPassport.h"

int main() {
    Passport passport("Olya", "Petrenko", "Ukrainian", "AB123456");
    passport.print();

    cout << "---------------------" << endl;

    ForeignPassport foreignPassport("Olya", "Petrenko", "Ukrainian", "AB123456", "FP987654321");
    foreignPassport.addVisa("USA");
    foreignPassport.addVisa("Canada");
    foreignPassport.print();

    
}
