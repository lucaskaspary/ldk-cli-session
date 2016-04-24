/*
 * CLICommand.h
 *
 *  Created on: 23 de abr de 2016
 *      Author: lucas
 */

#ifndef CLI_COMMAND_CLICOMMAND_H_
#define CLI_COMMAND_CLICOMMAND_H_

#include <stdint.h>
#include <string>

#include "CLI/Command/Types/CLICommandTypes.h"

namespace ldk {

class CLICommand {
public:
    std::string command_name_;
    std::string parent_name_;
    uint8_t privilege_;
    CLICommandCB_t callback_;
};

} // namespace ldk

#endif /* CLI_COMMAND_CLICOMMAND_H_ */
