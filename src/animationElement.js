import React, { Component } from 'react'
import { View, LayoutAnimation, TouchableOpacity,TouchableHighlight, Text, StyleSheet } from 'react-native'

class Animations extends Component {
   state = {
      myStyle: {
         height: 100,
         backgroundColor: 'red'
      }
   } 
   expandElement = () => {
      LayoutAnimation.configureNext(LayoutAnimation.Presets.spring);
      this.setState({
         myStyle: {
            height: 400,
            backgroundColor: 'green'
         }
      })
   }
   collapseElement = () => {
      LayoutAnimation.configureNext(LayoutAnimation.Presets.linear);
      
      this.setState({
         myStyle: {
            height: 100,
            backgroundColor: 'red'
         }
      })
   }
   render() {
      return (
         <View>
            <View style = {this.state.myStyle}>
              
            </View>

            <TouchableHighlight>
               <Text style = {styles.button} onPress = {this.expandElement}>
                  Expand
               </Text>
            </TouchableHighlight>

            <TouchableHighlight>
               <Text style = {styles.button} onPress = {this.collapseElement}>
                  Collapse
               </Text>
            </TouchableHighlight>
         </View>
      )
   }
}
export default Animations

const styles = StyleSheet.create({
   button: {
      borderWidth: 1,
      borderColor: 'red',
      color: 'red',
      textAlign: 'center',
      marginTop: 50,
      padding: 10
   }
})
