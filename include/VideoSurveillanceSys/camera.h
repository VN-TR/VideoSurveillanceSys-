#pragma once

#ifndef __CAMERA_H__
#define __CAMERA_H__
/**Copyright (C) 2020-2020 Visionnav Robotics Limited. All right reserved
* @file: camera.hh
* @version: V 1.0.0
* @author: bcyang@Visionnav.com;
* @date: 2020-04-18
* @brief: 相机类头文件;
* @details:
* @verbatim:
*/

// INCLUDE PART
#include <opencv/cv.h>
#include "HCNetSDK/HCNetSDK.h"
#include "HCNetSDK/plaympeg4.h"
#include <thread>

using namespace cv;


// DECLARATION PART
namespace VisionMonitor
{

	struct Params
	{
		bool data_collection_stage = false;			/*!< 是否为采集数据阶段 */
		bool image_log_switch = true;		        /*!< 记录图片日志开关 */
		bool display_switch = true;		            /*!< 图像显示输出开关 */
		int data_from = 1;							/*!< 1：实时 0：静态数据./test_image */
		int	connect_time = 2000;					/*!< 连接时间 */
		int	reconnect_time = 10000;					/*!< 重连时间 */
	};
	/**
	 * @brief 相机类
	 */
	class Camera
	{
	public:

		Camera();

		~Camera();

		/**
	* @brief 设置设备编号
	* @param[in] int id 设备编号
	* @return 无
	* @retval void
	*/
		void setID(int id);

		/**
		  * @brief 获取设备编号
		  * @return 返回设备编号
		  * @retval int 设备编号
		  */
		int getID(void);

		/**
		  * @brief 设置设备IP地址
		  * @param[in] std::string ip 设备IP地址
		  * @return 无
		  * @retval void
		  */
		void setIP(std::string ip);

		/**
		  * @brief 获取设备IP地址
		  * @return 返回设备IP地址
		  * @retval std::string 设备IP地址
		  */
		std::string getIP(void);

		/**
		  * @brief 设置设备端口号
		  * @param[in] int port 设备端口号
		  * @return 无
		  * @retval void
		  */
		void setPort(int port);

		/**
		  * @brief 获取设备编号
		  * @return 返回设备端口号
		  * @retval int 设备端口号
		  */
		int getPort(void);

		/**
		  * @brief 设置设备编号
		  * @param[in] std::string user 设备注册用户名
		  * @return 无
		  * @retval void
		  */
		void setUser(std::string user);

		/**
		  * @brief 获取设备注册用户名
		  * @return 返回设备注册用户名
		  * @retval std::string 设备注册用户名
		  */
		std::string getUser(void);

		/**
		  * @brief 设置设备注册密码
		  * @param[in] std::string pwd 设备注册密码
		  * @return 无
		  * @retval void
		  */
		void setPWD(std::string pwd);

		/**
		  * @brief 获取设备注册密码
		  * @return 返回设备注册密码
		  * @retval std::string 设备注册密码
		  */
		std::string getPWD(void);


		/**
		  * @brief  获取摄像头内部参数
		  * @date   2018年9月18日
		  * @return     cv::Mat  内部参数矩阵
		  */
		cv::Mat	getIntrinsicMatrix();

		/**
		  * @brief  设置摄像头内部参数
		  * @date   2018年9月18日
		  * @param[in]  cv::Mat intrinsic_matrix  内部参数矩阵
		  */
		void setIntrinsicMatrix(cv::Mat &intrinsic_matrix);

		/**
		  * @brief  获取镜头畸变矩阵
		  * @author admin
		  * @date   2018年9月18日
		  * @param[out]
		  * @return     cv::Mat  畸变矩阵
		  */
		cv::Mat	getDistortionCoeffs();

		/**
		  * @brief  设置镜头畸变参数矩阵
		  * @author admin
		  * @date   2018年9月18日
		  * @param[in]  cv::Mat & distortion_coeffs  畸变矩阵
		  */
		void setDistortionCoeffs(cv::Mat &distortion_coeffs);



		private:
			//相机参数
			int							id_;						/*! <编号 */
			int							port_;						/*! <端口号 */
			std::string					ip_;						/*! <IP地址 */
			std::string					user_;					    /*! <用户名 */
			std::string					pwd_;						/*! <密码 */
			cv::Mat						intrinsic_matrix_;			/*! <摄像头内部参数 */
			cv::Mat						distortion_coeffs_;			/*! <镜头畸变参数 */

	}; // end class camera

} // end namespace VisionMonitor

#endif	// __CAMERA_H__
