// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyD6hnq1Pp7HkIXMBxwfx0dBFySUYcHSYRA",
  authDomain: "firstproject-fae9e.firebaseapp.com",
  projectId: "firstproject-fae9e",
  storageBucket: "firstproject-fae9e.firebasestorage.app",
  messagingSenderId: "970965050872",
  appId: "1:970965050872:web:5c8d7d68078fd33b82620d",
  measurementId: "G-06LPE3GVPP"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const analytics = getAnalytics(app);

export default app;
export {analytics};