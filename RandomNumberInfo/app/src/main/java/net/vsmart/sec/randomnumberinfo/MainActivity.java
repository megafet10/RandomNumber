package net.vsmart.sec.randomnumberinfo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    NativeUtils mNativeUtils;
    Button mBtStartGen;
    EditText mEtOutput;
    Handler mNativeHandler;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mNativeUtils = new NativeUtils(getApplication());
        mBtStartGen =  findViewById(R.id.btStartGen);
        mEtOutput = findViewById(R.id.etOutputValues);
        mNativeHandler = new Handler();
        setOnClickButton();
    }

    void setOnClickButton() {
        mBtStartGen.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String output = mEtOutput.getText().toString();
                for (int i=0; i<10000; i++) {
                    output += mNativeUtils.stringFromJNI() + "\n";
                }
                mEtOutput.setText(output);
            }
        });
    }


}
