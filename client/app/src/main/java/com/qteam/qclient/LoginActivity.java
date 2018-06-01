package com.qteam.qclient;

import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.graphics.Typeface;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.SpannableStringBuilder;
import android.text.method.LinkMovementMethod;
import android.text.style.ClickableSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.StyleSpan;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import com.qteam.qclient.debug.ForfiterListActivity;
import com.qteam.qclient.debug.RegisterActivity;

import java.util.Random;

import static android.provider.AlarmClock.EXTRA_MESSAGE;

public class LoginActivity extends AppCompatActivity {
    Random rand;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
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

    public void getForfiterList(View view){
        Intent intent = new Intent(this, ForfiterListActivity.class);
        intent.putExtra("queue_num", rand.nextInt());
        startActivity(intent);
    }
}
