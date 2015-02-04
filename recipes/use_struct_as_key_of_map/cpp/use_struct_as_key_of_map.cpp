#include<string.h>

#include<map>
#include<string>
#include<iostream>

/**
 * @struct intStringKey_t
 * @brief This strcut is int-string key for map
 */
struct intStringKey_t {
  int intKey;
  char stringKey[100];
  bool operator < (const intStringKey_t& rhs) const {
    if (intKey < rhs.intKey) {
      return true;
    }
    if (intKey > rhs.intKey) {
      return false;
    }
    if ((strcmp(stringKey, rhs.stringKey)) < 0) {
      return true;
    }
    if ((strcmp(stringKey, rhs.stringKey)) > 0) {
      return false;
    }
    return false;
  }
}; // intStringKey_t

int main(void) {
  // Create map
  std::map<intStringKey_t, std::string> sampleMap;

  // Create keys
  intStringKey_t key1 = {1, "first"};
  intStringKey_t key2 = {2, "second"};
  intStringKey_t key3 = {3, "third"};

  // Insert values with keys
  sampleMap.insert(std::map<intStringKey_t, std::string>::value_type(key1, "1stValue"));
  sampleMap.insert(std::map<intStringKey_t, std::string>::value_type(key2, "2ndValue"));
  sampleMap.insert(std::map<intStringKey_t, std::string>::value_type(key3, "3rdValue"));

  // Show all key and value
  std::map<intStringKey_t, std::string>::iterator it = sampleMap.begin();
  while(it != sampleMap.end()) {
    std::cout
      << (*it).first.intKey
      << ", "
      << (*it).first.stringKey
      << ": "
      << (*it).second
      << std::endl;
    ++it;
  }

  return 0;
}
