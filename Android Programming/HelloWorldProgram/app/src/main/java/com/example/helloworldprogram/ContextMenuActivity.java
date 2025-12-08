package com.example.helloworldprogram;

import android.os.Bundle;
import android.view.ContextMenu;
import android.view.MenuItem;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

public class ContextMenuActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_context_menu);

        TextView textView = findViewById(R.id.textViewLongPress);
        registerForContextMenu(textView);
    }

    @Override
    public void onCreateContextMenu(ContextMenu menu, View v, ContextMenu.ContextMenuInfo menuInfo) {
        super.onCreateContextMenu(menu, v, menuInfo);
        getMenuInflater().inflate(R.menu.context_menu, menu);
    }

    @Override
    public boolean onContextItemSelected(@NonNull MenuItem item) {
        int id = item.getItemId();

        if (id == R.id.menu_copy) {
            Toast.makeText(this, "Copy clicked", Toast.LENGTH_SHORT).show();
            return true;
        } else if (id == R.id.menu_paste) {
            Toast.makeText(this, "Paste clicked", Toast.LENGTH_SHORT).show();
            return true;
        } else if (id == R.id.menu_delete) {
            Toast.makeText(this, "Delete clicked", Toast.LENGTH_SHORT).show();
            return true;
        }

        return super.onContextItemSelected(item);
    }
}
