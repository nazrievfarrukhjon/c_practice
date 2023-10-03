FROM esolang/x86asm-nasm:latest

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    build-essential \
    nano

RUN groupadd -g 1000 admin && \
    useradd -u 1000 -g admin -m -s /bin/bash admin

USER admin

WORKDIR /home/admin

CMD ["/bin/bash"]



# FROM amd64/ubuntu:latest

# # Switch to root user
# USER root

# # Install build essentials (including GCC, Clang, Nano, and ARM assembly compiler)
# RUN apt-get update && apt-get install -y build-essential clang nano binutils-aarch64-linux-gnu

# # Create a non-root user 'admin' with UID and GID set to 1000
# RUN useradd -ms /bin/bash admin

# # Switch back to the non-root user
# USER admin

# # Set the working directory to the user's home directory
# WORKDIR /home/admin

# # Entry point
# CMD ["/bin/bash"]
