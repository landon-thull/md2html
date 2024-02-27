//
// Created by Landon Thull on 2/26/24.
//

#ifndef ARGS_H
#define ARGS_H

#endif //ARGS_H

#define MD_EXTENSION ".md" /* file extension for markdown files */

typedef struct {
  /// input filename
  char *file_name;

} args_t;

/// result of the @ref args_parse() function
typedef enum {
  ARGS_PARSE_NOT_ENOUGH_ARGS, /* not enough args given */
  ARGS_PARSE_INVALID_FORMAT,  /* invalid input file format given */
  ARGS_PARSE_SUCCESS,         /* args were parsed successfully */
} args_parse_result;

/** @brief Parses args for input file path
 *
 * @param args The args_t struct to store the filepath to
 * @param argc The number of args passed to the application
 * @param argv The array of args passed to the application
 *
 * @return args_parse_result
 */
extern args_parse_result args_parse(args_t *args, int argc, char **argv);