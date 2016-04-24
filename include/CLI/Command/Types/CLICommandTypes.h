/*
 * CLICommandTypes.h
 *
 *  Created on: 23 de abr de 2016
 *      Author: lucas
 */

#ifndef INCLUDE_CLI_COMMAND_TYPES_CLICOMMANDTYPES_H_
#define INCLUDE_CLI_COMMAND_TYPES_CLICOMMANDTYPES_H_

#include "Common/Types/CommonTypes.h"

namespace ldk {

/**
 * \brief The callback type to be called when a valid command is typed
 */
typedef ErrorCode_t (*CLICommandCB_t)(uint32_t);

} // namespace ldk

#endif /* INCLUDE_CLI_COMMAND_TYPES_CLICOMMANDTYPES_H_ */
