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

    // ... (rest of the lifecycle methods)
}
```

# Sending Data Between Activities Explained

This section explains how to send data from one activity to another using `Intent`.

## Files Used

1.  `app/src/main/res/layout/send_data_between_two_activity.xml`
2.  `app/src/main/java/com/example/helloworldprogram/SendDataActivity.java`
3.  `app/src/main/res/layout/receive_data_activity.xml`
4.  `app/src/main/java/com/example/helloworldprogram/ReceiveDataActivity.java`
5.  `app/src/main/AndroidManifest.xml`

---

## `send_data_between_two_activity.xml`

This layout file is for the first activity. It contains an `EditText` for the user to enter their name and a `Button` to send the data.

```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:padding="16dp"
    android:layout_marginTop="50dp">

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Enter Your Name:" />

    <EditText
        android:id="@+id/name_edit_text"
        android:layout_width="match_parent"
        android:layout_height="wrap_content" />

    <Button
        android:id="@+id/send_button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_gravity="center_horizontal"
        android:layout_marginTop="16dp"
        android:text="Send" />

</LinearLayout>
```

---

## `receive_data_activity.xml`

This layout is for the second activity. It has a `TextView` to display the data received from the first activity.

```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:gravity="center"
    android:padding="16dp">

    <TextView
        android:id="@+id/received_data_text_view"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:textSize="24sp" />

</LinearLayout>
```

---

## `SendDataActivity.java`

This is the first activity. It gets the text from the `EditText` when the `Button` is clicked, creates an `Intent` to start the `ReceiveDataActivity`, and adds the text to the `Intent` as an extra.

```java
package com.example.helloworldprogram;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import androidx.appcompat.app.AppCompatActivity;

public class SendDataActivity extends AppCompatActivity {

    private EditText nameEditText;
    private Button sendButton;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.send_data_between_two_activity);

        nameEditText = findViewById(R.id.name_edit_text);
        sendButton = findViewById(R.id.send_button);

        sendButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = nameEditText.getText().toString();
                Intent intent = new Intent(SendDataActivity.this, ReceiveDataActivity.class);
                intent.putExtra("NAME", name);
                startActivity(intent);
            }
        });
    }
}
```

---

## `ReceiveDataActivity.java`

This is the second activity. It gets the `Intent` that started it, retrieves the extra data using the same key that was used in `SendDataActivity`, and displays the data in the `TextView`.

```java
package com.example.helloworldprogram;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class ReceiveDataActivity extends AppCompatActivity {

    private TextView receivedDataTextView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.receive_data_activity);

        receivedDataTextView = findViewById(R.id.received_data_text_view);

        Intent intent = getIntent();
        if (intent != null && intent.hasExtra("NAME")) {
            String name = intent.getStringExtra("NAME");
            receivedDataTextView.setText("Hello, " + name + "!");
        }
    }
}
```

---

## `AndroidManifest.xml`

Both `SendDataActivity` and `ReceiveDataActivity` must be declared in the `AndroidManifest.xml` file. `SendDataActivity` is set as the launcher activity by including an `intent-filter` with the `MAIN` action and `LAUNCHER` category.

```xml
<?xml version="1.0" encoding="utf-8"?>
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:tools="http://schemas.android.com/tools">

    <application
        android:allowBackup="true"
        android:dataExtractionRules="@xml/data_extraction_rules"
        android:fullBackupContent="@xml/backup_rules"
        android:icon="@mipmap/ic_launcher"
        android:label="@string/app_name"
        android:roundIcon="@mipmap/ic_launcher_round"
        android:supportsRtl="true"
        android:theme="@style/Theme.HelloWorldProgram">
        <activity
            android:name=".AndroidActivityLifeCycle"
            android:exported="false" />
        <activity
            android:name=".SendDataActivity"
            android:exported="true">
            <intent-filter>
                <action android:name="android.intent.action.MAIN" />

                <category android:name="android.intent.category.LAUNCHER" />
            </intent-filter>
        </activity>
        <activity android:name=".ReceiveDataActivity" />
    </application>

</manifest>
```
