# Fragment Lifecycle and Sum Calculator Demo Explained

This document explains how the `SumCalculatorFragment` demo works. The demo uses a fragment to create a simple calculator that finds the sum of two numbers, and it also demonstrates the fragment lifecycle by logging each lifecycle event.

## Files Used

1.  `app/src/main/res/layout/fragment_sum_calculator.xml` (Fragment's Layout)
2.  `app/src/main/res/layout/activity_fragment_container.xml` (Activity's Layout)
3.  `app/src/main/java/com/example/helloworldprogram/SumCalculatorFragment.java` (Fragment Class)
4.  `app/src/main/java/com/example/helloworldprogram/FragmentContainerActivity.java` (Host Activity Class)
5.  `app/src/main/AndroidManifest.xml` (App's Manifest)

---

## `fragment_sum_calculator.xml`

This XML file defines the user interface for the `SumCalculatorFragment`. It contains two `EditText` views for number input, a `Button` to trigger the calculation, and a `TextView` to display the result.

```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:padding="16dp">

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Enter first number:" />

    <EditText
        android:id="@+id/edit_text_first_number_fragment"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:inputType="numberDecimal" />

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginTop="16dp"
        android:text="Enter second number:" />

    <EditText
        android:id="@+id/edit_text_second_number_fragment"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:inputType="numberDecimal" />

    <Button
        android:id="@+id/button_sum_fragment"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_gravity="center_horizontal"
        android:layout_marginTop="16dp"
        android:text="Sum" />

    <TextView
        android:id="@+id/text_view_result_fragment"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_gravity="center_horizontal"
        android:layout_marginTop="16dp"
        android:textSize="24sp"
        android:text="Result" />

</LinearLayout>
```

---

## `activity_fragment_container.xml`

This is the layout for the host activity, `FragmentContainerActivity`. It contains a single `FrameLayout` which acts as a container where the `SumCalculatorFragment` will be placed.

```xml
<?xml version="1.0" encoding="utf-8"?>
<FrameLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:id="@+id/fragment_container"
    android:layout_width="match_parent"
    android:layout_height="match_parent" />
```

---

## `SumCalculatorFragment.java`

This is the core of the demo. The `SumCalculatorFragment` class extends `Fragment` and overrides the key lifecycle methods (`onAttach`, `onCreate`, `onCreateView`, `onViewCreated`, `onStart`, `onResume`, `onPause`, `onStop`, `onDestroyView`, `onDestroy`, `onDetach`). Inside each of these methods, a `Log.d()` call is made to print the name of the method to the Logcat, allowing you to observe the fragment's lifecycle in real-time.

The `onCreateView` method is where the fragment's layout is inflated and the views are initialized. It also sets an `OnClickListener` on the button to call the `calculateSum()` method.

```java
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

    // ... (Lifecycle methods with Log.d calls)

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        Log.d(TAG, "onCreateView");
        View view = inflater.inflate(R.layout.fragment_sum_calculator, container, false);

        // ... (View initialization and button click listener)

        return view;
    }

    private void calculateSum() {
        // ... (Sum calculation logic)
    }
}
```

---

## `FragmentContainerActivity.java`

This activity hosts the `SumCalculatorFragment`. In its `onCreate` method, it sets its content view to `activity_fragment_container.xml`. It then creates a new instance of `SumCalculatorFragment` and adds it to the `fragment_container` `FrameLayout` using the `FragmentManager`.

```java
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
```

---

## `AndroidManifest.xml`

Finally, the `FragmentContainerActivity` is registered in the `AndroidManifest.xml` file and set as the launcher activity so that it is the first screen to appear when the app is launched.

```xml
<activity
    android:name=".FragmentContainerActivity"
    android:exported="true">
    <intent-filter>
        <action android:name="android.intent.action.MAIN" />
        <category android:name="android.intent.category.LAUNCHER" />
    </intent-filter>
</activity>
```
