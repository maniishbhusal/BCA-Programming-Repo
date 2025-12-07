# Android Options Menu

## What is an Options Menu?

The Options Menu is the primary menu in an Android app. It appears as three dots (overflow icon) in the top-right corner of the ActionBar. It's used for actions that have a global impact on the app (like Settings, Search, About).

## How It Works

### 1. Menu XML File (`res/menu/options_menu.xml`)

This file defines the menu items:

```xml
<menu xmlns:android="http://schemas.android.com/apk/res/android">
    <item
        android:id="@+id/menu_settings"
        android:title="Settings" />
    <item
        android:id="@+id/menu_search"
        android:title="Search" />
    <item
        android:id="@+id/menu_about"
        android:title="About" />
</menu>
```

- `android:id` - Unique identifier used to detect which item was clicked
- `android:title` - Text displayed for the menu item

### 2. Activity Java File

Two methods are needed:

#### `onCreateOptionsMenu(Menu menu)`
- Called once when the activity is created
- Inflates (loads) the menu XML into the ActionBar
- Must return `true` to show the menu

```java
@Override
public boolean onCreateOptionsMenu(Menu menu) {
    getMenuInflater().inflate(R.menu.options_menu, menu);
    return true;
}
```

#### `onOptionsItemSelected(MenuItem item)`
- Called when a menu item is clicked
- Use `item.getItemId()` to check which item was clicked
- Return `true` if you handled the click

```java
@Override
public boolean onOptionsItemSelected(MenuItem item) {
    int id = item.getItemId();

    if (id == R.id.menu_settings) {
        Toast.makeText(this, "Settings clicked", Toast.LENGTH_SHORT).show();
        return true;
    }

    return super.onOptionsItemSelected(item);
}
```

## Important: Theme Requirement

The app theme must have an ActionBar. Use a theme like:
- `Theme.AppCompat.Light.DarkActionBar`

If using `NoActionBar` theme, the three dots won't appear.

## File Structure

```
app/src/main/
├── java/.../OptionsMenuActivity.java    # Activity with menu logic
└── res/
    ├── layout/activity_options_menu.xml  # Layout file
    └── menu/options_menu.xml             # Menu items definition
```

## Key Points

1. Menu XML goes in `res/menu/` folder
2. `onCreateOptionsMenu()` loads the menu into ActionBar
3. `onOptionsItemSelected()` handles clicks
4. Activity must extend `AppCompatActivity`
5. Theme must have ActionBar (not NoActionBar)
