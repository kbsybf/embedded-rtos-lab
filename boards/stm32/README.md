# STM32 板级支持

本目录维护 STM32 系列 MCU 的板级资料与最小工程模板，覆盖基础外设、实时系统、电机控制和机器人底层控制。


## 芯片索引

| 目录 | 定位 | 重点实验 |
|---|---|---|
| [`stm32f103c8t6/`](./stm32f103c8t6/) | 入门经典 MCU，生态成熟，适合建立 STM32 外设与裸机开发基础。 | GPIO、UART、Timer、ADC、PWM、I2C、SPI、CAN 基础实验。 |
| [`stm32f407vet6/`](./stm32f407vet6/) | 进阶经典 MCU，性能和外设资源均衡，适合机器人底层控制。 | FreeRTOS、CAN、电机控制、编码器、DMA、ADC、PWM 和多任务通信。 |
| [`stm32f429igt6/`](./stm32f429igt6/) | 外设资源丰富，适合图形界面、外部存储和复杂工业控制实验。 | LCD、LTDC、SDRAM、FMC、DMA、Ethernet 和多外设协同。 |
| [`stm32h743vit6/`](./stm32h743vit6/) | 高性能 MCU，适合高实时性、多传感器和复杂机器人控制任务。 | 高速 ADC、DMA、Cache、Ethernet、FDCAN、多传感器融合和高频控制环。 |
| [`stm32g431cbt6/`](./stm32g431cbt6/) | 面向混合信号与电机控制的 MCU，适合高精度采样和控制。 | FOC、互补 PWM、ADC 同步采样、运放、比较器和电流环控制。 |

## 维护要求

- 芯片参数和外设能力必须以对应料号数据手册为准。
- 具体开发板晶振、LED、按键和接口引脚记录在芯片目录文档中。
- 可运行工程放入 `project_template/` 或后续独立项目目录。
- 公共接口优先遵循 [通用 BSP 接口](../common/bsp_interface.md)。
