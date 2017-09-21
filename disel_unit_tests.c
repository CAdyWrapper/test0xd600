#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka/cmocka.h>
#include "disel.h"


static void veracity_bitField(void **state) {
    const uint32_t value = 0xA55A;

    bitField.data = value;

    assert_int_equal(F08_04(), value);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(veracity_bitField),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
