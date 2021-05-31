// Test driven Development. -> Define the testcase before implementation.
#define CATCH_CONFIG_MAIN 

#include "testsender/catch.hpp"
#include "Sender/Sender_Stream.h"
#include "Sender/Sender_Stream.c"

TEST_CASE("Testcase to check input data from file") 
{
 BMS_inputtype inputvaluefetch= FileInputType;
 REQUIRE(inputvalue (inputvaluefetch) == PASS);
}

TEST_CASE("Testcase to check if the console print is happening periodically") 
{
BMS_inputtype inputvaluefetch = FileInputType;
REQUIRE(inputvalue (inputvaluefetch) == PASS);
}



// Shall choose BMS parameter : Temperature and State of charge as two input parameter for implementation.
