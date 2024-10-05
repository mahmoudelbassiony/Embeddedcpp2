#include <iostream>
#include <string.h>
#include <stdint.h>
class String
{
public:
  String() = default;
  String(const char *string)
  {
    printf("Created!\n");
    m_size = strlen(string);
    m_Data = new char[m_size];
    memcpy(m_Data, string, m_size);
  }

  String(const String &other)
  {
    printf("Copied!\n");
    m_size = other.m_size;
    m_Data = new char[m_size];
    memcpy(m_Data, other.m_Data, m_size);
  }

  // Move constructor.
  String(String &&other) noexcept
  {
    printf("Moved!\n");

    m_size = other.m_size;
    m_Data = other.m_Data;

    other.m_Data = nullptr;
    other.m_size = 0;
  }

  String &operator=(String &&other) noexcept
  {
    printf("Moved operator!\n");
    if (this != &other)
    {
      delete[] m_Data;
      m_size = other.m_size;
      m_Data = other.m_Data;

      other.m_Data = nullptr;
      other.m_size = 0;
    }
    return *this;
  }

  ~String()
  {
    printf("Deleted!\n");
    delete[] m_Data;
  }

private:
  char *m_Data;
  uint32_t m_size;
};

int main()
{

  String str("Omar");
  String src("Name");
  String dest; // Here uses constructor.

  dest = std::move(dest); // Here uses assignment operator.

  std::cin.get();
}