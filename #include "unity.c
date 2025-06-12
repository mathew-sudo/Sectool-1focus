#include "unity.h"
#include "../src/win98_core/os_init.h"
#include "../src/setup/auto_setup.h"

void setUp(void) {}
void tearDown(void) {}

void test_os_init_returns_success(void) {
    TEST_ASSERT_EQUAL_INT(0, os_init());
}

void test_auto_setup_returns_success(void) {
    TEST_ASSERT_EQUAL_INT(0, auto_setup());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_os_init_returns_success);
    RUN_TEST(test_auto_setup_returns_success);
    return UNITY_END();
}