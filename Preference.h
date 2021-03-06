#ifndef _PREFERENCE_H_
#define _PREFERENCE_H_

class Preference {
  public:
    enum BalloonPos {
      BP_LeftTop,
      BP_LeftBottom,
      BP_RightTop,
      BP_RightBottom,
    };

    struct AP_t {
    	const char* pSSID;
    	const char* pPassword;
    };

  public:
    Preference(void);
    virtual ~Preference(void);
    bool load(const char* pFileName);
    bool isLoaded(void) const;
    int getApNum(void) const;
    bool getAP(int index, const char** ppSSID, const char** ppPassword) const;
    int getImageNum(void) const;
    bool getImage(int index, const char** ppFile, BalloonPos* pePos) const;

  private:
    class PrefImpl* m_pImpl;
};
#endif //_PREFERENCE_H_
