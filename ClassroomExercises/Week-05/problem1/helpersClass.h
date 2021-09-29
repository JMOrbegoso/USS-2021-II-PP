#include <iostream>
#include <string>
#if defined(WIN32) || defined(_WIN32) || \
    defined(__WIN32) && !defined(__CYGWIN__)

#include <windows.h>

#else

#endif

using namespace std;

class helpersClass {
 public:
  static string toLowerCase(string text);

  static string toString(int number);
  static string toString(float number);

  static char* toCharArray(string text);

  static void clearScreen();

  static void pauseProcess();

  static void addDelay(int sec);

  static void gotoxy(int x, int y);

  static string concatenateStrings(string acumulator, string toAdd,
                                   string separator);

  static bool containsText(string textBase, string textToFind);

  static string getGenre(char genre);

  static string requestText(string message, long unsigned int minLength);

  static string requestText(string message, long unsigned int minLength,
                            long unsigned int maxLength);

  static char requestGenre(string message);

  static int requestIntegerNumber(string requestMessage, string errorMessage,
                                  int min);

  static int requestIntegerNumber(string requestMessage, string errorMessage,
                                  int min, int max);

  static float requestFloatNumber(string requestMessage, string errorMessage,
                                  float min);

  static float requestFloatNumber(string requestMessage, string errorMessage,
                                  float min, float max);

  static float requestMoney(string message, float min);

  static float requestMoney(string message, float min, float max);

  static string requestDate(string message);

  static bool requestBool(string message);
};
