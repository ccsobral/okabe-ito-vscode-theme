import React from 'react'
import ReactDOM from 'react-dom'

class App extends React.Component {
    render() {
        const foo = 'bar'
        return (
            <div className='App'>
                <h1>Header</h1>
                <p>This is a paragraph</p>
            </div>
        )
    }
}

ReactDOM.render(
    <App />,
    document.getElementById('root')
)