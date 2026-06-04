# GDUTCSCTF2026

本仓库存放了广东工业大学计算机学院 2026 年网安卫士比赛（GDUTCSCTF）的题目源码和官方/选手 Writeup

> [!warning]
>
> **本次比赛题目源码对应仓库有许可证声明的，可在许可证许可范围内进行合理使用；无许可证声明的，不可用于商业比赛，出题人保留一切权利**

## 题目

### Blockchain

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| WEBWEBWEB | Normal | | Ron |

### Crypto

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| dlp | Normal | | Stellars |
| Hard_RSA | Hard | | Stellars |
| base | Expert | | Stellars |
| Subtrop | Master | | Stellars |
| bagua | Easy | | ...... |
| double_crypto | Easy | | 偏转中轴 |
| otru | Hard | | 時雨てる |

### Forensic

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| Secret in Chatting | Hard | | Luminoria |

### Misc

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| 新年快乐！ | Normal | | Luminoria |
| Crack Me | Normal | | Luminoria |
| 我是谁？ | Easy | | Luminoria |
| Github Never Forget | Normal | | xihale |
| 真·签到 | Easy | | Luminoria |
| Setup | Hard | | Luminoria |
| 猜猜数字喵 | Hard | | rk |
| 调查问卷 | Easy | | Luminoria |

### PWN

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| ezstack | Easy | | Luminoria |
| nopnopnop | Easy | | lad |
| ezstring | Easy | | lad |
| baseh | Normal | | lad |

### Reverse

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| Ez_Tea | Hard | | Kawasakikidou |
| de_Shell | Expert | | Kawasakikidou |
| Ez_Aim | Normal | | Jeremiah & rusty |
| Assembly_recovery | Normal | | Kawasakikidou |
| 入 | Easy | | EmA |
| 人 | Easy | | EmA |
| interactivideo | Master | | rk |
| brainfrick | Expert | | rk |
| Ez_Driver | Expert | | Jeremiah |
| nyah | Normal | | rk |

### Web

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| Image Service on AWS | Expert | | Luminoria |
| who_says_web3_isnt_web | Easy | | Ron |
| Hidden Secret | Easy | | Luminoria |
| CVE-2025-55182 | Easy | | 华闰 |
| test_please_ignore | Normal | | rusty |
| 魔法少女ノ魔女学園 | Normal | | rk |
| Chatting Platform | Hard | | Luminoria |
| Fast Hands | Hard | | Luminoria |

### 如何使用

#### 仓库克隆

首先先克隆本仓库

```bash
$ git clone --recursive https://github.com/GDUT-ADSec/GDUTCSCTF2026.git
```

#### Docker 镜像构建及运行

对于使用了 Docker 容器的题目，你需要先构建 Docker 镜像，这里给出可行的命令（注意替换）

```bash
$ docker build -t <your_image_tag_here> .
```

这将从当前命令行所在目录开始构建镜像

随后通过以下指令运行 Docker 容器（注意替换）

```bash
$ docker run --name <your_container_name_here> -e "A1CTF_FLAG=<your_flag_here>" -P --rm -it <your_image_tag_here>
```

运行容器后可通过以下指令查看端口映射信息

```bash
$ docker container port <your_container_name_here>
```

## Writeup

我们鼓励选手将自己的 Writeup 共享到本仓库，你只需要在 writeup 文件夹内新建一个文件夹，文件夹名为你的 id（[a-zA-Z0-9\-_]），然后将你的 writeup 文件命名为 README.md，并将你用到的图片放到此文件夹下，向我们提交 PR 即可

- [A&D Security Lab (Official)](/writeup/adsec)