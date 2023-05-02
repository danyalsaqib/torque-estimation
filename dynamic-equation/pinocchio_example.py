from __future__ import print_function
 
import pinocchio as pin
import numpy as np

def get_joint_names(model):
	ref_list = []

	for name in model.names:
		if name != 'universe':
			ref_list.append(name)
			#print(name)
	print(ref_list)
	print(len(ref_list))
	# print("Joint Names: ", model.names)
	return ref_list
 
# model = pin.buildSampleModelManipulator()

model = pin.buildModelFromUrdf('test.urdf')

data = model.createData()

joint_list = get_joint_names(model)

q = np.zeros(model.nq)
qdot = np.zeros(model.nq)
qddot = np.zeros(model.nq)
# fext = np.zeros(model.nq)

# q = pin.neutral(model)
# v = pin.utils.zero(model.nv)
# a = pin.utils.zero(model.nv)

print ("qddot: " + str(qddot.transpose()))
print ("qddot shape = ", qddot.shape)

tau = pin.rnea(model,data,q,qdot,qddot)
torques = np.transpose(tau.T)

print('tau: ', torques)
print ("torques shape = ", torques.shape)