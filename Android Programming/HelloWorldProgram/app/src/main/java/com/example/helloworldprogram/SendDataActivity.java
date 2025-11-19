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
