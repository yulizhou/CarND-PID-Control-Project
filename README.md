### Goal
Build a PID controller and tune the PID hyperparameters by applying the general processing flow as described in the previous lessons.

### Describe the effect each of the P, I, D components had in your implementation.
- **P** is proportional, meaning the error will be proportional to the CTE (cross-track error). The smaller the CTE, the larger the error, the more correction happens to the steering angle
- **I** is integral, meaning we care about the overall CTE over time. We need it because we want to break the balance when only using P and D. 
- **D** is differential, meaning the speed the CTE is changing. The slower the CTE reduces (close to the reference line), the larger the error, the more correction happens to the steering angle

### Describe how the final hyperparameters were chosen.
The final hyperparameters are chosen according to manual tuning.

