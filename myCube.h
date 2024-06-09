#ifndef MYCUBE_H_INCLUDED
#define MYCUBE_H_INCLUDED


//myCubeVertices -homogenous coordinates of vertices in model space
//myCubeNormals - homogenous normal vectors of faces (per vertex) in model space
//myCubeVertexNormals - homogenous vertex normals in model space
//myCubeTexCoords - texturing coordinates
//myCubeColors - vertex colors
//myCubeC1 - TBN^-1 matrix column
//myCubeC2 - TBN^-1 matrix column
//myCubeC3 - TBN^-1 matrix column

int myCubeVertexCount = 36;

float myCubeVertices[] = {
	//Wall 1
	1.0f,-1.0f,-1.0f,1.0f,
	-1.0f, 1.0f,-1.0f,1.0f,
	-1.0f,-1.0f,-1.0f,1.0f,

	1.0f,-1.0f,-1.0f,1.0f,
	1.0f, 1.0f,-1.0f,1.0f,
	-1.0f, 1.0f,-1.0f,1.0f,

	//Wall 2
	-1.0f,-1.0f, 1.0f,1.0f,
	1.0f, 1.0f, 1.0f,1.0f,
	1.0f,-1.0f, 1.0f,1.0f,

	-1.0f,-1.0f, 1.0f,1.0f,
	-1.0f, 1.0f, 1.0f,1.0f,
	1.0f, 1.0f, 1.0f,1.0f,


	//Wall 3
	-1.0f,-1.0f,-1.0f,1.0f,
	1.0f,-1.0f, 1.0f,1.0f,
	1.0f,-1.0f,-1.0f,1.0f,

	-1.0f,-1.0f,-1.0f,1.0f,
	-1.0f,-1.0f, 1.0f,1.0f,
	1.0f,-1.0f, 1.0f,1.0f,

	//Wall 4
	-1.0f, 1.0f, 1.0f,1.0f,
	1.0f, 1.0f,-1.0f,1.0f,
	1.0f, 1.0f, 1.0f,1.0f,

	-1.0f, 1.0f, 1.0f,1.0f,
	-1.0f, 1.0f,-1.0f,1.0f,
	1.0f, 1.0f,-1.0f,1.0f,

	//Wall 5
	-1.0f,-1.0f,-1.0f,1.0f,
	-1.0f, 1.0f, 1.0f,1.0f,
	-1.0f,-1.0f, 1.0f,1.0f,

	-1.0f,-1.0f,-1.0f,1.0f,
	-1.0f, 1.0f,-1.0f,1.0f,
	-1.0f, 1.0f, 1.0f,1.0f,

	//Wall 6
	1.0f,-1.0f, 1.0f,1.0f,
	1.0f, 1.0f,-1.0f,1.0f,
	1.0f,-1.0f,-1.0f,1.0f,

	1.0f,-1.0f, 1.0f,1.0f,
	1.0f, 1.0f, 1.0f,1.0f,
	1.0f, 1.0f,-1.0f,1.0f,




};


float myCubeColors[] = {
	//Wall 1
	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,

	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,

	//Wall 2
	0.0f,1.0f,0.0f,1.0f,
	0.0f,1.0f,0.0f,1.0f,
	0.0f,1.0f,0.0f,1.0f,

	0.0f,1.0f,0.0f,1.0f,
	0.0f,1.0f,0.0f,1.0f,
	0.0f,1.0f,0.0f,1.0f,

	//Wall 3
	0.0f,0.0f,1.0f,1.0f,
	0.0f,0.0f,1.0f,1.0f,
	0.0f,0.0f,1.0f,1.0f,

	0.0f,0.0f,1.0f,1.0f,
	0.0f,0.0f,1.0f,1.0f,
	0.0f,0.0f,1.0f,1.0f,

	//Wall 4
	1.0f,1.0f,0.0f,1.0f,
	1.0f,1.0f,0.0f,1.0f,
	1.0f,1.0f,0.0f,1.0f,

	1.0f,1.0f,0.0f,1.0f,
	1.0f,1.0f,0.0f,1.0f,
	1.0f,1.0f,0.0f,1.0f,

	//Wall 5
	0.0f,1.0f,1.0f,1.0f,
	0.0f,1.0f,1.0f,1.0f,
	0.0f,1.0f,1.0f,1.0f,

	0.0f,1.0f,1.0f,1.0f,
	0.0f,1.0f,1.0f,1.0f,
	0.0f,1.0f,1.0f,1.0f,

	//Wall 6
	1.0f,1.0f,1.0f,1.0f,
	1.0f,1.0f,1.0f,1.0f,
	1.0f,1.0f,1.0f,1.0f,

	1.0f,1.0f,1.0f,1.0f,
	1.0f,1.0f,1.0f,1.0f,
	1.0f,1.0f,1.0f,1.0f,
};

