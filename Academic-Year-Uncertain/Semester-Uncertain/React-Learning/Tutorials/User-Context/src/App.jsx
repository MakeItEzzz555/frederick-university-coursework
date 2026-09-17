  import { useState } from 'react'
  import reactLogo from './assets/react.svg'
  import viteLogo from '/vite.svg'
  import Login from './components/Login'
  import Profile from './components/Profile'
  import './App.css'
import UserContextProvider from './context/UserContextProvider'

  function App() {
    return (
      <UserContextProvider>
        <Login/>
        <Profile/>
      </UserContextProvider>
    )
  }

  export default App
