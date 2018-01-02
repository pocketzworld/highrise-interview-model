# Network Messages

### Request
A Request message is used to request data from a receiver or to request an action to be performed by a receiver. A Request message always results in an associated response message that can contain either the requested data or indicate the result of an action. A Request message can optionally contain a payload. The receiver handles the request and issues a response message.

### Response
A Response message is the result of a single Request message. A Response message can optionally contain a payload. From a developer perspective, a Response message can be thought as the return value of a method. The value can be of a specific type or not (void).

### Event
An Event message is a "fire and forget" message. The sender of the Event message does not expect a response --so the receiver is known as a listener.
