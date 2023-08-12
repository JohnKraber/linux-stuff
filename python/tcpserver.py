import socket

CONNECT = ("127.0.0.1", 9999)

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server:
    pass # do not call s.close()
    # AF_INET = IPv4
    # SOCK_STREAM = TCP
    server.bind(CONNECT)
    server.listen() # The .accept() method blocks execution and waits for an incoming connection
    conn, addr = server.accept() 
    # After .accept() provides the client socket object conn, an infinite while loop is used to loop over blocking calls to conn.recv(). 
    # This reads whatever data the client sends and echoes it back using conn.sendall().
    with conn:
        print(f"{addr} connection established.")
        while True:
            data = conn.recv(1024) # 1024 is the maximum number of bytes the server can receive
            if not data: # exit if the client doesn't send data
                break
            print(f"Data received from client: {data}")
            data = input("Specify data to send: ")
            conn.sendall(format((data, binary)))
