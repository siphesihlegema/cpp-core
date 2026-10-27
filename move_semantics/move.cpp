#include <cstdint>
#include <cstdio>
#include <cstring>

class String {
public:
  String() = default;
  String(const char *string) {
    printf("created!\n");
    m_Size = strlen(string);
    m_Data = new char[m_Size];
    memcpy(m_Data, string, m_Size);
  }

  String(const String &other) {
    printf("copied!\n");

    m_Size = other.m_Size;
    m_Data = new char[m_Size];
    memcpy(m_Data, other.m_Data, m_Size);
  }

  String(String &&other) noexcept {
    printf("moved!\n");

    m_Size = other.m_Size;
    m_Data = other.m_Data;

    other.m_Data = nullptr;
    other.m_Size = 0;
  }

  ~String() {
    printf("destroid!\n");
    delete[] m_Data;
  }

  void Print() {
    for (uint32_t i = 0; i < m_Size; i++) {
      printf("%c", m_Data[i]);
    }
    printf("\n");
  }

private:
  char *m_Data;
  std::uint32_t m_Size;
};

class Entity {
public:
  Entity(const String &name) : m_Name(name) {}

  Entity(const String &&name) : m_Name((String &&)name) {}

  void PrintName() { m_Name.Print(); }

private:
  String m_Name;
};

int main() {
  Entity entity(String("Sphere"));
  entity.PrintName();
}
