package com.qteam.qclient;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.ComponentName;
import com.qteam.qclient.MyService.LocalBinder;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;
import android.view.*;
import android.os.IBinder;

public class MainActivity extends AppCompatActivity {

    boolean mBound = false;
    MyService myService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    private ServiceConnection mConnection = new ServiceConnection() {
        @Override
        public void onServiceDisconnected(ComponentName name) {
            Toast.makeText(MainActivity.this, "Service is disconnected", Toast.LENGTH_SHORT).show();
            mBound = false;
            myService = null;
        }

        @Override
        public void onServiceConnected(ComponentName name, IBinder service) {
            Toast.makeText(MainActivity.this, "Service is connected", Toast.LENGTH_SHORT).show();
            mBound = true;
            LocalBinder mLocalBinder = (LocalBinder)service;
            myService = mLocalBinder.getService();
        }
    };

    public void BindService(View view){
        Intent mIntent = new Intent(this, MyService.class);
        bindService(mIntent, mConnection, Context.BIND_AUTO_CREATE);
    }

    public void SendData(View view){
        if (myService!=null)
            myService.sendData();
        else
            Toast.makeText(MainActivity.this, "There is no service", Toast.LENGTH_SHORT).show();
    }

    public void Disconnect(View view){
        if (myService!=null)
            myService.disconnect();
        else
            Toast.makeText(MainActivity.this, "There is no service", Toast.LENGTH_SHORT).show();
    }

    public void StopService(View view){
        if(mBound) {
            unbindService(mConnection);
            mBound = false;
            myService = null;
        }
    }
}
