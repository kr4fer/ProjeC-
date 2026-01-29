<h1 align="center">Secure Login System (C++)</h1>
<p align="center">
  <strong>Project Type:</strong> User Authentication System <br>
  <strong>Developer:</strong> Sunny Eljohn Lico
</p>

<hr>

<h2>Project Description</h2>
<ul>
  <li>A robust <b>console-based security module</b> built in C++ to manage user access and identity verification.</li>
  <li>This system simulates a real-world <b>Authentication Gateway</b>, acting as the first line of defense for a larger software application.</li>
  <li>Focuses on <b>data validation</b> and secure handling of user credentials within the terminal.</li>
</ul>

<h2>Core Objectives</h2>
<ul>
  <li><b>Identity Verification:</b> Ensure only registered users with the correct credentials can enter the system.</li>
  <li><b>Security Logic:</b> Implement features like hidden passwords or limited login attempts to prevent unauthorized access.</li>
  <li><b>User Experience:</b> Provide clear feedback for successful logins and specific error messages for incorrect inputs.</li>
</ul>

<h2>Key Features</h2>
<ul>
  <li><b>User Registration:</b> Allows new users to create accounts by storing usernames and passwords in the system memory.</li>
  <li><b>Credential Matching:</b> Cross-references user input against stored data with high precision.</li>
  <li><b>Attempt Limiter:</b> Automatically locks or warns the user after a certain number of failed login attempts.</li>
  <li><b>Masked Input:</b> Includes logic for handling sensitive data entry (if applicable) or standard secure prompts.</li>
</ul>

<h2>Technical Specifications</h2>
<ul>
  <li><b>Language:</b> C++ (.cpp)</li>
  <li><b>Logic:</b> Utilizes <code>std::string</code> for data comparison and <code>while-loops</code> for continuous prompt handling.</li>
  <li><b>File Handling:</b> Designed to be integrated with <code>fstream</code> for permanent user data storage.</li>
  <li><b>Year:</b> 2023</li>
</ul>

<h2>How to Use</h2>
<ol>
  <li>Compile the security module: <code>g++ LoginSystem.cpp -o LoginSystem</code></li>
  <li>Run the application: <code>./LoginSystem</code></li>
  <li>Select **Register** to create an account, then **Login** to access the system.</li>
</ol>

<hr>

<p align="center"><i>Security & Authentication Exercise - 2023</i></p>
