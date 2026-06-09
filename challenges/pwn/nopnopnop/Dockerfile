FROM python:3.12-slim-bookworm

ENV DEBIAN_FRONTEND=noninteractive
WORKDIR /ctf

# Copy challenge binary, relay server, and entrypoint
COPY warmup /ctf/warmup
COPY server.py /ctf/server.py
COPY entrypoint.sh /ctf/entrypoint.sh
RUN chmod +x /ctf/entrypoint.sh /ctf/warmup

EXPOSE 1337

# Standard entrypoint preserves `A1CTF_FLAG` and execs the TCP relay
ENTRYPOINT ["/ctf/entrypoint.sh"]
CMD ["python3", "/ctf/server.py"]
