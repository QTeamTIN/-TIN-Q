package com.qteam.qclient.debug;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;

import com.qteam.qclient.LoginActivity;
import com.qteam.qclient.MainActivity;
import com.qteam.qclient.R;

import java.util.ArrayList;
import java.util.Random;

public class ForfiterListActivity extends AppCompatActivity {

    ArrayList<String> listItems = new ArrayList<String>();
    ArrayAdapter<String> adapter;
    Random rand;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_forfiter_list);
        Intent intent = getIntent();
        Integer message = intent.getIntExtra("queue_num",0);
        Toast.makeText(ForfiterListActivity.this, message.toString(), Toast.LENGTH_SHORT).show();

        listItems.add("Forfiter1");
        listItems.add("Forfiter2");
        listItems.add("Forfiter3");

        ListView list = findViewById(R.id.ListView);
        adapter = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, listItems);
        list.setAdapter(adapter);

        rand = new Random();

        list.setOnItemClickListener(new AdapterView.OnItemClickListener()
        {
            @Override
            public void onItemClick(AdapterView<?> arg0, View arg1, int position, long arg3)
            {
                startNewActivity(position); // trzeba tutaj wstawiac id kolejki
            }
        });
    }

    private void startNewActivity(int queueNum){
        Intent intent = new Intent(this, ForfiterActivity.class);
        intent.putExtra("queue_num", queueNum);
        startActivity(intent);
    }
}
