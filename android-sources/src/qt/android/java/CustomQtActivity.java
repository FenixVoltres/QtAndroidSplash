package qt.android.java;

import android.os.Bundle;
import android.util.Log;
import android.app.Dialog;
import android.view.Window;

import qt.dd14.androidsplash.R;

import org.qtproject.qt5.android.bindings.QtActivity;

public class CustomQtActivity extends QtActivity
{
    private Dialog mDialog = null;

    @Override public void onCreate(Bundle savedInstanceState)
    {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        super.onCreate(savedInstanceState);
		
        mDialog = new Dialog(this, android.R.style.Theme_Black_NoTitleBar_Fullscreen);
        mDialog.setContentView(getLayoutInflater().inflate(R.layout.my_splash, null));
        mDialog.show();
    }

    public void hideNativeSplash()
    {
        mDialog.dismiss();
        mDialog = null;
    }
}
