import React, { Component } from 'react';
import ReactNative, {
  StyleSheet,
  Text,
  View,
  Button
} from 'react-native';

var LipObject = require('NativeModules').LipInterface;
var inputParameter = {email:"testingLip@lip.com",password:"12345678","createAccount":false};
var inputParameter1 = {email:"testingLip@lip.com",password:"12345678","createAccount":true};


class UsingLIP extends React.Component {
  // 3
	  constructor(props) {
	    super(props);
	    this.state = {
	      msg: "test"
	    };
	  }


// 4
	  render() {
	    return(
	    	<View>
	            <View style={styles.container}>

	            		<Button style={styles.btn1}
	            				 title =  "Login"
            					color = "purple"
           				 		//onPress = { () => {this.showLip(inputParameter)} }
           				 		onPress = {this.showLip.bind(this,inputParameter)}
           				 />
           				 
	              	
	              </View>
	              <View style={styles.container}>

	              		<Button style={styles.btn1}
	            				 title =  "Create Account"
            					color = "purple"
           				 		onPress = { () => {this.showLip(inputParameter1)} }

           				 />
           			</View>
	         </View>
	            );
	}

	showLip = (inputParameter) => {
	//var inputParameter = {email:"testingLip@lip.com",password:"12345678","createAccount":true};
		LipObject.showLIPLoginWithParams(inputParameter, (error, response) => {
	      if (error) {
	        console.error(error);
	      } else {
	       // this.setState({msg: msg});//this call is calling thre showlip method recursively.I think setState calling the render() and that 
	       //is calling the method again
	       console.log(response);
	      }
	    })
	}
}


var styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    backgroundColor: 'green',
    marginTop: 100,
    height:500
  },
  btn1: {
    flex: 1,
    justifyContent: 'center',
    backgroundColor: '#F5FCFF',
    marginTop: 150
  },
  btn2: {
    flex: 1,
    justifyContent: 'center',
    backgroundColor: '#F5FCFF',
    marginTop: 250
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    margin: 20,
  },
  input: {
    width: 100,
    height: 40,
    borderColor: 'red',
    borderWidth: 1,
    alignSelf: 'center'
  },
  result: {
    textAlign: 'center',
    color: '#333333',
    fontSize: 30,
    fontWeight: 'bold',
    margin: 20,
  },
});

 
module.exports = UsingLIP;