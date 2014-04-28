package fileio2;

import java.net.Socket;

public interface ConnectListener {
    public void handleConnect(Socket s);

}