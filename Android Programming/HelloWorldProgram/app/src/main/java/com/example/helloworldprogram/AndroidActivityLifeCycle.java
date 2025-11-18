package com.example.helloworldprogram;

import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class AndroidActivityLifeCycle extends AppCompatActivity {

    private static final String TAG = "ActivityLifecycle";
    private TextView lifecycleStatus;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_lifecycle_demo);
        lifecycleStatus = findViewById(R.id.lifecycle_status);
        Log.d(TAG, "onCreate");
        lifecycleStatus.setText("onCreate()");
    }

    @Override
    protected void onStart() {
        super.onStart();
        Log.d(TAG, "onStart");
        lifecycleStatus.setText("onStart()");
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.d(TAG, "onResume");
        lifecycleStatus.setText("onResume()");
    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.d(TAG, "onPause");
        lifecycleStatus.setText("onPause()");
    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.d(TAG, "onStop");
        lifecycleStatus.setText("onStop()");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d(TAG, "onDestroy");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.d(TAG, "onRestart");
        lifecycleStatus.setText("onRestart()");
    }
}
