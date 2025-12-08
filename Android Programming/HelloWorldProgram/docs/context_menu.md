# Android Context Menu

## What is a Context Menu?

A Context Menu is a floating menu that appears when the user performs a long-press on a view. It's similar to right-click menus on desktop. It's used for actions that affect the selected item (like Copy, Paste, Delete).

## How It Works

### 1. Menu XML File (`res/menu/context_menu.xml`)

This file defines the menu items:

```xml
<menu xmlns:android="http://schemas.android.com/apk/res/android">
    <item
        android:id="@+id/menu_copy"
        android:title="Copy" />
    <item
        android:id="@+id/menu_paste"
        android:title="Paste" />
    <item
        android:id="@+id/menu_delete"
        android:title="Delete" />
</menu>
```

- `android:id` - Unique identifier used to detect which item was clicked
- `android:title` - Text displayed for the menu item

### 2. Activity Java File

Three steps are needed:

#### Step 1: Register the view in `onCreate()`
- Call `registerForContextMenu(view)` to enable context menu on a view

```java
@Override
protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_context_menu);

    TextView textView = findViewById(R.id.textViewLongPress);
    registerForContextMenu(textView);
}
```

#### Step 2: `onCreateContextMenu()`
- Called when user long-presses the registered view
- Inflates (loads) the menu XML

```java
@Override
public void onCreateContextMenu(ContextMenu menu, View v, ContextMenu.ContextMenuInfo menuInfo) {
    super.onCreateContextMenu(menu, v, menuInfo);
    getMenuInflater().inflate(R.menu.context_menu, menu);
}
```

#### Step 3: `onContextItemSelected()`
- Called when a menu item is clicked
- Use `item.getItemId()` to check which item was clicked
- Return `true` if you handled the click

```java
@Override
public boolean onContextItemSelected(MenuItem item) {
    int id = item.getItemId();

    if (id == R.id.menu_copy) {
        Toast.makeText(this, "Copy clicked", Toast.LENGTH_SHORT).show();
        return true;
    }

    return super.onContextItemSelected(item);
}
```

## Options Menu vs Context Menu

| Feature | Options Menu | Context Menu |
|---------|--------------|--------------|
| Trigger | Click three dots icon | Long-press on a view |
| Location | ActionBar (top-right) | Floating near the view |
| Purpose | Global app actions | Actions on specific item |
| Registration | Not needed | `registerForContextMenu()` |

## File Structure

```
app/src/main/
├── java/.../ContextMenuActivity.java    # Activity with menu logic
└── res/
    ├── layout/activity_context_menu.xml  # Layout with long-press view
    └── menu/context_menu.xml             # Menu items definition
```

## Key Points

1. Menu XML goes in `res/menu/` folder
2. Call `registerForContextMenu(view)` in `onCreate()`
3. `onCreateContextMenu()` inflates the menu
4. `onContextItemSelected()` handles clicks
5. User must long-press to see the menu
