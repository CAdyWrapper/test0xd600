#ifndef DISEL_H
#define DISEL_H

#include <stdint.h>


typedef union {
    struct {
        uint8_t grou_ErrT   : 1;
        uint8_t grou_Valid  : 1;

        uint8_t cran_ErrT   : 1;
        uint8_t cran_Valid  : 1;

        uint8_t oper_ErrT   : 1;
        uint8_t oper_Valid  : 1;

        uint8_t sg_rm_mod_di_ErrCh  : 1;
        uint8_t sg_rm_mod_ErrT      : 1;
        uint8_t sg_rm_mod_Valid     : 1;

        uint8_t os_redy_di_ErrCh    : 1;
        uint8_t os_redy_ErrT        : 1;
        uint8_t os_redy_Valid       : 1;
    } bit;
    uint32_t data;
} DiselBitField;


#ifdef UNIT_TESTING

    typedef union {
        struct {
            uint8_t sca1_can_alpha_cmd_err      : 1;

            uint8_t grou_start_di               : 1;
            uint8_t grou_err_di                 : 1;
            uint8_t can_sca1_bf_grou            : 1;

            uint8_t cran_start_di               : 1;
            uint8_t cran_err_di                 : 1;
            uint8_t can_sca1_bf_cran            : 1;

            uint8_t oper_start_di               : 1;
            uint8_t oper_err_di                 : 1;
            uint8_t can_sca1_bf_oper            : 1;

            uint8_t sg_rm_mod_di                : 1;
            uint8_t can_sg_status_bf_newmsg     : 1;
            uint8_t can_sg_status_bf_sg_rm_mod  : 1;
            uint8_t can_sg_status_bf_err        : 1;

            uint8_t os_redy_di                  : 1;
            uint8_t can_os_status_bf_newmsg     : 1;
            uint8_t can_os_status_bf_os_redy    : 1;
            uint8_t can_os_status_bf_err        : 1;
        } bit;
        uint32_t data;
    } InputBitField;

    extern InputBitField inputBitField;
    extern DiselBitField bitField;

#endif /* UNIT_TESTING */


void F08_01();
uint8_t F08_02();
uint8_t F08_03();
uint32_t F08_04();

#endif /* DISEL_H */
