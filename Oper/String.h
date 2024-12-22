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
    // ����������� �� �������������
    String();
    String(size_t length);
    // ����������� ����������� �����
    String(const char* input);
    // ����������� ����
    String(const String& other);
    // ����������� �������� 
    String(String&& other) noexcept;
    // ����� �������� �����
    void input();
    // ����� ��������� ����� �� �����
    void output() const;

    // ����������
    ~String();

    // �������� ��������� 
    String& operator=(const String& other);
    // �������� �������� ���������
    String& operator=(String&& other) noexcept;

};




#endif // STRINGG_H