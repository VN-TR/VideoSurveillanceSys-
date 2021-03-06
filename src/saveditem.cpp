#include "VideoSurveillanceSys/Saveditem.h"
#include <opencv2/core/core.hpp>
using namespace  cv;

Saveditem::Saveditem(string _itemClass, double _itemSite_X1, double _itemSite_X2, double _itemSite_Y1, double _itemSite_Y2 ,float _itemscore)
{
	Saveditem::itemClass = _itemClass;
	Saveditem::itemSite_X1 = _itemSite_X1;
	Saveditem::itemSite_X2 = _itemSite_X2;
	Saveditem::itemSite_Y1 = _itemSite_Y1;
	Saveditem::itemSite_Y2 = _itemSite_Y2;
	Saveditem::itemscore = _itemscore;
}

Saveditem::~Saveditem()
{

}

void Saveditem::SaveInfo(string _itemClass, double _itemSite_X1, double _itemSite_X2, double _itemSite_Y1, double _itemSite_Y2)
{
	Saveditem::itemClass = _itemClass;
	Saveditem::itemSite_X1 = _itemSite_X1;
	Saveditem::itemSite_X2 = _itemSite_X2;
	Saveditem::itemSite_Y1 = _itemSite_Y1;
	Saveditem::itemSite_Y2 = _itemSite_Y2;
}