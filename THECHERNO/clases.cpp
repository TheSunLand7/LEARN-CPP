#include <iostream>

class Log {
public:
  enum Level { // Sirve para hacer listados del mismo tipo. Se puede cambiar de
               // tipo con ':'
    LevelError,
    LevelWarning,
    LevelInfo
  };

private:
  //m_LogLevel esta restringido a los 3 valores de enums, debido al tipo 'Level' asignado.
  Level m_LogLevel = LevelInfo; // Everything should be printed.

public:
  void SetLevel(Level level) { this->m_LogLevel = level; }

  void Error(const char *message) {
    if (m_LogLevel >= LevelError)
      std::cout << "[ERROR]: " << message << std::endl;
  }

  void Warn(const char *message) {
    if (m_LogLevel >= LevelWarning)
      std::cout << "[WARNING]: " << message << std::endl;
  }

  void Info(const char *message) {
    if (m_LogLevel >= LevelInfo)
      std::cout << "[INFO]: " << message << std::endl;
  }
};

int main() {
  Log log;
  log.SetLevel(log.LevelWarning);
  log.Warn("Hello world!");
  log.Error("Hello world!");
  log.Info("Hello world!");

  std::cin.get();
  return 0;
}