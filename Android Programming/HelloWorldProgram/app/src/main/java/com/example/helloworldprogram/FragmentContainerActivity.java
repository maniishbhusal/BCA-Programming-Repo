package com.example.helloworldprogram;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

public class FragmentContainerActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fragment_container);

        if (savedInstanceState == null) {
            getSupportFragmentManager().beginTransaction()
                    .add(R.id.fragment_container, new SumCalculatorFragment())
                    .commit();
        }
    }
}
