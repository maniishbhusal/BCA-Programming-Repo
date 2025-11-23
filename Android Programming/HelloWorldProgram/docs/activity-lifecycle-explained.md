# Android Activity Lifecycle Demo Explained

This document explains how the `AndroidActivityLifeCycle` demo works. The demo shows the different states of an Android Activity by logging them and displaying the current state on the screen.

## Files Used

1.  `app/src/main/java/com/example/helloworldprogram/AndroidActivityLifeCycle.java`
2.  `app/src/main/res/layout/activity_lifecycle_demo.xml`

---

## `activity_lifecycle_demo.xml`

This XML file defines the user interface for the demo. It's a simple layout with a single `TextView` centered on the screen. This `TextView` is used to display the current lifecycle state of the activity.

```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:gravity="center">

    <TextView
        android:id="@+id/lifecycle_status"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:textSize="24sp"
        android:text="Lifecycle Status" />

</LinearLayout>
```

---

## `AndroidActivityLifeCycle.java`

This Java class contains the logic for the activity. It overrides each of the main lifecycle methods (`onCreate()`, `onStart()`, `onResume()`, `onPause()`, `onStop()`, `onDestroy()`, and `onRestart()`).

In each of these methods, two things happen:

1.  A message is logged to the Android Logcat, which is useful for debugging.
2.  The text of the `TextView` on the screen is updated to show the name of the lifecycle method that was just called.

```java
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
```
