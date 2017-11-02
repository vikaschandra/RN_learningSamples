/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

import React, { Component } from 'react';
import {
  Platform,
  StyleSheet,
  Text,
  View
} from 'react-native';


import statusBar from "./src/statusBar"
//import aStore from "./src/asyncStore"
import ButtonSample from "./src/button"
import Images from "./src/images"
import SwitchBtnLogic from "./src/switchBtnLogic"
import WebViewExample from "./src/webViewExample"
import AnimationElement from "./src/animationElement"
import LipObject from "./src/usingLip"





export default class App extends Component {
  render() {
    return (
      //<View statusBar View/>
      //<View aStore View/>
      //  <View style= {styles.container}>
      //   <ButtonSample/>
      //  </View>

      // <View style = {styles.container}>
      //    <Images />
      //   </View>

    //   <View style= {styles.container}>
    //     <ButtonSample/>
    //     <SwitchBtnLogic/>
    //  </View>

      // <View>
      //     <WebViewExample />
      // </View>

      <View>
          <LipObject />
      </View>

    );
  }
}


const styles = StyleSheet.create ({
  container: {
     alignItems: 'center',
     backgroundColor: 'red'
  },
  text: {
     borderWidth: 1,
     padding: 25,
     borderColor: 'blue',
     backgroundColor: 'green'
  }
})


