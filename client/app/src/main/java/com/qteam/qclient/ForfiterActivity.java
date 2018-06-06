package com.qteam.qclient;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;

public class ForfiterActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_forfiter);

        Intent intent = getIntent();
        Integer message = intent.getIntExtra("queue_num",0);
        Toast.makeText(ForfiterActivity.this, message.toString(), Toast.LENGTH_SHORT).show();
    }

    public void joinQueue(){
        // usage of operation
    }
}
