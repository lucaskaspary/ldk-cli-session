/*
 * TelnetServer_test.cc
 *
 *  Created on: 22 de abr de 2016
 *      Author: lucas
 */
#include <stdio.h>
#include <string>

#include "gtest/gtest.h"
#include "CLI/Session/CLISession.h"

using ldk::CLISession;

#define CLI_SESSION_SEND_COMMAND_TEST "test"
#define CLI_SESSION_SEND_COMMAND_TEST_OUTPUT "is OK!"

#define CLI_SESSION_INVALID_COMMAND "foo"
#define CLI_SESSION_INVALID_COMMAND_OUTPUT "Invalid command"

std::string str_test;

void WriteCBTest(std::string str) {
    str_test = str;
}

TEST(CLISession, instantiation)
{
    ASSERT_NO_THROW(delete (new CLISession(WriteCBTest)) );
}


TEST(CLISession, send_valid_command)
{
    str_test.clear();
    ASSERT_STREQ(str_test.c_str(), "");
    CLISession* session = new CLISession(WriteCBTest);
    session->SendCommand(CLI_SESSION_SEND_COMMAND_TEST);
    ASSERT_STREQ(str_test.c_str(), CLI_SESSION_SEND_COMMAND_TEST_OUTPUT);
}

TEST(CLISession, send_invalid_command)
{
    str_test.clear();
    ASSERT_STREQ(str_test.c_str(), "");
    CLISession* session = new CLISession(WriteCBTest);
    session->SendCommand(CLI_SESSION_INVALID_COMMAND);
    ASSERT_STREQ(str_test.c_str(), CLI_SESSION_INVALID_COMMAND_OUTPUT);
}
