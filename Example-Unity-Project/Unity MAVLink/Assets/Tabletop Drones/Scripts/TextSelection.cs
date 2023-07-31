using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class TextSelection : MonoBehaviour
{
    public TMP_Text text;
    TouchScreenKeyboard keyboard;
    public bool isActive = false;
    bool hasBeenActive = false;
    public UnityEvent OnEndEdit;

    TextSelection[] textSelections;

    private void Awake()
    {
        // Get all the text selections
        textSelections = FindObjectsOfType<TextSelection>(true);
    }

    public void Increment()
    {
        // Disable all other text selection objects
        for (int i = 0; i < textSelections.Length; i++)
        {
            textSelections[i].isActive = false;
        }

        keyboard = TouchScreenKeyboard.Open(text.text, TouchScreenKeyboardType.NumberPad);
        isActive = true;
        hasBeenActive = true;
    }

    private void Update()
    {
        if (isActive)
        {
            text.text = keyboard.text;
        }
        if (hasBeenActive && (keyboard.status != TouchScreenKeyboard.Status.Visible))
        {
            EndInput();
        }
    }

    void EndInput()
    {
        isActive = false;
        hasBeenActive = false;
        OnEndEdit?.Invoke();
    }
}
