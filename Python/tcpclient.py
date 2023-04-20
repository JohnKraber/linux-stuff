import socket

CONNECT = ("127.0.0.1", 9999)

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server:
    server.connect(CONNECT)
    server.sendto(b"Hello world!", CONNECT) # b sets the encoding as binary
    data = server.recv(1024)

print(f"Data received from server: {data!r}")