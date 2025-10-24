/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package project.mavenproject1;

import java.util.*;
import java.net.*;
import java.io.*;

public class Test_TongHop {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("203.162.10.109", 2206);
        InputStream in = new InputStream();
        OutputStream out = new OutputStream();
        
        String ma = "B22DCCN037;code";
        out.write(ma.getBytes());
        out.flush();
        
        byte buffer[] = new byte[1024];
        int len = in.read(buffer);
        String s = new String(buffer,0,len).trim();
        String str[] = s.split("\\s+");
        
    }
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2207);
        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        
        String ma = "B22DCCN037;code";
        out.write(ma);
        out.newLine();
        out.flush();
        
        String s = in.readLine().trim();
    }
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2208);
        DataInputStream in = new DataInputStream(socket.getInputStream());
        DataOutputStream out = new DataOutputStream(socket.getOutputStream());
        
        String ma = "B22DCCN037;code";
        out.writeUTF(ma);
        out.flush();
        
        String s = in.readUTF();
        int a = in.readInt();
    }
    public class test implements Serializable{
        String a,b,c;
        test(string a,string b, string c) // ham tao;
        tostring
    }
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2209);
        ObjectInputStream in = new ObjectInputStream(socket.getInputStream());
        ObjectOutputStream out = new ObjectOutputStream(socket.getOutputStream());
        
        String ma = "B22DCCN037;code";
        out.writeObject(ma);
        out.flush();
        
        Laptop lap = (Laptop) in.readObject();
    }
    
    //UDP
    public static void main(String[] args) throws Exception{
        DatagramSocket socket = new DatagramSocket();
        InetAddress sA = InetAddress.getByName("203.162.10.109");
        int sP = 2209;
        
        String ma = ";B22DCCN037;code";
        DatagramPacket dpGui = new DatagramPacket(ma.getBytes(), ma.length(), sA, sP);
        socket.send(dpGui);
        
        byte buffer[] = new byte[1024];
        DatagramPacket dpNhan = new DatagramPacket(buffer, buffer.length);
        socket.receive(dpNhan);
        
        String s = new String(dpNhan);
        String stmp[] = s.split(";");
        String rI = stmp[0];
        String s1 = stmp[1];
        
        String str[] = s1.trim().split(",");
    }
    public static void main(String[] args) throws Exception{
        DatagramSocket socket = new DatagramSocket();
        InetAddress sA = InetAddress.getByName("203.162.10.109");
        int sP = 2209;
        
        String ma = ";B22DCCN037;code";
        DatagramPacket dpGui = new DatagramPacket(ma.getBytes(), ma.length(), sA, sP);
        socket.send(dpGui);
        
        byte buffer[] = new byte[1024];
        DatagramPacket dpNhan = new DatagramPacket(buffer, buffer.length);
        socket.receive(dpNhan);
        
        String rI = new String(dpNhan.getData(),0,8);
        ByteArrayInputStream input = new ByteArrayInputStream(dpNhan.getData(),8 ,dpNhan.getLength());
        ObjectInputStream in = new ObjectInputStream(input);
        Laptop lap = (Laptop) in.readObject()
                
                
        
        ByteArrayOutputStream output = new ByteArrayOutputStream();
        ObjectOutputStream out = new ObjectOutputStream(input);
        out.writeObject(lap);
        out.flush();
        
    }
}