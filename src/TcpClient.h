

class TcpClient
{
public:
	TcpClient()
	{
		//1:set callbacks
		//2:attation that make TcpConnection's MessageCallback
		//  call codec's MessageCallback, then codec encode,
		//  after encode,codec call TcpClient's MessageCallback
		//
		//3 levels: tcpConnection, codec, TcpClient 
	}
	~TcpClient();

	//connect
	{
		//1:new TcpConnection
		//2:async_connect(socket, endpoint)
	}

	//disconnect
	{
		//1:close write and MessageCallback will read 0 in a minite
	}

	//send(conn, buffer)

	//setConnectionCallback

	//setMessageCallback
	{

	}

	//setWriteCompleteCallback

	//onClose
	{
		//make onClose to be TcpConnection's CloseCallback
		//in function onClose,write_read is closed
		//1:TcpConnection should be reset(connection is dead here)
	}

private:
	//codec
	
};