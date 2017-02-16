#ifndef TCP_CONNECTION_H__
#define TCP_CONNECTION_H__
#include <boost/asio.hpp>
#include <boost/function.hpp>
#include <boost/enable_shared_from_this.hpp>
#include "callbacks.h"
using namespace boost::asio;
using namespace boost::asio::ip::tcp;



class TcpConnection : boost::noncopyable,
					  public boost::enable_shared_from_this<TcpConnection>
{
public:
	TcpConnection(const io_service& io);
	~TcpConnection();

	//getSocket

	//shutdownWrite

	//async_write

	//setConnectionCallback

	//setMessageCallback

	//setWriteCompleteCallback

	//setCloseCallback

	//handleRead
	{
		//in handleRead,when read 0(eof)
		//1:close read_write
		//2:call CloseCallback
	}

private:
	//buffer  
	//only when sizeof (readed data) >= sizeof(one message)
	//the codec could retrieve data in buffer

};

#endif