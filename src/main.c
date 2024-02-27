#include <stdio.h>
#include <stdlib.h>

#include "args.h"

/** @brief Prints the usage of the md2html application
 *
 * @param argv The array of arguments passed to the application
 */
void print_usage(char **argv) {
  printf("Usage: %s <input_file>\n", argv[0]);
}

int main(int argc, char **argv) {
  args_t args;

  switch (args_parse(&args, argc, argv)) {
    case ARGS_PARSE_NOT_ENOUGH_ARGS:
      print_usage(argv);
      return EXIT_FAILURE;
    case ARGS_PARSE_INVALID_FORMAT:
      printf("Invalid input file format. Input file must have '.md' extension\n");
      return EXIT_FAILURE;
    case ARGS_PARSE_SUCCESS:
      break;
  }

  printf("%s", args.file_name);
  return EXIT_SUCCESS;
}
