# Embedded & RTOS Lab

> MCU、外设驱动、通信协议、FreeRTOS 与实时嵌入式系统实验室。

[![Status](https://img.shields.io/badge/status-building-22c55e?style=flat-square)](./ROADMAP.md)
[![Stage](https://img.shields.io/badge/stage-02%20%C2%B7%20Embedded%20Systems-38bdf8?style=flat-square)](https://github.com/kbsybf)
[![Profile](https://img.shields.io/badge/profile-kbsybf-111827?style=flat-square&logo=github)](https://github.com/kbsybf)

## 定位

这是 YBF 机器人技术成长体系中的 **02 · Embedded Systems** 仓库。仓库强调长期维护、最小可运行示例、实验可复现和真实工程复盘。

## 建设目标

- 形成可靠的驱动与板级调试能力
- 理解实时调度、同步与资源约束
- 构建可复用的机器人嵌入式模块

## 目录结构

```text
.
├── boards/
├── drivers/
├── peripherals/
├── protocols/
├── freertos/
├── projects/
├── hardware/
└── docs/
```

| 目录 | 职责 |
|---|---|
| `boards/` | 不同 MCU 与开发板的启动、配置和板级支持。 |
| `drivers/` | 可复用的设备驱动与硬件抽象。 |
| `peripherals/` | GPIO、Timer、ADC、PWM、DMA 等外设实验。 |
| `protocols/` | UART、SPI、I2C、CAN 等通信协议。 |
| `freertos/` | 任务、队列、信号量、内存与实时性实验。 |
| `projects/` | 组合多个模块的嵌入式系统项目。 |
| `hardware/` | 原理图、接口定义、BOM 与硬件说明。 |
| `docs/` | 调试记录、设计说明和工程规范。 |

## 当前状态

- [x] 初始化仓库结构与维护规范
- [ ] 补充第一批可运行示例
- [ ] 建立测试或实验验证流程
- [ ] 发布阶段性学习总结

具体计划见 [ROADMAP.md](./ROADMAP.md)，版本变化见 [CHANGELOG.md](./CHANGELOG.md)。

## 内容规范

每个实验或项目应尽可能说明：

1. 问题背景与目标
2. 环境、硬件与依赖
3. 核心原理和设计选择
4. 运行、测试或复现步骤
5. 实验结果与已知限制
6. 失败现象、调试过程与下一步

## 机器人技术成长体系

- [cpp-systems-lab](https://github.com/kbsybf/cpp-systems-lab) — 面向机器人研发的 C/C++、Linux、并发、构建与调试实验室。
- [embedded-rtos-lab](https://github.com/kbsybf/embedded-rtos-lab) — MCU、外设驱动、通信协议、FreeRTOS 与实时嵌入式系统实验室。
- [motor-control-lab](https://github.com/kbsybf/motor-control-lab) — 电机建模、FOC、控制器设计、固件实现与实验数据分析。
- [ros2-robotics-lab](https://github.com/kbsybf/ros2-robotics-lab) — ROS 2 通信、TF、URDF、Nav2、MoveIt 2、仿真与机器人系统集成。
- [robotics-algorithms-lab](https://github.com/kbsybf/robotics-algorithms-lab) — 机器人运动学、动力学、估计、规划、优化与控制算法实现。
- [embodied-ai-lab](https://github.com/kbsybf/embodied-ai-lab) — 模仿学习、强化学习、Diffusion Policy、VLM 与 VLA 研究实验。
- [robotics-knowledge-base](https://github.com/kbsybf/robotics-knowledge-base) — 机器人技术笔记、论文阅读、产业研究与长期知识索引。

综合展示入口：[GitHub Profile](https://github.com/kbsybf) · [GitHub Pages](https://kbsybf.github.io/kbsybf/)

## License

Code is released under the [MIT License](./LICENSE). Notes and referenced materials retain their original attribution requirements.
