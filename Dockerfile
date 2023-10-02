FROM ubuntu:latest

# Switch to root user
USER root

# Install build essentials (including GCC and Clang)
RUN apt-get update && apt-get install -y build-essential clang nano

# Create a non-root user 'admin' with UID and GID set to 1000
RUN useradd -ms /bin/bash admin

# Switch back to the non-root user
USER admin

# Set the working directory to the user's home directory
WORKDIR /home/admin

# Entry point
CMD ["/bin/bash"]
