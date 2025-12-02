package com.example.helloworldprogram;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

public class SimpleInterestFragment extends Fragment {

    private EditText editTextPrincipal, editTextRate, editTextTime;
    private Button buttonCalculate;
    private TextView textViewResult;

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_simple_interest, container, false);

        editTextPrincipal = view.findViewById(R.id.edit_text_principal);
        editTextRate = view.findViewById(R.id.edit_text_rate);
        editTextTime = view.findViewById(R.id.edit_text_time);
        buttonCalculate = view.findViewById(R.id.button_calculate);
        textViewResult = view.findViewById(R.id.text_view_result);

        buttonCalculate.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                calculateSimpleInterest();
            }
        });

        return view;
    }

    private void calculateSimpleInterest() {
        String principalText = editTextPrincipal.getText().toString();
        String rateText = editTextRate.getText().toString();
        String timeText = editTextTime.getText().toString();

        if (principalText.isEmpty() || rateText.isEmpty() || timeText.isEmpty()) {
            textViewResult.setText("Please enter all values.");
            return;
        }

        try {
            double principal = Double.parseDouble(principalText);
            double rate = Double.parseDouble(rateText);
            double time = Double.parseDouble(timeText);

            // Formula: SI = (P * R * T) / 100
            double simpleInterest = (principal * rate * time) / 100;

            textViewResult.setText("Simple Interest: " + simpleInterest);
        } catch (NumberFormatException e) {
            textViewResult.setText("Invalid number format.");
        }
    }
}
