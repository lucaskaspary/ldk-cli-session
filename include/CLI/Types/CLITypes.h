/*
 * CLITypes.h
 *
 *  Created on: 23 de abr de 2016
 *      Author: lucas
 */

#ifndef INCLUDE_CLI_TYPES_CLITYPES_H_
#define INCLUDE_CLI_TYPES_CLITYPES_H_

#include <string.h>

namespace ldk {

typedef void (*cli_write_output_cb_t)(std::string);

} // namespace ldk

#endif /* INCLUDE_CLI_TYPES_CLITYPES_H_ */
