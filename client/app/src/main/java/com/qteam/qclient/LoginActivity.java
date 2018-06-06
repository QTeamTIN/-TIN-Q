package com.qteam.qclient;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.graphics.Color;
import android.os.IBinder;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.method.LinkMovementMethod;
import android.text.style.ClickableSpan;
import android.text.style.ForegroundColorSpan;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import java.util.Random;

import static android.provider.AlarmClock.EXTRA_MESSAGE;

public class LoginActivity extends AppCompatActivity {
    Random rand;
    MyService myService = null;
    boolean serviceConnected = false;
    Receiver receiver;

    @Override
    protected void onStart() {
        super.onStart();
        Intent mIntent = new Intent(this, MyService.class);
        ComponentName myService_name = startService(new Intent(this, MyService.class));
        bindService(mIntent, mConnection, Context.BIND_AUTO_CREATE);


        receiver=new Receiver();
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Intent mIntent = new Intent(this, MyService.class);
        ComponentName myService_name = startService(new Intent(this, MyService.class));
        bindService(mIntent, mConnection, Context.BIND_AUTO_CREATE);
        setContentView(R.layout.activity_login2);

        final LoginActivity context = this;
        TextView textView = findViewById(R.id.textView2);

        String regist = getString(R.string.login_to_register);
        SpannableString styledRegist = new SpannableString(regist);
        int index = regist.indexOf("sign up");
        int length = regist.substring(index).length();
        styledRegist.setSpan(new ForegroundColorSpan(Color.BLUE), index,index+length, 0);
        ClickableSpan clickableSpan = new ClickableSpan() {
            @Override
            public void onClick(View widget) {
                Intent intent = new Intent(context, RegisterActivity.class);
                intent.putExtra(EXTRA_MESSAGE, "My message");
                startActivity(intent);
            }
        };

        styledRegist.setSpan(clickableSpan, index, index+length, 0);

        textView.setMovementMethod(LinkMovementMethod.getInstance());
        textView.setText(styledRegist);

        rand = new Random();
    }

    @Override
    protected void onStop() {

        super.onStop();
        if (serviceConnected) {
            unbindService(mConnection);
            stopService(new Intent(this, MyService.class));
            serviceConnected = false;
        }
    }

    public void getForfiterList(View view){

        Intent intent = new Intent(this, ForfiterListActivity.class);
        intent.putExtra("queue_num", rand.nextInt());
        startActivity(intent);
    }

    public void signIn(View view) {
        EditText name= (EditText) findViewById(R.id.name);
        EditText password= (EditText) findViewById(R.id.password);
        packet.JavaQ.Login login = packet.JavaQ.Login.newBuilder().setName(name.getText().toString()).setHash(password.getText().toString()).build();
        packet.JavaQ.BasePacket base_packet = packet.JavaQ.BasePacket.newBuilder().setLogin(login).build();
        myService.sendData(base_packet);

        //Intent intent = new Intent(this, ForfiterListActivity.class);
        //intent.putExtra("queue_num", rand.nextInt());
        //startActivity(intent);

    }


    private ServiceConnection mConnection = new ServiceConnection() {
        @Override
        public void onServiceDisconnected(ComponentName name) {
            serviceConnected = false;
            myService = null;
        }

        @Override
        public void onServiceConnected(ComponentName name, IBinder service) {
            serviceConnected = true;
            MyService.LocalBinder mLocalBinder = (MyService.LocalBinder)service;
            myService = mLocalBinder.getService();
        }
    };


    private class Receiver extends BroadcastReceiver {

        @Override
        public void onReceive(Context context, Intent intent) {
            System.out.println("meh");
            if(intent.getType().equals("Action")) {
                int datapassed = intent.getIntExtra("DATAPASSED", 0);
                Toast.makeText(LoginActivity.this,
                        "Triggered by Service!\n"
                                + "Data passed: " + String.valueOf(datapassed),
                        Toast.LENGTH_LONG).show();
            }
        }

    }

}
