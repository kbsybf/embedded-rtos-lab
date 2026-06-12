# Common BSP

本目录保存跨 MCU 平台可复用的 BSP 约定和移植模板。

| 文件 | 用途 |
|---|---|
| `bsp_interface.md` | 通用 BSP 接口语义和返回值约定 |
| `board_port_template.c/.h` | 新平台移植代码骨架 |
| `board_checklist.md` | 新增开发板的完整性检查清单 |

接口层只描述机器人底层常用能力，不直接绑定具体 HAL、SDK 或 RTOS。平台实现应放在对应芯片或具体开发板目录中。
