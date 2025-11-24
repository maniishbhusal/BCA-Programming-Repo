# Android Fragments - Basics Explained

## What is a Fragment?

A Fragment is a reusable portion of your app's UI. It represents a modular section of an activity that has its own:
- Layout
- Lifecycle
- Behavior
- Input events

Fragments can be added, removed, or replaced while the activity is running, making them very flexible for creating dynamic UIs.

## Why Use Fragments?

1. **Modularity**: Break down complex UIs into smaller, manageable pieces
2. **Reusability**: Use the same fragment in different activities
3. **Flexibility**: Easily add, remove, or replace UI components at runtime
4. **Multi-pane layouts**: Support different screen sizes (phone vs tablet)

## Basic Fragment Components

### 1. Fragment Class (Java)

Every fragment must extend the `Fragment` class and override `onCreateView()`:

```java
public class FragmentOne extends Fragment {
    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater,
                             @Nullable ViewGroup container,
                             @Nullable Bundle savedInstanceState) {
        // Inflate the fragment's layout
        return inflater.inflate(R.layout.fragment_one, container, false);
    }
}
```

**Key Method:**
- `onCreateView()`: Called when the fragment needs to create its view hierarchy
  - `inflater`: Used to inflate the XML layout into a View object
  - `container`: Parent view that the fragment UI will be attached to
  - `savedInstanceState`: Previous state data (if fragment is being recreated)
  - `return`: The View for the fragment's UI
  - `false` parameter: Don't attach to parent yet (FragmentManager will do it)

### 2. Fragment Layout (XML)

Each fragment has its own XML layout file:

```xml
<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:gravity="center"
    android:orientation="vertical">

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="this is fragment1"
        android:textSize="24sp" />

</LinearLayout>
```

### 3. Host Activity

An Activity hosts the fragments using FragmentManager:

```java
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
```

**Key Points:**
- `getSupportFragmentManager()`: Gets the FragmentManager for managing fragments
- `beginTransaction()`: Starts a fragment transaction
- `.add(containerId, fragment)`: Adds fragment to the specified container
- `.commit()`: Commits the transaction (makes changes happen)
- `savedInstanceState == null`: Only add fragments on first creation, not on rotation

### 4. Container Layout

The activity's layout needs container views to hold fragments:

```xml
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical">

    <!-- Container for Fragment One -->
    <FrameLayout
        android:id="@+id/fragment_container_one"
        android:layout_width="match_parent"
        android:layout_height="0dp"
        android:layout_weight="1" />

    <!-- Container for Fragment Two -->
    <FrameLayout
        android:id="@+id/fragment_container_two"
        android:layout_width="match_parent"
        android:layout_height="0dp"
        android:layout_weight="1" />

</LinearLayout>
```

**Key Points:**
- `FrameLayout`: Common container for fragments (simple, single child)
- `android:id`: Required - used to identify where to add the fragment
- `layout_weight`: Divides screen space equally between both containers

## How Our Example Works

### File Structure

```
app/
├── src/main/
│   ├── java/com/example/helloworldprogram/
│   │   ├── FragmentOne.java              # First fragment class
│   │   ├── FragmentTwo.java              # Second fragment class
│   │   └── FragmentContainerActivity.java # Host activity
│   └── res/layout/
│       ├── fragment_one.xml               # Layout for fragment 1
│       ├── fragment_two.xml               # Layout for fragment 2
│       └── activity_fragment_container.xml # Container layout
```

### Execution Flow

1. **App Starts** → `FragmentContainerActivity` launches (set as MAIN in manifest)

2. **onCreate() Called** → Activity sets content view to `activity_fragment_container.xml`

3. **Check savedInstanceState** → Ensures fragments only added on first launch, not on screen rotation

4. **First Transaction** → Adds `FragmentOne` to `fragment_container_one`

5. **Second Transaction** → Adds `FragmentTwo` to `fragment_container_two`

6. **Fragments Created** → Each fragment's `onCreateView()` is called

7. **Layouts Inflated** → Fragment layouts are inflated and displayed

8. **UI Visible** → User sees both fragments on screen

### Visual Result

```
┌─────────────────────────┐
│                         │
│   this is fragment1     │  ← FragmentOne
│                         │
├─────────────────────────┤
│                         │
│   this is fragment2     │  ← FragmentTwo
│                         │
└─────────────────────────┘
```

## Fragment Operations

### Common Fragment Transactions

```java
FragmentManager fm = getSupportFragmentManager();

// Add a fragment
fm.beginTransaction()
  .add(R.id.container, new MyFragment())
  .commit();

// Replace a fragment
fm.beginTransaction()
  .replace(R.id.container, new AnotherFragment())
  .commit();

// Remove a fragment
fm.beginTransaction()
  .remove(myFragment)
  .commit();

// Add to back stack (enables back navigation)
fm.beginTransaction()
  .replace(R.id.container, new MyFragment())
  .addToBackStack(null)
  .commit();
```

## Best Practices

1. **Always check savedInstanceState**: Prevents duplicate fragments on configuration changes
2. **Use FrameLayout for containers**: Simple and efficient for single fragments
3. **Keep fragments modular**: Each fragment should be self-contained
4. **Don't reference activity directly**: Use interfaces for communication
5. **Handle lifecycle properly**: Override lifecycle methods as needed

## Common Issues

### Fragment appears twice after rotation
**Solution**: Check `savedInstanceState` before adding fragments

### Fragment not displaying
**Solution**:
- Ensure container has proper height/width
- Check if fragment layout is inflated correctly
- Verify container ID matches in XML and Java

### Fragment overlap
**Solution**: Use `replace()` instead of `add()` or ensure proper layout_weight

## Related Files in This Project

- `FragmentOne.java` - Simple fragment displaying text
- `FragmentTwo.java` - Simple fragment displaying text
- `FragmentContainerActivity.java` - Activity hosting both fragments
- `fragment_one.xml` - Layout for first fragment
- `fragment_two.xml` - Layout for second fragment
- `activity_fragment_container.xml` - Container layout with two FrameLayouts

## Additional Resources

- [Android Fragment Guide](https://developer.android.com/guide/fragments)
- [Fragment Lifecycle](https://developer.android.com/guide/fragments/lifecycle)
- See also: `fragment-lifecycle-explained.md` in this directory
