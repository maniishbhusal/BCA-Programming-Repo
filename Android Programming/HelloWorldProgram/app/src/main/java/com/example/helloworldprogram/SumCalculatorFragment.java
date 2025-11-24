package com.example.helloworldprogram;

import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

public class SumCalculatorFragment extends Fragment {

    private static final String TAG = "FragmentLifecycle";

    private EditText editTextFirstNumber, editTextSecondNumber;
    private Button buttonSum;
    private TextView textViewResult;

    // Lifecycle methods

    @Override
    public void onAttach(@NonNull Context context) {
        super.onAttach(context);
        Log.d(TAG, "onAttach");
    }

    @Override
    public void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.d(TAG, "onCreate");
    }

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        Log.d(TAG, "onCreateView");
        View view = inflater.inflate(R.layout.fragment_sum_calculator, container, false);

        editTextFirstNumber = view.findViewById(R.id.edit_text_first_number_fragment);
        editTextSecondNumber = view.findViewById(R.id.edit_text_second_number_fragment);
        buttonSum = view.findViewById(R.id.button_sum_fragment);
        textViewResult = view.findViewById(R.id.text_view_result_fragment);

        buttonSum.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                calculateSum();
            }
        });

        return view;
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);
        Log.d(TAG, "onViewCreated");
    }

    @Override
    public void onStart() {
        super.onStart();
        Log.d(TAG, "onStart");
    }

    @Override
    public void onResume() {
        super.onResume();
        Log.d(TAG, "onResume");
    }

    @Override
    public void onPause() {
        super.onPause();
        Log.d(TAG, "onPause");
    }

    @Override
    public void onStop() {
        super.onStop();
        Log.d(TAG, "onStop");
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
        Log.d(TAG, "onDestroyView");
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        Log.d(TAG, "onDestroy");
    }

    @Override
    public void onDetach() {
        super.onDetach();
        Log.d(TAG, "onDetach");
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
