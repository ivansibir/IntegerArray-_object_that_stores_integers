#pragma once
#include <iostream>
#include <exception>

class bad_range : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "Exception: You are out of range.";
    }
};

class bad_length : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "Exception: The length of the array is not suitable.";
    }
};

class IntArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntArray();
    IntArray(int length);
    void reallocate(int newLength);
    void resize(int newLength);
    IntArray(const IntArray& a);
    IntArray& operator=(const IntArray& a);
    void insertBefore(int value, int index);
    void remove(int index);
    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    int getLength() const;
    int& operator[](int index);
    ~IntArray();

private:
    void erase();
};