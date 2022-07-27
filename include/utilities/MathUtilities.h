#ifndef TOOLS_INTRO_MATHUTILITIES_H
#define TOOLS_INTRO_MATHUTILITIES_H

class MailingAddress {
public:
    std::string street,city,state;
    int zipcode;

    bool equals(MailingAddress addr);

    std::string toString();

};

class MAHashTable {
public:
    static int M = 97;
    static int R = 31;
    vector<MailingAddress> table;
    static long hashInt(int i);
    static long hashString(std::string s);
    static long hashAddress(MailingAddress addr);
    void insert(MailingAddress addr);
    bool contains(MailingAddress addr);
    float getLoadFactor();
    void print()
};

#endif //TOOLS_INTRO_MATHUTILITIES_H
