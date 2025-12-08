package com.example.helloworldprogram;

import android.os.Bundle;
import android.view.MenuItem;
import android.widget.Button;
import android.widget.PopupMenu;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class PopupMenuActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_popup_menu);

        Button button = findViewById(R.id.buttonShowPopup);
        button.setOnClickListener(view -> showPopupMenu(view));
    }

    private void showPopupMenu(android.view.View view) {
        PopupMenu popupMenu = new PopupMenu(this, view);
        popupMenu.getMenuInflater().inflate(R.menu.popup_menu, popupMenu.getMenu());

        popupMenu.setOnMenuItemClickListener(item -> {
            int id = item.getItemId();

            if (id == R.id.menu_sort_date) {
                Toast.makeText(this, "Sort by Date selected", Toast.LENGTH_SHORT).show();
                return true;
            } else if (id == R.id.menu_sort_name) {
                Toast.makeText(this, "Sort by Name selected", Toast.LENGTH_SHORT).show();
                return true;
            } else if (id == R.id.menu_sort_size) {
                Toast.makeText(this, "Sort by Size selected", Toast.LENGTH_SHORT).show();
                return true;
            }

            return false;
        });

        popupMenu.show();
    }
}
