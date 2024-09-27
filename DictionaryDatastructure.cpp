#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

// Template class Dictionary
template <typename K, typename V>
class Dictionary {
private:
    vector<pair<K, V>> items;  // Vector to store key-value pairs

public:
    // Add a key-value pair to the dictionary
    void add(const K& key, const V& value) {
        items.push_back(make_pair(key, value));  // Add key-value pair
    }

    // Get value for the specified key
    V getValue(const K& key) {
        for (const auto& item : items) {
            if (item.first == key) {  // If the key matches, return its value
                return item.second;
            }
        }
        throw std::runtime_error("Key not found!");  // Throw an exception if key is not found
    }

    // Overload the << operator to print the dictionary
    friend ostream& operator<<(ostream& os, const Dictionary<K, V>& dict) {
        for (const auto& item : dict.items) {
            os << item.first << " => " << item.second << endl;  // Print each key-value pair
        }
        return os;
    }
};

int main() {
    Dictionary<string, string> mapObj;
    
    // Adding key-value pairs to the dictionary
    mapObj.add("blr", "Bangaluru");
    mapObj.add("chn", "Chennai");
    mapObj.add("hyd", "Hyderabad");

    // Retrieving and printing value for the key "blr"
    cout << "Value for 'blr': " << mapObj.getValue("blr") << endl;

    // Printing the entire dictionary
    cout << mapObj;

    /*
    Expected Output:
    Value for 'blr': Bangaluru
    blr => Bangaluru
    chn => Chennai
    hyd => Hyderabad
    */
    
    return 0;
}
