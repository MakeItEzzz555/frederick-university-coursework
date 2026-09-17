import React, { useContext } from 'react'
import UserContext from '../context/UseContext'

function Profile() {
    const {user} = useContext(UserContext)
    if(!user)  return <h1>Not Logged in</h1>
  return (
    <>
    
        <div>Profile Page</div>
        <h1>Hello :{user.username}</h1>
    </>
  )
}

export default Profile