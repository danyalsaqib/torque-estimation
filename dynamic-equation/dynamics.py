import numpy as np
import rbdl

# Create a new model
model = rbdl.loadModel("nao.urdf", kwargs={"floating_base":True,"verbose":True})
print("DoF: ", model.q_size)

q = np.zeros(model.q_size)
qdot = np.zeros(model.q_size)
qddot = np.zeros(model.q_size)
tau = np.zeros(model.q_size)
tau_o = np.zeros(model.q_size)
fext = np.zeros(model.q_size)

# rbdl.ForwardDynamics (model, q, qdot, tau, qddot)
print ("qddot = " + str(qddot.transpose()))

rbdl.InverseDynamics (model, q, qdot, qddot, tau_o)
print ("tau_o = " + str(tau_o.transpose()))