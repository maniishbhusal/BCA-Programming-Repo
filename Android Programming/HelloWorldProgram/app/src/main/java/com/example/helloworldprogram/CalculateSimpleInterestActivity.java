package com.example.helloworldprogram;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class CalculateSimpleInterestActivity extends AppCompatActivity {

    private EditText editPrincipalAmount;
    private EditText editTime;
    private EditText editRate;
    private Button buttonCalculate;
    private TextView textViewSimpleInterestResult;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.calculatesimpleinterest);

        editPrincipalAmount = findViewById(R.id.editPrincipalAmount);
        editTime = findViewById(R.id.editTime);
        editRate = findViewById(R.id.editRate);
        buttonCalculate = findViewById(R.id.buttonCalculate);
        textViewSimpleInterestResult = findViewById(R.id.textViewSimpleInterestResult);

        buttonCalculate.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                calculateSimpleInterest();
            }
        });
    }

    private void calculateSimpleInterest() {
        String principalStr = editPrincipalAmount.getText().toString();
        String timeStr = editTime.getText().toString();
        String rateStr = editRate.getText().toString();

        if (principalStr.isEmpty() || timeStr.isEmpty() || rateStr.isEmpty()) {
            textViewSimpleInterestResult.setText("Please enter all fields.");
            return;
        }

        try {
            double principal = Double.parseDouble(principalStr);
            double time = Double.parseDouble(timeStr);
            double rate = Double.parseDouble(rateStr);

            double simpleInterest = (principal * time * rate) / 100;
            textViewSimpleInterestResult.setText("Result: " + simpleInterest);
        } catch (NumberFormatException e) {
            textViewSimpleInterestResult.setText("Invalid number format.");
        }
    }
}
