#include "Datei.h"



Datei::Datei()
{
}

bool Datei::open()
{
	bool ret = false;
	
	try
	{
		if (!File::Exists(pfad))
		{
			sr = File::CreateText(pfad);

			//cout << "nicht offen" << endl;
			//throw Dateiexception("Exception: Datei nicht offen zum lesen ...");
		}
	}catch (IOException^ e)
		{
			// given (throw) back exception to the calling procedure
			throw e;
		}
		ret = true;

	return ret;
}

Datei::Datei(String^ s): pfad{s}
{
}

bool Datei::schreibedatei(String^ s )
{
	bool ret = false;
	this->open();
	if (File::Exists(pfad))
	{
		
		try {
			sr = File::CreateText(pfad);
			sr->Write(s);
		}
		catch (IOException^ e)
		{
			throw e;
		}
		finally
		{
		   if (sr)
					delete (IDisposable^)(sr);
		}
	}
	else
	{
		ret = true;
	
	}
	return ret;
}
