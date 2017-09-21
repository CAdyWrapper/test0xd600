#include <stdbool.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka/cmocka.h>
#include "disel.h"


static void F08_01_CmdErr0_StartDi0_ErrDi0_Bf0(void **state) {
    const bool cmd_err = false;
    const bool start_di = false;
    const bool err_di = false;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr0_StartDi0_ErrDi0_Bf1(void **state) {
    const bool cmd_err = false;
    const bool start_di = false;
    const bool err_di = false;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr0_StartDi0_ErrDi1_Bf0(void **state) {
    const bool cmd_err = false;
    const bool start_di = false;
    const bool err_di = true;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr0_StartDi0_ErrDi1_Bf1(void **state) {
    const bool cmd_err = false;
    const bool start_di = false;
    const bool err_di = true;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_true(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_true(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_true(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr0_StartDi1_ErrDi0_Bf0(void **state) {
    const bool cmd_err = false;
    const bool start_di = true;
    const bool err_di = false;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_true(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_true(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_true(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr0_StartDi1_ErrDi0_Bf1(void **state) {
    const bool cmd_err = false;
    const bool start_di = true;
    const bool err_di = false;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_true(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_true(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_true(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr0_StartDi1_ErrDi1_Bf0(void **state) {
    const bool cmd_err = false;
    const bool start_di = true;
    const bool err_di = true;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr0_StartDi1_ErrDi1_Bf1(void **state) {
    const bool cmd_err = false;
    const bool start_di = true;
    const bool err_di = true;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_true(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_true(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_true(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi0_ErrDi0_Bf0(void **state) {
    const bool cmd_err = true;
    const bool start_di = false;
    const bool err_di = false;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi0_ErrDi0_Bf1(void **state) {
    const bool cmd_err = true;
    const bool start_di = false;
    const bool err_di = false;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi0_ErrDi1_Bf0(void **state) {
    const bool cmd_err = true;
    const bool start_di = false;
    const bool err_di = true;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_true(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_true(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_true(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi0_ErrDi1_Bf1(void **state) {
    const bool cmd_err = true;
    const bool start_di = false;
    const bool err_di = true;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_true(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_true(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_true(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi1_ErrDi0_Bf0(void **state) {
    const bool cmd_err = true;
    const bool start_di = true;
    const bool err_di = false;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_true(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_true(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_true(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi1_ErrDi0_Bf1(void **state) {
    const bool cmd_err = true;
    const bool start_di = true;
    const bool err_di = false;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_true(bitField.bit.grou_Valid);
    assert_false(bitField.bit.grou_ErrT);

    assert_true(bitField.bit.cran_Valid);
    assert_false(bitField.bit.cran_ErrT);

    assert_true(bitField.bit.oper_Valid);
    assert_false(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi1_ErrDi1_Bf0(void **state) {
    const bool cmd_err = true;
    const bool start_di = true;
    const bool err_di = true;
    const bool bf = false;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_true(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_true(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_true(bitField.bit.oper_ErrT);
}

static void F08_01_CmdErr1_StartDi1_ErrDi1_Bf1(void **state) {
    const bool cmd_err = true;
    const bool start_di = true;
    const bool err_di = true;
    const bool bf = true;

    inputBitField.bit.sca1_can_alpha_cmd_err = cmd_err;

    inputBitField.bit.grou_start_di = start_di;
    inputBitField.bit.grou_err_di = err_di;
    inputBitField.bit.can_sca1_bf_grou = bf;

    inputBitField.bit.cran_start_di = start_di;
    inputBitField.bit.cran_err_di = err_di;
    inputBitField.bit.can_sca1_bf_cran = bf;

    inputBitField.bit.oper_start_di = start_di;
    inputBitField.bit.oper_err_di = err_di;
    inputBitField.bit.can_sca1_bf_oper = bf;

    F08_01();

    assert_false(bitField.bit.grou_Valid);
    assert_true(bitField.bit.grou_ErrT);

    assert_false(bitField.bit.cran_Valid);
    assert_true(bitField.bit.cran_ErrT);

    assert_false(bitField.bit.oper_Valid);
    assert_true(bitField.bit.oper_ErrT);
}

static void F08_04_veracity_bitField(void **state) {
    const uint32_t value = 0xA55A;
    bitField.data = value;

    uint32_t result = F08_04();

    assert_int_equal(result, value);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(F08_01_CmdErr0_StartDi0_ErrDi0_Bf0),
        cmocka_unit_test(F08_01_CmdErr0_StartDi0_ErrDi0_Bf1),
        cmocka_unit_test(F08_01_CmdErr0_StartDi0_ErrDi1_Bf0),
        cmocka_unit_test(F08_01_CmdErr0_StartDi0_ErrDi1_Bf1),
        cmocka_unit_test(F08_01_CmdErr0_StartDi1_ErrDi0_Bf0),
        cmocka_unit_test(F08_01_CmdErr0_StartDi1_ErrDi0_Bf1),
        cmocka_unit_test(F08_01_CmdErr0_StartDi1_ErrDi1_Bf0),
        cmocka_unit_test(F08_01_CmdErr0_StartDi1_ErrDi1_Bf1),
        cmocka_unit_test(F08_01_CmdErr1_StartDi0_ErrDi0_Bf0),
        cmocka_unit_test(F08_01_CmdErr1_StartDi0_ErrDi0_Bf1),
        cmocka_unit_test(F08_01_CmdErr1_StartDi0_ErrDi1_Bf0),
        cmocka_unit_test(F08_01_CmdErr1_StartDi0_ErrDi1_Bf1),
        cmocka_unit_test(F08_01_CmdErr1_StartDi1_ErrDi0_Bf0),
        cmocka_unit_test(F08_01_CmdErr1_StartDi1_ErrDi0_Bf1),
        cmocka_unit_test(F08_01_CmdErr1_StartDi1_ErrDi1_Bf0),
        cmocka_unit_test(F08_01_CmdErr1_StartDi1_ErrDi1_Bf1),
        cmocka_unit_test(F08_04_veracity_bitField),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
