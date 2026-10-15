# Tic-Tac-Toe-Game

Welcome to the Tic Tac Toe console game implemented in C! This repository hosts a concise, yet feature-rich, rendition of the classic game. Two players engage in a strategic battle on a 3x3 grid, showcasing fundamental C programming concepts. The code offers a clear structure, emphasizing simplicity and readability for learners. It includes turn-based mechanics, win condition checks, and a minimalist console interface. This project serves as an excellent resource for C programming enthusiasts delving into game development. Explore, modify, and expand upon the codebase to deepen your understanding of both C and basic game design principles. Happy coding!
# ==========================================
# VERCEL FRONTEND DEPLOYMENT STEPS
# ==========================================

# STEP 1: UPDATE BACKEND API URL & PUSH TO GITHUB
# In frontend code (e.g., api.js / axios config), change "http://localhost:5000" to your live backend URL (e.g., https://your-app.up.railway.app)
git add . && git commit -m "Update API URL for production" && git push

# STEP 2: IMPORT REPOSITORY TO VERCEL
# Go to Vercel Dashboard -> Click "Add New..." -> "Project" -> Import your GitHub repository

# STEP 3: CONFIGURE BUILD SETTINGS
# Root Directory: frontend (click Edit and select your frontend folder)
# Build Command: npm run build (auto-detected)
# Output Directory: dist (for Vite) or build (for Create React App)

# STEP 4: DEPLOY & TEST
# Click "Deploy" -> Wait for the build to finish -> Open your live Vercel URL to test full app functionality with MongoDB Atlas
