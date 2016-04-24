/*
 * CLISession.h
 *
 *  Created on: 23 de abr de 2016
 *      Author: lucas
 */

#ifndef CLI_SESSION_CLISESSION_H_
#define CLI_SESSION_CLISESSION_H_

#include <string>

#include "CLI/Types/CLITypes.h"
#include "Error/Manager/ErrorManager.h"

namespace ldk {

class CLISession {
public:
    CLISession(cli_write_output_cb_t write_cb);
    ~CLISession();
    void SendCommand(std::string command);
    ErrorCode_t RegisterCommand();
private:
    cli_write_output_cb_t write_output_cb_;
    ErrorManager* error_manager_;
};

} /* namespace ldk */

#endif /* CLI_SESSION_CLISESSION_H_ */
