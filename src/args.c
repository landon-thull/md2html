//
// Created by Landon Thull on 2/26/24.
//

#include "args.h"

#include <stddef.h>
#include <string.h>

const char *get_file_ext(char *filename) {
  return strrchr(filename, '.');
}

extern args_parse_result
args_parse(args_t *args, int argc, char **argv) {
  args->file_name = NULL;

  if (argc != 2) {
    return ARGS_PARSE_NOT_ENOUGH_ARGS;
  }

  char *file_name = argv[1];

  const char *file_ext = get_file_ext(file_name);

  if (file_ext == NULL || strcmp(file_ext, MD_EXTENSION) != 0) {
    return ARGS_PARSE_INVALID_FORMAT;
  }

  args->file_name = file_name;

  return ARGS_PARSE_SUCCESS;
}
