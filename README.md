# GDUTCSCTF2026

本仓库存放了广东工业大学计算机学院 2026 年网安卫士比赛（GDUTCSCTF）的题目源码和官方/选手 Writeup

> [!warning]
>
> **本次比赛题目源码对应仓库有许可证声明的，可在许可证许可范围内进行合理使用；无许可证声明的，不可用于商业比赛，出题人保留一切权利**

> [!important]
>
> 题目附件下载：https://github.com/GDUT-ADSec/GDUTCSCTF2026/releases/tag/attachment

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
| Secret in Chatting | Hard | [link](https://github.com/GDUTMeow-Challenges/Challenge-Secret-in-Chatting) | Luminoria |

### Misc

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| 新年快乐！ | Normal | [link](https://github.com/GDUTMeow-Challenges/Challenge-2026HappyNewYear) | Luminoria |
| Crack Me | Normal | [link](https://github.com/GDUTMeow-Challenges/Challenge-CrackMe) | Luminoria |
| 我是谁？ | Easy | [link](https://github.com/GDUTMeow-Challenges/Challenge-whoami) | Luminoria |
| Github Never Forget | Normal | | xihale |
| 真·签到 | Easy | [link](https://github.com/GDUTMeow-Challenges/Challenge-Hello-GDUTCSCTF2026) | Luminoria |
| Setup | Hard | [link](https://github.com/GDUTMeow-Challenges/Challenge-Setup) | Luminoria |
| 猜猜数字喵 | Hard | [Link](https://github.com/ricky8955555/gdutcsctf-2026-challenges/tree/main/challenges/guess-number) | Phrinky |

### PWN

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| ezstack | Easy | [link](https://github.com/GDUTMeow-Challenges/Challenge-ezstack) | Luminoria |
| nopnopnop | Normal | [link](https://github.com/GDUT-ADSec/GDUTCSCTF2026/tree/master/challenges/pwn/nopnopnop)| lad |
| ezstring | Easy | [link](https://github.com/GDUT-ADSec/GDUTCSCTF2026/tree/master/challenges/pwn/ezstring)| lad |
| baseh | Normal | [link](https://github.com/GDUT-ADSec/GDUTCSCTF2026/tree/master/challenges/pwn/baseh)| lad |

### Reverse

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| Ez_Tea | Hard | [Link](https://github.com/Kawasakikidou/gdutsecctf2026/tree/main/ez-tea) | Kawasakikidou |
| de_Shell | Expert | [Link](https://github.com/Kawasakikidou/gdutsecctf2026/tree/main/de-shell) | Kawasakikidou |
| Ez_Aim | Normal | | Jeremiah & rusty |
| Assembly_recovery | Normal | [Link](https://github.com/Kawasakikidou/gdutsecctf2026/tree/main/assembly-recovery) | Kawasakikidou |
| 入 | Easy | | EmA |
| 人 | Easy | | EmA |
| interactivideo | Master | [Link](https://github.com/ricky8955555/gdutcsctf-2026-challenges/tree/main/challenges/interactivideo) | Phrinky |
| brainfrick | Expert | [Link](https://github.com/ricky8955555/gdutcsctf-2026-challenges/tree/main/challenges/brainfrick) | Phrinky |
| Ez_Driver | Expert | | Jeremiah |
| nyah | Normal | [Link](https://github.com/ricky8955555/gdutcsctf-2026-challenges/tree/main/challenges/nyah) | Phrinky |

### Web

| 题目名称 | 题目难度 | 题目仓库链接 | 出题人 |
| --- | --- | --- | --- |
| Image Service on AWS | Expert | [link](https://github.com/GDUTMeow-Challenges/Challenge-Image-Service-on-AWS) | Luminoria |
| who_says_web3_isnt_web | Easy | | Ron |
| Hidden Secret | Easy | [link](./challenges/web/hidden-secret) | Luminoria |
| CVE-2025-55182 | Easy | [link](./challenges/web/CVE-2025-55182) | 华闰 |
| test_please_ignore | Normal | | rusty |
| 魔法少女ノ魔女学園 | Normal | [Link](https://github.com/ricky8955555/gdutcsctf-2026-challenges/tree/main/challenges/manogakuen) | Phrinky |
| Chatting Platform | Hard | [link](https://github.com/GDUTMeow-Challenges/Challenge-Chatting-Platform) | Luminoria |
| Fast Hands | Hard | [link](https://github.com/GDUTMeow-Challenges/Challenge-Fast-Hands) | Luminoria |

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
