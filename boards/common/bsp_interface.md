# 通用 BSP 接口

## 设计原则

- 上层模块不直接依赖厂商 HAL 或寄存器定义。
- 接口保持短小、同步语义明确，ISR 可用性需单独标注。
- 时间、长度、通道和占空比的单位必须在接口中固定。
- 未实现功能返回明确状态，不使用静默空操作掩盖错误。

## 基础接口

| 接口 | 建议原型 | 说明 |
|---|---|---|
| `BSP_Init` | `BSP_Status_t BSP_Init(void)` | 初始化时钟、Tick 和板级基础资源 |
| `BSP_DelayMs` | `void BSP_DelayMs(uint32_t ms)` | 毫秒延时；RTOS 下应避免长时间忙等 |
| `BSP_GetTick` | `uint32_t BSP_GetTick(void)` | 返回单调递增的毫秒 Tick |
| `BSP_LED_On` | `BSP_Status_t BSP_LED_On(uint8_t id)` | 打开指定板载 LED |
| `BSP_LED_Off` | `BSP_Status_t BSP_LED_Off(uint8_t id)` | 关闭指定板载 LED |
| `BSP_UART_Send` | `BSP_Status_t BSP_UART_Send(uint8_t port, const uint8_t *data, size_t len)` | 发送串口数据 |
| `BSP_CAN_Send` | `BSP_Status_t BSP_CAN_Send(uint8_t bus, uint32_t id, const uint8_t *data, uint8_t len)` | 发送 CAN 标准帧或由实现约定帧类型 |
| `BSP_PWM_SetDuty` | `BSP_Status_t BSP_PWM_SetDuty(uint8_t channel, float duty)` | 设置占空比，范围统一为 0.0–1.0 |
| `BSP_Encoder_GetCount` | `int32_t BSP_Encoder_GetCount(uint8_t channel)` | 获取编码器累计计数 |

## 状态码

`BSP_OK` 表示成功；`BSP_ERROR` 表示底层失败；`BSP_INVALID_ARG` 表示参数无效；`BSP_NOT_SUPPORTED` 表示当前平台未实现。

## 扩展要求

新增接口时应说明线程安全性、阻塞行为、ISR 可用性、单位和错误处理，并同步更新 `board_port_template.h`。
