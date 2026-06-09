FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /ctf
ENV A1CTF_FLAG=flag{INVALID_FLAG_CONTACT_ADMIN}

# Install socat and minimal deps
RUN apt-get update && apt-get install -y --no-install-recommends socat ca-certificates \
    && rm -rf /var/lib/apt/lists/*

# 拷贝 pwn2 题目二进制并赋予执行权限
COPY pwn2 /ctf/pwn2
RUN chmod +x /ctf/pwn2

EXPOSE 1337
# At container start, write runtime A1CTF_FLAG to /flag (if provided) then exec socat
CMD sh -lc 'if [ -n "$A1CTF_FLAG" ]; then printf "%s\n" "$A1CTF_FLAG" > /flag && chmod 444 /flag; fi; exec socat TCP-LISTEN:1337,reuseaddr,fork EXEC:/ctf/pwn2,stderr'
