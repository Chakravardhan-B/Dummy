const express = require("express")
const app = express()
const mongoose = require("mongoose")
async function connectDb() {
    try{
        await mongoose.connect("mongodb://localhost:27017/myFirstDB")
        console.log("DB connected successfully")
    }catch(error){
        console.log(error)
    }
}
const userSchema = new mongoose.Schema({
    name:String,
    email:{
        type:String,
        unique:true,
        required:true
    }
})

const user = mongoose.model("user",userSchema)

async function createUsers() {

    // let newUser = await user.create({
    //     name:"Kanna",
    //     email:"baddula@gmail.com"
    // })
    // let newUser = new user({
    //     // name:"jah 1",
    //     email:"kanna@gmail.com 23"
    // })
    // await newUser.save()

    // let u = await user.findById("67d840ea2b73ff0b9cc07fc4")
    // let u = await user.findByIdAndDelete("67d840ea2b73ff0b9cc07fc4")
    // let u = await user.findByIdAndUpdate("67d840bdb9fa4d6f2f75c13e",{name:"harsha"},{new:true})
    console.log(u)
    
    
}
app.listen(3000, () =>{
    console.log("server Started")
    connectDb()
    createUsers()

})