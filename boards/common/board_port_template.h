#ifndef BOARD_PORT_TEMPLATE_H
#define BOARD_PORT_TEMPLATE_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    BSP_OK = 0,
    BSP_ERROR = -1,
    BSP_INVALID_ARG = -2,
    BSP_NOT_SUPPORTED = -3
} BSP_Status_t;

BSP_Status_t BSP_Init(void);
void BSP_DelayMs(uint32_t ms);
uint32_t BSP_GetTick(void);

BSP_Status_t BSP_LED_On(uint8_t id);
BSP_Status_t BSP_LED_Off(uint8_t id);
BSP_Status_t BSP_UART_Send(uint8_t port, const uint8_t *data, size_t len);
BSP_Status_t BSP_CAN_Send(uint8_t bus, uint32_t id, const uint8_t *data, uint8_t len);
BSP_Status_t BSP_PWM_SetDuty(uint8_t channel, float duty);
int32_t BSP_Encoder_GetCount(uint8_t channel);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_PORT_TEMPLATE_H */
