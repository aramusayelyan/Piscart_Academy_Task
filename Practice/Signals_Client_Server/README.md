# Interprocess Communication using Signals

This project demonstrates interprocess communication between two programs using signals in C.

## Overview

The project consists of two programs:

1. `Client.c`: Sends a message character by character to the server program.
2. `Server.c`: Receives the message character by character from the client program and reconstructs it.

## Instructions

1. Compile both `Client.c` and `Server.c` using your preferred C compiler.
2. Run the `Server` program first. It will display its process ID.
3. Run the `Client` program with the process ID of the server as an argument.
4. The client sends the message character by character to the server using signals.
5. The server receives the signals, decodes them, and reconstructs the message.

## Files

- `Client.c`: Contains the client program code.
- `Server.c`: Contains the server program code.

## Usage

Compile the programs:

```bash
gcc Client.c -o client
gcc Server.c -o server
```

Run the server:

```bash
./server
```

Run the client with the server's process ID:

```bash
./client [server_process_id]
```

