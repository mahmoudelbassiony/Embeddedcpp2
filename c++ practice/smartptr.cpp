#include <iostream>

template <class T>
class SharedPtr
{
public:
  SharedPtr() : ref_count(new long(1)), ptr(new T)
  {
  }
  SharedPtr(const SharedPtr &copy) : ptr(copy.ptr), ref_count(copy.ref_count)
  {
    (*ref_count)++;
  }
  ~SharedPtr()
  {
    --(*ref_count);
    if (*ref_count == 0)
    {
      delete ptr;
      delete ref_count;
    }
  }
  T &operator*()
  {
    return *ptr;
  }
  T *operator->()
  {
    return ptr;
  }

private:
  T *ptr;
  long *ref_count;
};

int main()
{
  SharedPtr<int> sptr;
  *sptr = 10;
  SharedPtr<int> sptr2(sptr);
}