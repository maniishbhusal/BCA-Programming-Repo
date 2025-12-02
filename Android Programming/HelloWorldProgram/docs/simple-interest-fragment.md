# Simple Interest Calculator using Fragment

## Overview

This is a simple Android application that calculates Simple Interest using a Fragment. The app demonstrates the basic usage of fragments in Android development.

## Formula

**Simple Interest (SI) = (Principal × Rate × Time) / 100**

Where:
- **Principal (P)**: The initial amount of money
- **Rate (R)**: The rate of interest per year (%)
- **Time (T)**: The time period in years

## File Structure

```
app/
├── src/main/
│   ├── java/com/example/helloworldprogram/
│   │   ├── SimpleInterestFragment.java        # Fragment class with calculation logic
│   │   └── SimpleInterestActivity.java        # Host activity
│   └── res/layout/
│       ├── fragment_simple_interest.xml       # Fragment UI layout
│       └── activity_simple_interest.xml       # Container layout
└── AndroidManifest.xml                        # Activity registration
```

## Components

### 1. SimpleInterestFragment.java

The fragment class that handles:
- Input fields for Principal, Rate, and Time
- Calculate button
- Result display
- Simple Interest calculation logic

**Key Features:**
- Extends `Fragment` class
- Overrides `onCreateView()` to inflate the layout
- Input validation for empty fields
- Error handling for invalid number formats

### 2. fragment_simple_interest.xml

The fragment's layout containing:
- Title text
- Three EditText fields (Principal, Rate, Time)
- Calculate button
- Result TextView

**Layout Structure:**
- LinearLayout with vertical orientation
- Centered content with padding
- Input hints for better UX

### 3. SimpleInterestActivity.java

The host activity that:
- Extends `AppCompatActivity`
- Hosts the SimpleInterestFragment
- Uses FragmentManager to add the fragment

**Key Points:**
- Checks `savedInstanceState` to prevent duplicate fragments on rotation
- Uses `.add()` to insert fragment into container

### 4. activity_simple_interest.xml

Simple container layout:
- Single FrameLayout as fragment container
- Takes full screen space

## How It Works

1. User opens the app and SimpleInterestActivity launches
2. Activity adds SimpleInterestFragment to the fragment container
3. Fragment displays the input form
4. User enters Principal, Rate, and Time values
5. User clicks "Calculate" button
6. Fragment validates inputs
7. Fragment calculates: SI = (P × R × T) / 100
8. Result is displayed on screen

## Usage Example

**Input:**
- Principal: 10000
- Rate: 5
- Time: 2

**Calculation:**
- SI = (10000 × 5 × 2) / 100
- SI = 100000 / 100
- SI = 1000

**Output:**
- Simple Interest: 1000.0

## Error Handling

The app handles two types of errors:

1. **Empty Fields**: If any field is empty
   - Display: "Please enter all values."

2. **Invalid Format**: If user enters non-numeric values
   - Display: "Invalid number format."

## Running the App

To launch this activity, you need to either:

1. **Change the MAIN launcher** in AndroidManifest.xml:
   ```xml
   <activity
       android:name=".SimpleInterestActivity"
       android:exported="true">
       <intent-filter>
           <action android:name="android.intent.action.MAIN" />
           <category android:name="android.intent.category.LAUNCHER" />
       </intent-filter>
   </activity>
   ```

2. **Start it from another activity** using Intent:
   ```java
   Intent intent = new Intent(this, SimpleInterestActivity.class);
   startActivity(intent);
   ```

## Related Files

- `fragments-basics-explained.md` - Basic fragment concepts
- `SumCalculatorFragment.java` - Similar example with sum calculation
