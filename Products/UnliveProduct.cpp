#include "Product.h"

		UnliveProduct::UnliveProduct()
		{
		}


		UnliveProduct::~UnliveProduct()
		{
		}

		void UnliveProduct::setWeight(int weight_)
		{
			weight = weight_;
		}

		int UnliveProduct::getWeight()
		{
			return weight;
		}

		void UnliveProduct::setMaterial(string material_)
		{
			material = material_;
		}

		string UnliveProduct::getMaterial()
		{
			return material;
		}
