#include <iostream>
using namespace std;

class Item {
private:
    int _key;
    int _val;

public:
    Item(int key = 0, int val = 0) : _key(key), _val(val) {}

    bool operator>(const Item& other) const {
        return _val > other._val;
    }

    int getKey() const {
        return _key;
    }

    int getVal() const {
        return _val;
    }

};

ostream& operator<<(ostream& out, const Item& item) {
    out << "(" << item.getKey() << ", " << item.getVal() << ")";
    return out;
}