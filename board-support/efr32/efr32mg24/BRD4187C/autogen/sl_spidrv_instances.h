#ifndef SL_SPIDRV_INSTANCES_H
#define SL_SPIDRV_INSTANCES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "spidrv.h"

#if defined(RS911X_WIFI) && !defined(EXP_BOARD)
extern SPIDRV_Handle_t sl_spidrv_eusart_exp_handle;
#endif //defined(RS911X_WIFI) && !defined(EXP_BOARD)

#if defined(WF200_WIFI) || defined(EXP_BOARD)
extern SPIDRV_Handle_t sl_spidrv_exp_handle;
#endif //defined(WF200_WIFI) || defined(EXP_BOARD)

void sl_spidrv_init_instances(void);

#ifdef __cplusplus
}
#endif

#endif // SL_SPIDRV_INSTANCES_H
