
#include <iostream>
#define SENT_LEN 41
int main() {

  /*   const char *names[] = {"Harry", "Hermione"};
    std::string last_arg = names[3];
    return last_arg.size(); */
  char sentence[] = "This is a sentence. This is very long one";
  char *mem = new char[SENT_LEN];

  strcpy(mem, sentence);
  std::cout << mem << std::endl;
  return EXIT_SUCCESS;
}
