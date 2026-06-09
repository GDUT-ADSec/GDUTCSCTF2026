												`````````FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /ctf

# Install socat and minimal deps
RUN apt-get update && apt-get install -y --no-install-recommends socat ca-certificates python3 \
	&& rm -rf /var/lib/apt/lists/*

# Copy only the challenge binary and make it executable
COPY pwn /ctf/pwn
RUN chmod +x /ctf/pwn

# Copy entrypoint that renders dynamic flags and writes /flag
COPY entrypoint.sh /ctf/entrypoint.sh
RUN chmod +x /ctf/entrypoint.sh

EXPOSE 1337

# Use entrypoint to render A1CTF_FLAG template (if present) and then exec the CMD
ENTRYPOINT ["/ctf/entrypoint.sh"]
CMD ["socat", "TCP-LISTEN:1337,reuseaddr,fork", "EXEC:/ctf/pwn,stderr"]
