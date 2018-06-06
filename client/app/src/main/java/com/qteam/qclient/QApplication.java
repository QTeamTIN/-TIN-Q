package com.qteam.qclient;

import android.app.Application;
import android.content.Intent;

public class QApplication extends Application {
    //public static MyService service;
    @Override
    public void onCreate() {
        super.onCreate();
        startService(new Intent(getApplicationContext(), MyService.class));
    }
}
