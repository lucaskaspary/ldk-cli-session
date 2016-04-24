/*
 * CLISession.cc
 *
 *  Created on: 23 de abr de 2016
 *      Author: lucas
 */

#include "CLI/Session/CLISession.h"

namespace ldk {

CLISession::CLISession(cli_write_output_cb_t write_cb)
: write_output_cb_(write_cb), error_manager_(nullptr)
{
    error_manager_ = ErrorManager::GetInstance();

    write_output_cb_("Welcome to LDK-CLI");
}

CLISession::~CLISession() {
    // TODO Auto-generated destructor stub
}

void CLISession::SendCommand(std::string command) {
    if(strcmp(command.c_str(), "test") == 0) {
        write_output_cb_("is OK!");
    }
    else {
        write_output_cb_("Invalid command");
    }
}

} /* namespace ldk */
