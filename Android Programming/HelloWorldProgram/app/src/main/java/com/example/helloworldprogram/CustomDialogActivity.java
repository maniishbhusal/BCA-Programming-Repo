package com.example.helloworldprogram;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

public class CustomDialogActivity extends AppCompatActivity {

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_custom_dialog);

        Button buttonCalculateSum = findViewById(R.id.buttonCalculateSum);
        buttonCalculateSum.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                showSumDialog();
            }
        });
    }

    private void showSumDialog() {
        // Inflate the custom layout using LayoutInflater
        LayoutInflater inflater = getLayoutInflater();
        View dialogView = inflater.inflate(R.layout.dialog_sum_calculator, null);

        // Get references to views in the inflated layout
        EditText editTextNum1 = dialogView.findViewById(R.id.editTextNum1);
        EditText editTextNum2 = dialogView.findViewById(R.id.editTextNum2);
        Button buttonCalculate = dialogView.findViewById(R.id.buttonCalculate);
        TextView textViewResult = dialogView.findViewById(R.id.textViewResult);

        // Build the AlertDialog
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle("Sum Calculator");
        builder.setView(dialogView);

        AlertDialog dialog = builder.create();

        buttonCalculate.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String num1Text = editTextNum1.getText().toString();
                String num2Text = editTextNum2.getText().toString();

                if (num1Text.isEmpty() || num2Text.isEmpty()) {
                    textViewResult.setText("Please enter both numbers");
                    return;
                }

                try {
                    double num1 = Double.parseDouble(num1Text);
                    double num2 = Double.parseDouble(num2Text);
                    double sum = num1 + num2;
                    textViewResult.setText("Result: " + sum);
                } catch (NumberFormatException e) {
                    textViewResult.setText("Invalid number format");
                }
            }
        });

        dialog.show();
    }
}
