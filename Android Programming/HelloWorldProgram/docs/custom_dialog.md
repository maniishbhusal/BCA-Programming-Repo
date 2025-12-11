# Android Custom Dialog with AlertDialog and LayoutInflater

## What is a Custom Dialog?

A Custom Dialog is a popup window that displays on top of the current activity. By using `AlertDialog.Builder` with `LayoutInflater`, you can create dialogs with custom layouts while benefiting from AlertDialog's built-in styling and behavior.

## How It Works

### 1. Main Activity Layout (`activity_custom_dialog.xml`)

A simple layout with a button to trigger the dialog:

```xml
<LinearLayout
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:gravity="center">

    <Button
        android:id="@+id/buttonCalculateSum"
        android:text="Calculate Sum" />

</LinearLayout>
```

### 2. Custom Dialog Layout (`dialog_sum_calculator.xml`)

The layout that will be inflated inside the dialog:

```xml
<LinearLayout
    android:orientation="vertical"
    android:padding="16dp">

    <EditText android:id="@+id/editTextNum1" />
    <EditText android:id="@+id/editTextNum2" />
    <Button android:id="@+id/buttonCalculate" />
    <TextView android:id="@+id/textViewResult" />

</LinearLayout>
```

### 3. Activity Java File

#### Step 1: Set click listener on the main button

```java
Button buttonCalculateSum = findViewById(R.id.buttonCalculateSum);
buttonCalculateSum.setOnClickListener(v -> showSumDialog());
```

#### Step 2: Inflate layout and create AlertDialog

```java
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

    // Set click listener for calculate button
    buttonCalculate.setOnClickListener(v -> {
        String num1Text = editTextNum1.getText().toString();
        String num2Text = editTextNum2.getText().toString();

        if (num1Text.isEmpty() || num2Text.isEmpty()) {
            textViewResult.setText("Please enter both numbers");
            return;
        }

        double num1 = Double.parseDouble(num1Text);
        double num2 = Double.parseDouble(num2Text);
        double sum = num1 + num2;
        textViewResult.setText("Result: " + sum);
    });

    // Show the dialog
    dialog.show();
}
```

## Key Concepts

| Concept | Description |
|---------|-------------|
| `LayoutInflater` | Converts XML layout file into View objects |
| `getLayoutInflater()` | Gets the LayoutInflater from the activity |
| `inflate(R.layout.xxx, null)` | Inflates the XML layout into a View |
| `AlertDialog.Builder` | Builder pattern to construct AlertDialog |
| `setView(dialogView)` | Sets the inflated view as dialog content |
| `create()` | Creates the AlertDialog instance |
| `show()` | Displays the dialog |

## What is LayoutInflater?

`LayoutInflater` is a class that converts an XML layout file into corresponding View objects. It "inflates" the XML definition into actual UI components that can be used in your code.

```java
// Get inflater
LayoutInflater inflater = getLayoutInflater();

// Inflate XML layout into a View
View view = inflater.inflate(R.layout.my_layout, null);
```

## File Structure

```
app/src/main/
├── java/.../CustomDialogActivity.java     # Activity with dialog logic
└── res/layout/
    ├── activity_custom_dialog.xml         # Main layout with button
    └── dialog_sum_calculator.xml          # Custom dialog layout
```

## How to Test

1. Run the app
2. Tap the "Calculate Sum" button
3. Enter two numbers in the dialog
4. Tap "Calculate" to see the result
5. Tap outside the dialog to dismiss it

## When to Use Custom Dialogs

- **Forms**: Collecting user input (login, settings)
- **Calculators**: Quick calculations without leaving current screen
- **Confirmations**: Complex confirmation dialogs with custom UI
- **Information**: Displaying detailed info in a popup

## AlertDialog.Builder Methods

| Method | Description |
|--------|-------------|
| `setTitle()` | Sets dialog title |
| `setMessage()` | Sets dialog message |
| `setView()` | Sets custom view/layout |
| `setPositiveButton()` | Adds OK/confirm button |
| `setNegativeButton()` | Adds Cancel button |
| `setCancelable()` | Whether dialog can be dismissed by back button |
| `create()` | Creates the dialog |
| `show()` | Creates and shows the dialog |
