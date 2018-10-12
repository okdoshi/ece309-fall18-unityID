// Om Doshi
// 10/11/18
// ECE 309
// HW5
#include <stdio.h>
#include <stdlib.h>

class IntegerSet {
protected:
   int size;
   int hash(int key) { return (key * 997) % size; }
public:
   IntegerSet(int htsize):size(htsize) {}  
   virtual bool insert(int) = 0;
   virtual bool search(int) const = 0;
   virtual void remove(int) = 0;
};

class IntegerSetArray : public IntegerSet(int size) {
protected:
   int table = new int[size];  // pointer to the table
public:
   // override ABC
   bool insert(int) override; //override keyword asks compiler to do extra checks
   bool search(int) const override;
   void remove(int) override;
};

bool InsertSetArray::insert(int data)
{
    for(i = size; i > 0; i--)
    {
        (if table[i] > 0)
        {
            if(i+1 > size)
            {
                return false;
            }
            else
            {
                table[i+1] = data;
            }
        }
    return true;
}

bool InsertSetArray::search(int data)
{
    int i = 0;
    for(i = 0; i <= size-1; i++)
    {
        (if table{i] == data)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool InsertSetArray::remove(int data)
{
    int i = 0; 
    for(i = 0; i <= size-1; i++)
    {
        (if table{i] == data)
        {
            table[i] = -1;
        }
    }
    return true;
}