package com.qteam.qclient;

import java.io.*;
import java.net.*;
import java.util.Random;
import java.nio.ByteBuffer;
import android.os.AsyncTask;
import android.app.Service;
import android.content.Intent;
import android.content.Context;
import android.os.IBinder;
import android.os.Binder;
import android.widget.Toast;

public class MyService extends Service {
    private final IBinder mBinder = new LocalBinder();
    Socket socket;
    DataInputStream input;
    PrintStream output;
    Integer counter=0;
    Random rand;

    @Override
    public IBinder onBind(Intent intent) {
        new ConnectionInit(this).execute();
        rand = new Random();

        return mBinder;
    }

    public class LocalBinder extends Binder {
        MyService getService() {
            return MyService.this;
        }
    }

    public void sendData(){
        new SendDataTask(this).execute();
    }

    public void disconnect(){
        new Disconnect(this).execute();
    }

    public void onDestroy() {
        new SocketDestroy(this).execute();
    }

    abstract class MyAsyncTask extends AsyncTask<Void, Void, String>{
        private Context mContext;

        public MyAsyncTask(Context context){
            mContext = context;
        }

        @Override
        protected void onPostExecute(String s) {
            Toast.makeText(mContext, s, Toast.LENGTH_SHORT).show();
        }

        @Override
        abstract protected String doInBackground(Void... params);
    }

    class ConnectionInit extends MyAsyncTask{
        public ConnectionInit(Context context){
            super(context);
        }

        @Override
        protected String doInBackground(Void... params) {
            try{
                socket = new Socket("192.168.1.8",8020);
                input = new DataInputStream(socket.getInputStream());
                output = new PrintStream(socket.getOutputStream());
            }
            catch (Exception e) {
                return e.toString();
            }
            return "Success";
        }
    }

    class SendDataTask extends MyAsyncTask{
        public SendDataTask(Context context){
            super(context);
        }

        @Override
        protected String doInBackground(Void... params) {
            try{
                counter++;
                ByteBuffer b = ByteBuffer.allocate(4);
                b.putInt(counter);
                byte[] result = b.array();
                output.write(result, 0, 1);
                b = ByteBuffer.allocate(4);
                b.putInt(rand.nextInt(255));
                result = b.array();
                output.write(result, 0, 1);
            }
            catch (Exception e) {
                return e.toString();
            }
            return counter.toString();
        }
    }

    class Disconnect extends MyAsyncTask{
        public Disconnect(Context context){
            super(context);
        }

        @Override
        protected String doInBackground(Void... params) {
            try{
                input.close();
                output.close();
                socket.close();
            }
            catch (Exception e) {
                return e.toString();
            }
            return "Success";
        }
    }

    class SocketDestroy extends MyAsyncTask{
        public SocketDestroy(Context context){
            super(context);
        }

        @Override
        protected String doInBackground(Void... params) {
            try{
                input = null;
                output = null;
                socket = null;
                counter = 0;
            }
            catch (Exception e) {
                return e.toString();
            }
            return "Success";
        }
    }

}
