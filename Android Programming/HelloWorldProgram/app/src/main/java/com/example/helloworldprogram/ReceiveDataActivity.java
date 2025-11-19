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
