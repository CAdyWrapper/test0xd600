#include "disel.h"
#include <stdbool.h>


#ifdef UNIT_TESTING

    #define SCA1_CAN_alpha_CMD_ERR      inputBitField.bit.sca1_can_alpha_cmd_err

    #define GROU_START_DI               inputBitField.bit.grou_start_di
    #define GROU_ERR_DI                 inputBitField.bit.grou_err_di
    #define CAN_SCA1_BF_GROU            inputBitField.bit.can_sca1_bf_grou

    #define CRAN_START_DI               inputBitField.bit.cran_start_di
    #define CRAN_ERR_DI                 inputBitField.bit.cran_err_di
    #define CAN_SCA1_BF_CRAN            inputBitField.bit.can_sca1_bf_cran

    #define OPER_START_DI               inputBitField.bit.oper_start_di
    #define OPER_ERR_DI                 inputBitField.bit.oper_err_di
    #define CAN_SCA1_BF_OPER            inputBitField.bit.can_sca1_bf_oper

    #define SG_RM_MOD_DI                inputBitField.bit.sg_rm_mod_di
    #define CAN_SG_STATUS_BF_NEWMSG     inputBitField.bit.can_sg_status_bf_newmsg
    #define CAN_SG_STATUS_BF_SG_RM_MOD  inputBitField.bit.can_sg_status_bf_sg_rm_mod
    #define CAN_SG_STATUS_BF_ERR        inputBitField.bit.can_sg_status_bf_err

    #define OS_REDY_DI                  inputBitField.bit.os_redy_di
    #define CAN_OS_STATUS_BF_NEWMSG     inputBitField.bit.can_os_status_bf_newmsg
    #define CAN_OS_STATUS_BF_OS_REDY    inputBitField.bit.can_os_status_bf_os_redy
    #define CAN_OS_STATUS_BF_ERR        inputBitField.bit.can_os_status_bf_err

    InputBitField inputBitField;

#else

    #include "gpio.h"
    #include "ctrl.h"

    #define SCA1_CAN_alpha_CMD_ERR      xb_can_get_sca1_bf_bit(MSG_CMD_ERR)

    #define GROU_START_DI               xb_gpio_get_bf_bit(GROU_START_DI)
    #define GROU_ERR_DI                 xb_gpio_get_bf_bit(GROU_ERR_DI)
    #define CAN_SCA1_BF_GROU            xb_can_get_sca1_bf_bit(GROU_CAN)

    #define CRAN_START_DI               xb_gpio_get_bf_bit(CRAN_START_DI)
    #define CRAN_ERR_DI                 xb_gpio_get_bf_bit(CRAN_ERR_DI)
    #define CAN_SCA1_BF_CRAN            xb_can_get_sca1_bf_bit(CRAN_CAN)

    #define OPER_START_DI               xb_gpio_get_bf_bit(OPER_START_DI)
    #define OPER_ERR_DI                 xb_gpio_get_bf_bit(OPER_ERR_DI)
    #define CAN_SCA1_BF_OPER            xb_can_get_sca1_bf_bit(OPER_CAN)

    #define SG_RM_MOD_DI                0		// n/a
    #define CAN_SG_STATUS_BF_NEWMSG     0		// n/a
    #define CAN_SG_STATUS_BF_SG_RM_MOD  0		// n/a
    #define CAN_SG_STATUS_BF_ERR        0		// n/a

    #define OS_REDY_DI                  0		// n/a
    #define CAN_OS_STATUS_BF_NEWMSG     0		// n/a
    #define CAN_OS_STATUS_BF_OS_REDY    0		// n/a
    #define CAN_OS_STATUS_BF_ERR        0		// n/a

#endif /* UNIT_TESTING */


#define GROU_ErrT           bitField.bit.cran_ErrT
#define GROU_Valid          bitField.bit.cran_Valid

#define CRAN_ErrT           bitField.bit.grou_ErrT
#define CRAN_Valid          bitField.bit.grou_Valid

#define OPER_ErrT           bitField.bit.oper_ErrT
#define OPER_Valid          bitField.bit.oper_Valid

#define SG_RM_MOD_DI_ErrCh  bitField.bit.sg_rm_mod_di_ErrCh
#define SG_RM_MOD_ErrT      bitField.bit.sg_rm_mod_ErrT
#define SG_RM_MOD_Valid     bitField.bit.sg_rm_mod_Valid

#define OS_REDY_DI_ErrCh    bitField.bit.os_redy_di_ErrCh
#define OS_REDY_ErrT        bitField.bit.os_redy_ErrT
#define OS_REDY_Valid       bitField.bit.os_redy_Valid


DiselBitField bitField;


#define F08_01_X(x_start_di, x_err_di, can_sca1_bf_x, x_valid, x_errT) \
{ \
    x_errT = x_err_di && SCA1_CAN_alpha_CMD_ERR; \
    if(x_errT) \
        x_valid = false; \
    else { \
        if (x_err_di) \
            x_valid = can_sca1_bf_x; \
        else \
            x_valid = x_start_di; \
    } \
}


void F08_01()
{
    F08_01_X(GROU_START_DI, GROU_ERR_DI, CAN_SCA1_BF_GROU, GROU_Valid, GROU_ErrT);
    F08_01_X(CRAN_START_DI, CRAN_ERR_DI, CAN_SCA1_BF_CRAN, CRAN_Valid, CRAN_ErrT);
    F08_01_X(OPER_START_DI, OPER_ERR_DI, CAN_SCA1_BF_OPER, OPER_Valid, OPER_ErrT);
}

uint8_t F08_02()
{
    return SG_RM_MOD_Valid;
}

uint8_t F08_03()
{
    return OS_REDY_Valid;
}

uint32_t F08_04()
{
    return bitField.data;
}