float myCubeNormals[] = {
	//Wall 1
	0.0f, 0.0f,-1.0f,0.0f,
	0.0f, 0.0f,-1.0f,0.0f,
	0.0f, 0.0f,-1.0f,0.0f,

	0.0f, 0.0f,-1.0f,0.0f,
	0.0f, 0.0f,-1.0f,0.0f,
	0.0f, 0.0f,-1.0f,0.0f,

	//Wall 2
	0.0f, 0.0f, 1.0f,0.0f,
	0.0f, 0.0f, 1.0f,0.0f,
	0.0f, 0.0f, 1.0f,0.0f,

	0.0f, 0.0f, 1.0f,0.0f,
	0.0f, 0.0f, 1.0f,0.0f,
	0.0f, 0.0f, 1.0f,0.0f,

	//Wall 3
	0.0f,-1.0f, 0.0f,0.0f,
	0.0f,-1.0f, 0.0f,0.0f,
	0.0f,-1.0f, 0.0f,0.0f,

	0.0f,-1.0f, 0.0f,0.0f,
	0.0f,-1.0f, 0.0f,0.0f,
	0.0f,-1.0f, 0.0f,0.0f,

	//Wall 4
	0.0f, 1.0f, 0.0f,0.0f,
	0.0f, 1.0f, 0.0f,0.0f,
	0.0f, 1.0f, 0.0f,0.0f,

	0.0f, 1.0f, 0.0f,0.0f,
	0.0f, 1.0f, 0.0f,0.0f,
	0.0f, 1.0f, 0.0f,0.0f,

	//Wall 5
	-1.0f, 0.0f, 0.0f,0.0f,
	-1.0f, 0.0f, 0.0f,0.0f,
	-1.0f, 0.0f, 0.0f,0.0f,

	-1.0f, 0.0f, 0.0f,0.0f,
	-1.0f, 0.0f, 0.0f,0.0f,
	-1.0f, 0.0f, 0.0f,0.0f,

	//Wall 6
	1.0f, 0.0f, 0.0f,0.0f,
	1.0f, 0.0f, 0.0f,0.0f,
	1.0f, 0.0f, 0.0f,0.0f,

	1.0f, 0.0f, 0.0f,0.0f,
	1.0f, 0.0f, 0.0f,0.0f,
	1.0f, 0.0f, 0.0f,0.0f,

};

float myCubeVertexNormals[] = {
	//Wall 1
	1.0f,-1.0f,-1.0f,0.0f,
	-1.0f, 1.0f,-1.0f,0.0f,
	-1.0f,-1.0f,-1.0f,0.0f,

	1.0f,-1.0f,-1.0f,0.0f,
	1.0f, 1.0f,-1.0f,0.0f,
	-1.0f, 1.0f,-1.0f,0.0f,

	//Wall 2
	-1.0f,-1.0f, 1.0f,0.0f,
	1.0f, 1.0f, 1.0f,0.0f,
	1.0f,-1.0f, 1.0f,0.0f,

	-1.0f,-1.0f, 1.0f,0.0f,
	-1.0f, 1.0f, 1.0f,0.0f,
	1.0f, 1.0f, 1.0f,0.0f,


	//Wall 3
	-1.0f,-1.0f,-1.0f,0.0f,
	1.0f,-1.0f, 1.0f,0.0f,
	1.0f,-1.0f,-1.0f,0.0f,

	-1.0f,-1.0f,-1.0f,0.0f,
	-1.0f,-1.0f, 1.0f,0.0f,
	1.0f,-1.0f, 1.0f,0.0f,

	//Wall 4
	-1.0f, 1.0f, 1.0f,0.0f,
	1.0f, 1.0f,-1.0f,0.0f,
	1.0f, 1.0f, 1.0f,0.0f,

	-1.0f, 1.0f, 1.0f,0.0f,
	-1.0f, 1.0f,-1.0f,0.0f,
	1.0f, 1.0f,-1.0f,0.0f,

	//Wall 5
	-1.0f,-1.0f,-1.0f,0.0f,
	-1.0f, 1.0f, 1.0f,0.0f,
	-1.0f,-1.0f, 1.0f,0.0f,

	-1.0f,-1.0f,-1.0f,0.0f,
	-1.0f, 1.0f,-1.0f,0.0f,
	-1.0f, 1.0f, 1.0f,0.0f,

	//Wall 6
	1.0f,-1.0f, 1.0f,0.0f,
	1.0f, 1.0f,-1.0f,0.0f,
	1.0f,-1.0f,-1.0f,0.0f,

	1.0f,-1.0f, 1.0f,0.0f,
	1.0f, 1.0f, 1.0f,0.0f,
	1.0f, 1.0f,-1.0f,0.0f,
};

