import React, { Component } from 'react';
import { Button ,StyleSheet} from 'react-native';

const button = (props) =>{
    const handlePress = () => {
        console.log("button pressed");
    }
    return(
        <Button style= {styles.container}
            title =  "Button"
            color = "purple"
            onPress = {handlePress}
            accessibilityLabel="Learn more about this button"
        />
    )
}


const styles = StyleSheet.create ({
    container: {
       flex: 1,
       borderWidth: 1,
       padding: 25,
       borderColor: 'black',
       backgroundColor: 'red'
    }
 })
export default button;

