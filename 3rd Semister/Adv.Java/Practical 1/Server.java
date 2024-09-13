import java.net.ServerSocket;
import java.net.Socket;
import java.util.*;
import java.io.*;

class Server{
	ServerSocket server;
	Socket socket;
	BufferedReader br;
	PrintWriter out;

	public Server(){
		try{
			server = new ServerSocket(7777);
			socket = server.accept();
			System.out.println("...");
			br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new PrintWriter(socket.getOutputStream());
			startReading();
			startWriting();
		}catch(Exception e){
			System.out.println(e);
		}
	}

	public void startReading(){
		Runnable r1 = ()->{
			while(true){
				try{
					String msg = br.readLine();
					if(msg.equals("...")){
						System.out.println("Client terminated the chat");
						break;
					}
					System.out.println("Client: "+msg);
				}catch(Exception e){
					System.out.println(e);
				}
			}
		};
		new Thread(r1).start();
	}

	public void startWriting(){
		Runnable r2 = ()->{
			while(true){
				try{
					BufferedReader br1 = new BufferedReader(new InputStreamReader(System.in));
					String content = br1.readLine();
					out.println(content);
					out.flush();
				}catch(Exception e){
					System.out.println(e);
				}
			}
		};
		new Thread(r2).start();
	}
	public static void main(String[] args){
		System.out.println("This is server ");
		new Server();
	}
	
}