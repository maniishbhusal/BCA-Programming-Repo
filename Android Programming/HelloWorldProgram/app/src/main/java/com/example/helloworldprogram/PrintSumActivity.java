package com.example.helloworldprogram;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class PrintSumActivity extends AppCompatActivity {

    private EditText editTextFirstNumber;
    private EditText editTextSecondNumber;
    private Button buttonSum;
    private TextView textViewResult;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.print_sum);

        editTextFirstNumber = findViewById(R.id.editTextFirstNumber);
        editTextSecondNumber = findViewById(R.id.editTextSecondNumber);
        buttonSum = findViewById(R.id.buttonSum);
        textViewResult = findViewById(R.id.textViewResult);

        buttonSum.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                calculateSum();
            }
        });
    }

    private void calculateSum() {
        String firstText = editTextFirstNumber.getText().toString();
        String secondText = editTextSecondNumber.getText().toString();

        if (firstText.isEmpty() || secondText.isEmpty()) {
            textViewResult.setText("Please enter both numbers.");
            return;
        }

        try {
            double firstNum = Double.parseDouble(firstText);
            double secondNum = Double.parseDouble(secondText);
            double sum = firstNum + secondNum;
            textViewResult.setText("Result: " + sum);
        } catch (NumberFormatException e) {
            textViewResult.setText("Invalid number format.");
        }
    }
}
