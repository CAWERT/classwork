#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Создание хеш-таблицы
    std::unordered_map<std::string, int> hash_table;
    
    // Добавление элементов
    hash_table["apple"] = 1.50;
    hash_table["banana"] = 0.99;
    hash_table["orange"] = 2.00;

    return 0
}