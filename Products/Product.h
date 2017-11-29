#pragma once
#define EXPORT

#ifdef EXPORT
	#define DLLFUNC extern "C" _declspec(dllexport)
	#define DLLCLASS _declspec(dllexport)
#else
	#define DLLFUNC extern "C" _declspec(dllimport)
	#define DLLCLASS _declspec(dllimport)
#endif // !EXPORT


#include <string>
using namespace std;


		class DLLCLASS Product
		{
			string name;
			double price;
		public:
			virtual void setName(string input);
			virtual void setPrice(double input);

			string getName();
			double getPrice();
		};

		class DLLCLASS UnliveProduct :
			public Product
		{
			string material;
			int weight;
		public:
			UnliveProduct();
			~UnliveProduct();

			void setWeight(int weight_);
			int getWeight();

			void setMaterial(string material_);
			string getMaterial();
		};

		class DLLCLASS LiveProduct :
			public Product
		{
			int old;
		public:
			LiveProduct();
			~LiveProduct();

			int getOld();
			void setOld(int input);
		};




