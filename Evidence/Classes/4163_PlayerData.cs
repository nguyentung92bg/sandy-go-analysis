// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class PlayerData // TypeDefIndex: 4163
{
	// Fields
	public int version; // 0x10
	public int level; // 0x14
	public long coins; // 0x18
	public List<IntPair> items; // 0x20
	public int hearts; // 0x28
	public long heartTimerStart; // 0x30
	public long infiniteHeartsUntil; // 0x38
	public List<string> flags; // 0x40
	public List<int> guides; // 0x48
	public List<int> elementUnlocks; // 0x50
	public bool sound; // 0x58
	public bool music; // 0x59
	public bool vibration; // 0x5A
	public string language; // 0x60
	public int failCount; // 0x68
	public int failLevel; // 0x6C
	public int pendingFailCount; // 0x70
	public int winStreak; // 0x74
	public int loseStreak; // 0x78
	public int trkLoseLevel; // 0x7C
	public int trkLoseCount; // 0x80
	public TrackAttempt trkOpen; // 0x88
	public int trkAseq; // 0x90
	public int trkUseq; // 0x94
	public string trkUi; // 0x98
	public long installTime; // 0xA0
	public string playerId; // 0xA8
	public int activeDays; // 0xB0
	public long lastActiveDay; // 0xB8
	public int totalWins; // 0xC0
	public int totalLosses; // 0xC4
	public int interstitialsShown; // 0xC8
	public int rewardedShown; // 0xCC
	public long lastInterstitialTime; // 0xD0
	public int levelsSinceInterstitial; // 0xD8
	public bool noAds; // 0xDC
	public int commentShows; // 0xE0
	public int commentConsecutiveClosed; // 0xE4
	public int commentLastCloseDay; // 0xE8
	public int rateBad; // 0xEC
	public bool rateAskPending; // 0xF0
	public string commentOutcome; // 0xF8
	public List<IntPair> attemptsToday; // 0x100
	public List<IntPair> levelTries; // 0x108
	public List<string> purchases; // 0x110
	public List<string> iapStarted; // 0x118
	public List<IntPair> counters; // 0x120
	public List<int> systemOpenGuided; // 0x128
	public List<StrPair> blobs; // 0x130
	public int coldStarts; // 0x138
	public bool firstInterTriggered; // 0x13C
	public double spentUsd; // 0x140
	public List<IntPair> purchaseCounts; // 0x148
	public int headIcon; // 0x150
	public int headFrame; // 0x154
	public int namePlate; // 0x158
	public string playerName; // 0x160
	public long prevActiveDay; // 0x168
	public List<IntPair> rewardedByDay; // 0x170
	public int chestWins; // 0x178
	public int chestIndex; // 0x17C
	public bool chestReady; // 0x180
	public int dailyGiftIndex; // 0x184
	public long dailyGiftLastDay; // 0x188
	public int dailyGiftTotal; // 0x190
	public bool dailyGiftGuideSeen; // 0x194
	public long welcomeBackLastDay; // 0x198
	public bool welcomeBackPending; // 0x1A0
	public int stuckHelpLevel; // 0x1A4
	public long starterShownAt; // 0x1A8
	public long offerDay; // 0x1B0
	public int offersToday; // 0x1B8
	public bool noAdsPopupPending; // 0x1BC
	public long noAdsPopupDay; // 0x1C0
	public int noAdsPopupsToday; // 0x1C8
	public List<IntPair> boosterIntro; // 0x1D0

	// Methods

	// RVA: 0x226F0DC Offset: 0x226B0DC VA: 0x226F0DC
	public void .ctor() { }
}