float myCubeTexCoords[] = {
	//Wall 1
	1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
	1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

	//Wall 2
	1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
	1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

	//Wall 3
	1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
	1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

	//Wall 4
	1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
	1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

	//Wall 5
	1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
	1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

	//Wall 6
	1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
	1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,
};

float myCubeC1[] = {
	//Wall 1
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	//Wall 2
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,

	//Wall 3
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	//Wall 4
	-1.000000f,0.000000f,-0.000000f,0.000000f,
	-1.000000f,0.000000f,-0.000000f,0.000000f,
	-1.000000f,0.000000f,-0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,

	//Wall 5
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,

	//Wall 6
	0.000000f,0.000000f,1.000000f,0.000000f,
	0.000000f,0.000000f,1.000000f,0.000000f,
	0.000000f,0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,

};
float myCubeC2[] = {
	//Wall 1
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	//Wall 2
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,

	//Wall 3
	-0.000000f,0.000000f,-1.000000f,0.000000f,
	-0.000000f,0.000000f,-1.000000f,0.000000f,
	-0.000000f,0.000000f,-1.000000f,0.000000f,
	-0.000000f,0.000000f,-1.000000f,0.000000f,
	-0.000000f,0.000000f,-1.000000f,0.000000f,
	-0.000000f,0.000000f,-1.000000f,0.000000f,
	//Wall 4
	-0.000000f,0.000000f,1.000000f,0.000000f,
	-0.000000f,0.000000f,1.000000f,0.000000f,
	-0.000000f,0.000000f,1.000000f,0.000000f,
	0.000000f,0.000000f,1.000000f,0.000000f,
	0.000000f,0.000000f,1.000000f,0.000000f,
	0.000000f,0.000000f,1.000000f,0.000000f,

	//Wall 5
	-0.000000f,-1.000000f,0.000000f,0.000000f,
	-0.000000f,-1.000000f,0.000000f,0.000000f,
	-0.000000f,-1.000000f,0.000000f,0.000000f,
	0.000000f,-1.000000f,-0.000000f,0.000000f,
	0.000000f,-1.000000f,-0.000000f,0.000000f,
	0.000000f,-1.000000f,-0.000000f,0.000000f,
	//Wall 6
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,
	-0.000000f,-1.000000f,-0.000000f,0.000000f,

};
float myCubeC3[] = {
	//Wall 1
	0.000000f,0.000000f,-1.000000f,0.000000f,
	0.000000f,0.000000f,-1.000000f,0.000000f,
	0.000000f,0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	0.000000f,-0.000000f,-1.000000f,0.000000f,
	//Wall 2
	0.000000f,-0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,
	0.000000f,-0.000000f,1.000000f,0.000000f,

	//Wall 3
	0.000000f,-1.000000f,0.000000f,0.000000f,
	0.000000f,-1.000000f,0.000000f,0.000000f,
	0.000000f,-1.000000f,0.000000f,0.000000f,
	0.000000f,-1.000000f,0.000000f,0.000000f,
	0.000000f,-1.000000f,0.000000f,0.000000f,
	0.000000f,-1.000000f,0.000000f,0.000000f,
	//Wall 4
	0.000000f,1.000000f,0.000000f,0.000000f,
	0.000000f,1.000000f,0.000000f,0.000000f,
	0.000000f,1.000000f,0.000000f,0.000000f,
	0.000000f,1.000000f,0.000000f,0.000000f,
	0.000000f,1.000000f,0.000000f,0.000000f,
	0.000000f,1.000000f,0.000000f,0.000000f,


	//Wall 5
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,
	-1.000000f,-0.000000f,0.000000f,0.000000f,

	//Wall 6
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,
	1.000000f,-0.000000f,0.000000f,0.000000f,


};



#endif // MYCUBE_H_INCLUDED
