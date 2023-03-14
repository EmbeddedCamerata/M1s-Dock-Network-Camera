# M1s-Dock-Network-Camera

通过M1s实现网络相机长时间拍摄，并在PC上获取并保存拍摄的图像，合成多帧图像为视频。

## ⛓ Prerequisites

1. [M1s_BL808_SDK](https://github.com/sipeed/M1s_BL808_SDK)；
2. 如何编译：参见[M1s_BL808_example](https://github.com/sipeed/M1s_BL808_example)；
3. M1s与PC连接至同一wifi，并注意PC的防火墙设置；

## 🛠 How to work

1. 修改BL808代码 `main.c`，连接到自己的wifi下，并且修改IP地址为自己的PC；
2. 根据 `pyproject.toml` 安装pip依赖；
3. 执行 `main.py` ；
4. 当结束拍摄后，程序将自动合成多帧图像为视频于创建的目录内；
