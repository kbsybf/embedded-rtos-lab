#include "board_port_template.h"

/* Replace these stubs with the selected vendor HAL, SDK or register-level code. */

BSP_Status_t BSP_Init(void) {
    return BSP_NOT_SUPPORTED;
}

void BSP_DelayMs(uint32_t ms) {
    (void)ms;
}

uint32_t BSP_GetTick(void) {
    return 0U;
}

BSP_Status_t BSP_LED_On(uint8_t id) {
    (void)id;
    return BSP_NOT_SUPPORTED;
}

BSP_Status_t BSP_LED_Off(uint8_t id) {
    (void)id;
    return BSP_NOT_SUPPORTED;
}

BSP_Status_t BSP_UART_Send(uint8_t port, const uint8_t *data, size_t len) {
    (void)port;
    if ((data == NULL) && (len > 0U)) {
        return BSP_INVALID_ARG;
    }
    return BSP_NOT_SUPPORTED;
}

BSP_Status_t BSP_CAN_Send(uint8_t bus, uint32_t id, const uint8_t *data, uint8_t len) {
    (void)bus;
    (void)id;
    if ((data == NULL) || (len > 8U)) {
        return BSP_INVALID_ARG;
    }
    return BSP_NOT_SUPPORTED;
}

BSP_Status_t BSP_PWM_SetDuty(uint8_t channel, float duty) {
    (void)channel;
    if ((duty < 0.0F) || (duty > 1.0F)) {
        return BSP_INVALID_ARG;
    }
    return BSP_NOT_SUPPORTED;
}

int32_t BSP_Encoder_GetCount(uint8_t channel) {
    (void)channel;
    return 0;
}
