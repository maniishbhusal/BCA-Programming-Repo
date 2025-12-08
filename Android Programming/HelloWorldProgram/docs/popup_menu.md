# Android Popup Menu

## What is a Popup Menu?

A Popup Menu is a floating menu that appears when the user taps a specific UI element (like a button). It's used to present a short list of options for quick selection, filtering, or sorting.

## How It Works

### 1. Menu XML File (`res/menu/popup_menu.xml`)

This file defines the menu items:

```xml
<menu xmlns:android="http://schemas.android.com/apk/res/android">
    <item
        android:id="@+id/menu_sort_date"
        android:title="Sort by Date" />
    <item
        android:id="@+id/menu_sort_name"
        android:title="Sort by Name" />
    <item
        android:id="@+id/menu_sort_size"
        android:title="Sort by Size" />
</menu>
```

### 2. Activity Java File

Two steps are needed:

#### Step 1: Set click listener on a button

```java
Button button = findViewById(R.id.buttonShowPopup);
button.setOnClickListener(view -> showPopupMenu(view));
```

#### Step 2: Create and show PopupMenu

```java
private void showPopupMenu(View view) {
    PopupMenu popupMenu = new PopupMenu(this, view);
    popupMenu.getMenuInflater().inflate(R.menu.popup_menu, popupMenu.getMenu());

    popupMenu.setOnMenuItemClickListener(item -> {
        int id = item.getItemId();

        if (id == R.id.menu_sort_date) {
            Toast.makeText(this, "Sort by Date selected", Toast.LENGTH_SHORT).show();
            return true;
        }

        return false;
    });

    popupMenu.show();
}
```

**Key points in the code:**
- `new PopupMenu(context, anchorView)` - Creates popup anchored to a view
- `inflate()` - Loads the menu XML
- `setOnMenuItemClickListener()` - Handles item clicks
- `show()` - Displays the popup menu

## File Structure

```
app/src/main/
├── java/.../PopupMenuActivity.java      # Activity with popup logic
└── res/
    ├── layout/activity_popup_menu.xml   # Layout with button
    └── menu/popup_menu.xml              # Menu items definition
```

## Key Points

1. Menu XML goes in `res/menu/` folder
2. Create `PopupMenu` object with context and anchor view
3. Inflate menu using `getMenuInflater().inflate()`
4. Set click listener using `setOnMenuItemClickListener()`
5. Call `show()` to display the menu

---

# Understanding All Three Android Menus

Understanding mobile menus is easier when you relate them to web technology!

## Context Menu (Similar to Right-Click Menu on Web)

A **Context Menu** provides actions related to a **specific item** that the user has long-pressed.

- **Mobile Trigger:** Long press on an item
- **Purpose:** Item-specific actions
- **Examples:**
  - Long-pressing an email to show **Archive**, **Delete**, **Mark as Unread**
  - Long-pressing a contact to show **Call**, **Text**, **Edit**
- **Web Analogy:** The menu that appears when you **right-click** on a link or image

---

## Options Menu (Similar to Main Navigation/Hamburger Menu)

The **Options Menu** is the **primary menu** for the entire screen or app. Accessed via the three-dot icon in the ActionBar.

- **Mobile Trigger:** Three-dot (kebab) icon in top-right
- **Purpose:** Global app/screen actions
- **Examples:**
  - Tapping three-dot menu in browser for **Settings**, **New Tab**, **History**
  - Hamburger menu for **Home**, **Profile**, **Notifications**
- **Web Analogy:** The **main navigation bar** or **hamburger menu** on websites

---

## Popup Menu (Similar to Dropdown Select Box)

A **Popup Menu** appears when user taps a **specific button/icon** for quick selection.

- **Mobile Trigger:** Tap a button/icon
- **Purpose:** Quick selection, sorting, filtering
- **Examples:**
  - Tapping **Sort By** button to choose **Date**, **Name**, **Size**
  - Tapping **More Actions** on a card
- **Web Analogy:** A **dropdown `<select>` box** or menu that drops down from a button

---

## Comparison Table

| Feature | Context Menu | Options Menu | Popup Menu |
|---------|--------------|--------------|------------|
| **Trigger** | Long press on item | Three-dot icon | Tap button/icon |
| **Location** | Near the item | ActionBar (top-right) | Anchored to button |
| **Purpose** | Item-specific actions | Global app actions | Quick selection |
| **Web Analogy** | Right-click menu | Navigation/Hamburger | Dropdown select |
| **Registration** | `registerForContextMenu()` | Not needed | Not needed |
| **Main Method** | `onCreateContextMenu()` | `onCreateOptionsMenu()` | `new PopupMenu()` |
| **Click Handler** | `onContextItemSelected()` | `onOptionsItemSelected()` | `setOnMenuItemClickListener()` |

---

## Real-World Example: Gmail App

| Menu Type | Where in Gmail |
|-----------|----------------|
| **Context Menu** | Long-press an email to see Archive, Delete, Mark as read |
| **Options Menu** | Three-dot icon shows Settings, Help & feedback |
| **Popup Menu** | Sort/Filter dropdown in search results |

---

## Code Comparison

### Context Menu
```java
// In onCreate()
registerForContextMenu(view);

// Override these methods
onCreateContextMenu(ContextMenu menu, View v, ContextMenuInfo info)
onContextItemSelected(MenuItem item)
```

### Options Menu
```java
// Override these methods
onCreateOptionsMenu(Menu menu)
onOptionsItemSelected(MenuItem item)
```

### Popup Menu
```java
// In a click listener
PopupMenu popup = new PopupMenu(context, anchorView);
popup.inflate(R.menu.popup_menu);
popup.setOnMenuItemClickListener(listener);
popup.show();
```
