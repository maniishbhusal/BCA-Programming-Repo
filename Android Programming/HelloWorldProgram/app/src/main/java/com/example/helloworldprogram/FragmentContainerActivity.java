package com.example.helloworldprogram;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

public class FragmentContainerActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fragment_container);

        if (savedInstanceState == null) {
            // Add FragmentOne to the first container
            getSupportFragmentManager().beginTransaction()
                    .add(R.id.fragment_container_one, new FragmentOne())
                    .commit();

            // Add FragmentTwo to the second container
            getSupportFragmentManager().beginTransaction()
                    .add(R.id.fragment_container_two, new FragmentTwo())
                    .commit();
        }
    }
}
