
using namespace std;

template <typename K, typename V>
class HashTable {
  private:
    struct Node<K, V> {
      K k;
      V v;
    };
    Node<K, V> list[7];
    V hash_function(K k);

  public:
    HashTable<K, V>();
    ~HashTable<K, V>();
    V find(K k);
    bool add(K k, V v);
    V remove(K k);
    V remove(K k, V v);

    // These are the test methods
    K test_key(V v);
    V test_value(K k);
}

template<typename K, typename V>
HashTable::HashTable<K, V>() {

}

template<typename K, typename V>
HashTable::~HashTable<K, V>() {

}

template<typename K, typename V>
bool HashTable::add(K k, V v) {
  
}

template<typename K, typename V>
K HashTable::test_key(V v) {
  return NULL;
}

template<typename K, typename V>
V HashTable::test_value(K k) {
  return NULL;
}
