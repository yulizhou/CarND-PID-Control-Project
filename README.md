### Goal
Build a PID controller and tune the PID hyperparameters by applying the general processing flow as described in the previous lessons.

### Describe the effect each of the P, I, D components had in your implementation.
- **P** is proportional, meaning the error will be proportional to the CTE (cross-track error). The smaller the CTE, the larger the error, the more correction happens to the steering angle
- **I** is integral, meaning we care about the overall CTE over time. We need it because we want to break the balance when only using P and D. 
- **D** is differential, meaning the speed the CTE is changing. The slower the CTE reduces (close to the reference line), the larger the error, the more correction happens to the steering angle

### Describe how the final hyperparameters were chosen.
The final hyperparameters are chosen according to manual tuning.

A good guide to tune PID by hand ([source](https://robotics.stackexchange.com/questions/167/what-are-good-strategies-for-tuning-pid-loops))
```
To tune a PID use the following steps:

- Set all gains to zero.
- Increase the P gain until the response to a disturbance is steady oscillation.
- Increase the D gain until the the oscillations go away (i.e. it's critically damped).
- Repeat steps 2 and 3 until increasing the D gain does not stop the oscillations.
- Set P and D to the last stable values.
- Increase the I gain until it brings you to the setpoint with the number of oscillations desired (normally zero but a quicker response can be had if you don't mind a couple oscillations of overshoot)

What disturbance you use depends on the mechanism the controller is attached to. Normally moving the mechanism by hand away from the setpoint and letting go is enough. If the oscillations grow bigger and bigger then you need to reduce the P gain.

If you set the D gain too high the system will begin to chatter (vibrate at a higher frequency than the P gain oscillations). If this happens, reduce the D gain until it stops.
```

