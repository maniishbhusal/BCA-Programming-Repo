package com.example.helloworldprogram;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

public class SimpleInterestActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_simple_interest);

        if (savedInstanceState == null) {
            getSupportFragmentManager().beginTransaction()
                    .add(R.id.fragment_container, new SimpleInterestFragment())
                    .commit();
        }
    }
}
