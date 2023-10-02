FROM ubuntu:latest

# Switch to root user
USER root

# Install build essentials (including GCC and Clang)
RUN apt-get update && apt-get install -y build-essential clang

# Switch back to a non-root user if desired (for security reasons)
USER nonrootuser