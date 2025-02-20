else if(message.includes("start presentation")) {
        speak("Hello everyone, I am a virtual assistant created by Tech Warrior Team . I can recognize speech, respond to commands, and even control applications. Let me show you what I can do.");
        setTimeout(() => {
            speak("For example, I can send WhatsApp messages, search the web, and even roast my creator.");
        }, 5000);
        setTimeout(() => {
            speak("Now, let me demonstrate a command. Say something, and I'll respond.");
        }, 10000);
    }
    else if (message.includes("next slide")) {
        speak("Moving to the next slide... so Being a virtual assistant is flexible and rewarding. You get to work with different clients and tasks, like scheduling, emails, or social media, all from the comfort of home. It's a great way to balance work and life while constantly learning new skills.");
        document.dispatchEvent(new KeyboardEvent("keydown", { key: "ArrowRight" }));
    }
    else if (message.includes("previous slide")) {
        speak("Going back to the previous slide...");
        document.dispatchEvent(new KeyboardEvent("keydown", { key: "ArrowLeft" }));
    }
    else if (message.includes("end presentation")) {
        speak("Thank you for listening! If you have any questions, feel free to ask.");
    }
    else {
        let finalText = "This is what I found on the internet regarding " + message;
        speak(finalText);
        window.open(`https://www.google.com/search?q=${message}`, "_blank");
    }
}
