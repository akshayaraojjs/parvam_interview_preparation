// Header file
import React from "react";

function Header(){
    return(
        <ul>
            <li>
                <a href="/">Home</a>
            </li>
            {/* If we have self-closing tag without ending tag, we need to end the tag like this: <br> => <br />, <hr> => <hr />, <img> => <img /> */}
            <li>
                <a href="/about-us">About Us</a>
            </li>
            <li>
                <a href="#">Services</a>
            </li>
            <li>
                <a href="#">Contact Us</a>
            </li>
        </ul>
    );
}

export default Header;