let btn = document.querySelector("#btn");
let content = document.querySelector("#content");
let voice = document.querySelector("#voice");

function speak(text) {
    let text_speak = new SpeechSynthesisUtterance(text);
    text_speak.rate = 1;
    text_speak.pitch = 1;
    text_speak.volume = 1;
    text_speak.lang = "hi-GB";
    window.speechSynthesis.speak(text_speak);
}

function wishMe() {
    let day = new Date();
    let hours = day.getHours();
    if (hours >= 0 && hours < 12) {
        speak("Good Morning Sir");
    } else if (hours >= 12 && hours < 16) {
        speak("Good Afternoon Sir");
    } else {
        speak("Good Evening Sir");
    }
}

let speechRecognition = window.SpeechRecognition || window.webkitSpeechRecognition;
let recognition = new speechRecognition();
recognition.onresult = (event) => {
    let currentIndex = event.resultIndex;
    let transcript = event.results[currentIndex][0].transcript;
    content.innerText = transcript;
    takeCommand(transcript.toLowerCase());
};

btn.addEventListener("click", () => {
    recognition.start();
    voice.style.display = "block";
    btn.style.display = "none";
});

function takeCommand(message) {
    voice.style.display = "none";
    btn.style.display = "flex";

    if (message.includes("hello") || message.includes("hey")) {
        speak("Hello sir, what can I help you with?");
    } 
    else if (message.includes("who are the members of tech warrior") || message.includes("how many members are in tech warrior")) {
        speak("Intelligent members of Tech Warrior are Shaik Mujahid, Syed Faiz, Mohammed Hameed, Syed Zohayr.");
    } 
    else if (message.includes("how are you")) {
        speak("I am good, sir.");
    } 
    else if (message.includes("wikipedia of lords institute of engineering and technology")) {
        speak("Lords Institute of Engineering and Technology is a self-financing Muslim Minority Autonomous Engineering College near Appa Junction, Himayath Sagar, Ranga Reddy district, Telangana, India, 11 km from Mehdipatnam.");
    } 
    else if (message.includes("who are you")) {
        speak("I am a virtual assistant, created by Mujahid Sir.");
    } 
    else if (message.includes("open youtube")) {
        speak("Opening YouTube...");
        window.open("https://youtube.com/", "_blank");
    } 
    else if (message.includes("open google")) {
        speak("Opening Google...");
        window.open("https://google.com/", "_blank");
    } 
    else if (message.includes("open facebook")) {
        speak("Opening Facebook...");
        window.open("https://facebook.com/", "_blank");
    } 
    else if (message.includes("open instagram")) {
        speak("Opening Instagram...");
        window.open("https://instagram.com/", "_blank");
    } 
    else if (message.includes("open calculator")) {
        speak("Opening calculator...");
        window.open("calculator://");
    } 
    else if (message.includes("open whatsapp")) {
        speak("Opening WhatsApp...");
        window.open("whatsapp://");
    } 
    else if (message.includes("time")) {
        let time = new Date().toLocaleString(undefined, { hour: "numeric", minute: "numeric" });
        speak(time);
    } 
    else if (message.includes("date")) {
        let date = new Date().toLocaleString(undefined, { day: "numeric", month: "short" });
        speak(date);
    } 
    else if (message.includes("play my favourite song")) {
        speak("Playing your favorite song...");
        window.open("https://www.youtube.com/watch?v=n_FCrCQ6-bA", "_blank");
    } 
    else if (message.includes("message on whatsapp")) {
        let words = message.split(" ");
        let index = words.indexOf("to");

        if (index !== -1 && words.length > index + 1) {
            let contactName = words[index + 1].toLowerCase();
            let msg = message.includes("saying") ? message.split("saying")[1].trim() : "Hello!";

            let phoneNumbers = {
                mujahid: "919553562019",
                faiz: "917075910885",
                hamid: "918686424799",
                zohayr: "91XXXXXXXXXX",
                arfath: "91XXXXXXXXXX"
            };

            if (phoneNumbers[contactName]) {
                let url = `https://wa.me/${phoneNumbers[contactName]}?text=${encodeURIComponent(msg)}`;
                speak(`Sending WhatsApp message to ${contactName}`);
                window.open(url, "_blank");
            } else {
                speak("Sorry, I don't have that contact saved.");
            }
        } else {
            speak("Please specify a contact name.");
        }
    } 
    else if (message.includes("start presentation")) {
        speak("Hello everyone, I am a virtual assistant created by Tech Warrior Team. I can recognize speech, respond to commands, and even control applications. Let me show you what I can do.");
        setTimeout(() => {
            speak("For example, I can send WhatsApp messages, search the web, and even roast my creator.");
        }, 5000);
        setTimeout(() => {
            speak("Now, let me demonstrate a command. Say something, and I'll respond.");
        }, 10000);
    } 
    else if (message.includes("next slide")) {
        speak("Moving to the next slide...");
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
        window.open(`https://www.google.com/search?q=${encodeURIComponent(message)}`, "_blank");
    }
}
