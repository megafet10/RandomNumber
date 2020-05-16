package net.vsmart.vsec.bigrandomtest;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import java.math.BigInteger;
import java.security.SecureRandom;
import java.util.Random;

public class MainActivity extends AppCompatActivity {
    private Button mBtStartGen;
    private EditText mEtOutputValues;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mBtStartGen = findViewById(R.id.bt_StartGen);
        mEtOutputValues = findViewById(R.id.et_RandomValues);

        setOnStartGenRandomValue();
    }

    void setOnStartGenRandomValue() {
        mBtStartGen.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //Toast.makeText(getApplicationContext(),"Start gen random value", Toast.LENGTH_SHORT).show();
                String current = mEtOutputValues.getText().toString();
                for (int i=0; i<100; i++) {
                    BigInteger bigRandom = new BigInteger(256, new Random());
                    BigInteger bigSecureRandom = new BigInteger(256, new SecureRandom());
                    current += "R:" + bigRandom.toString() + "\n";
                    current += "S:" + bigSecureRandom.toString() + "\n";
                }
                mEtOutputValues.setText(current);
            }
        });
    }
}
