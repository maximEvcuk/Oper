#pragma once

#ifdef STRINGG_H
#define STRINGG_H

#include <iostream>
#include <cstring>

class String {
private:
    char* str;
    size_t size;

public:
    // Конструктор за замовчуванням
    String();
    String(size_t length);
    // Конструктор ініціалізації рядку
    String(const char* input);
    // Конструктор копій
    String(const String& other);
    // Конструктор переносу 
    String(String&& other) noexcept;
    // Метод введення рядка
    void input();
    // Метод виведення рядка на екран
    void output() const;

    // Деструктор
    ~String();

    // Оператор присвоєння 
    String& operator=(const String& other);
    // Оператор переносу присвоєння
    String& operator=(String&& other) noexcept;

};




#endif // STRINGG_H