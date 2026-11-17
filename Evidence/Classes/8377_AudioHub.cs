// Namespace: Dino.BusSand
public sealed class AudioHub : MonoBehaviour // TypeDefIndex: 8377
{
	// Fields
	[CompilerGenerated]
	private static AudioHub <I>k__BackingField; // 0x0
	public static Func<string, AudioClip> Resolve; // 0x8
	public static Func<string, AudioClip> Synth; // 0x10
	public static Func<float> ExternalMusicGain; // 0x18
	public static Func<IList<string>, Func<bool>> PreloadAsync; // 0x20
	[CompilerGenerated]
	private static bool <PreloadDone>k__BackingField; // 0x28
	private const float PreloadBudgetMs = 6;
	private static bool s_sfxOn; // 0x29
	private static bool s_musicOn; // 0x2A
	public const string ConfigPath = "Config/audio_events";
	private AudioTable _table; // 0x20
	private readonly Dictionary<string, AudioEventDef> _events; // 0x28
	private readonly Dictionary<string, float> _busLin; // 0x30
	private readonly Dictionary<string, AudioClip> _clips; // 0x38
	private readonly HashSet<string> _missing; // 0x40
	private readonly Dictionary<string, float> _lastStart; // 0x48
	private readonly Dictionary<string, int> _lastClip; // 0x50
	private readonly Dictionary<string, int> _seq; // 0x58
	private readonly Dictionary<string, int> _step; // 0x60
	private readonly List<AudioHub.Voice> _voices; // 0x68
	private readonly Dictionary<string, AudioHub.LoopVoice> _loops; // 0x70
	private readonly AudioSource[] _mus; // 0x78
	private int _musCur; // 0x80
	private AudioEventDef _musDef; // 0x88
	private int _musTrack; // 0x90
	private float _musFade; // 0x94
	private float _musTarget; // 0x98
	private float _musFadeSpeed; // 0x9C
	private float _musXfade; // 0xA0
	private float _musXfadeT; // 0xA4
	private float _musGain; // 0xA8
	private float _musPrevGain; // 0xAC
	private float _duckLevel; // 0xB0
	private float _duckUntil; // 0xB4
	private float _duck; // 0xB8
	private float _musStarted; // 0xBC
	private readonly Dictionary<string, string> _norm; // 0xC0

	// Properties
	public static AudioHub I { get; set; }
	public static bool PreloadDone { get; set; }
	public static bool SfxOn { get; set; }
	public static bool MusicOn { get; set; }
	public IEnumerable<AudioEventDef> Events { get; }
	public int VoiceCount { get; }
	public int BusyVoices { get; }
	public string MusicId { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2372B48 Offset: 0x236EB48 VA: 0x2372B48
	public static AudioHub get_I() { }

	[CompilerGenerated]
	// RVA: 0x2372BA0 Offset: 0x236EBA0 VA: 0x2372BA0
	private static void set_I(AudioHub value) { }

	[CompilerGenerated]
	// RVA: 0x2372C08 Offset: 0x236EC08 VA: 0x2372C08
	public static bool get_PreloadDone() { }

	[CompilerGenerated]
	// RVA: 0x2372C60 Offset: 0x236EC60 VA: 0x2372C60
	private static void set_PreloadDone(bool value) { }

	// RVA: 0x2372CC0 Offset: 0x236ECC0 VA: 0x2372CC0
	public static bool get_SfxOn() { }

	// RVA: 0x2372D18 Offset: 0x236ED18 VA: 0x2372D18
	public static void set_SfxOn(bool value) { }

	// RVA: 0x2373100 Offset: 0x236F100 VA: 0x2373100
	public static bool get_MusicOn() { }

	// RVA: 0x2373158 Offset: 0x236F158 VA: 0x2373158
	public static void set_MusicOn(bool value) { }

	// RVA: 0x2373284 Offset: 0x236F284 VA: 0x2373284
	public static AudioHub Ensure() { }

	// RVA: 0x2373428 Offset: 0x236F428 VA: 0x2373428
	private void Awake() { }

	// RVA: 0x23738E8 Offset: 0x236F8E8 VA: 0x23738E8
	public void Load(string json) { }

	// RVA: 0x2374274 Offset: 0x2370274 VA: 0x2374274
	private static string Norm(string s) { }

	// RVA: 0x23746FC Offset: 0x23706FC VA: 0x23746FC
	private string Key(string id) { }

	// RVA: 0x23742EC Offset: 0x23702EC VA: 0x23742EC
	private static float Db(float db) { }

	// RVA: 0x23747D0 Offset: 0x23707D0 VA: 0x23747D0
	public bool Has(string id) { }

	// RVA: 0x2374858 Offset: 0x2370858 VA: 0x2374858
	public AudioEventDef Def(string id) { }

	// RVA: 0x23748F8 Offset: 0x23708F8 VA: 0x23748F8
	public IEnumerable<AudioEventDef> get_Events() { }

	// RVA: 0x2374910 Offset: 0x2370910 VA: 0x2374910
	public int get_VoiceCount() { }

	// RVA: 0x2374958 Offset: 0x2370958 VA: 0x2374958
	public int get_BusyVoices() { }

	// RVA: 0x2374AE8 Offset: 0x2370AE8 VA: 0x2374AE8
	private float BusGain(string bus) { }

	// RVA: 0x23742FC Offset: 0x23702FC VA: 0x23742FC
	public AudioClip Clip(string asset) { }

	[IteratorStateMachine(typeof(AudioHub.<Preload>d__67))]
	// RVA: 0x2374208 Offset: 0x2370208 VA: 0x2374208
	private IEnumerator Preload() { }

	// RVA: 0x237505C Offset: 0x237105C VA: 0x237505C
	public bool Play(string id, float volume = 1, float pitch = 1, float pan = 0, float delay = 0) { }

	// RVA: 0x2375064 Offset: 0x2371064 VA: 0x2375064
	private bool PlayDepth(string id, float volume, float pitch, float pan, float delay, int depth) { }

	// RVA: 0x2375C0C Offset: 0x2371C0C VA: 0x2375C0C
	private int PickClip(AudioEventDef e) { }

	// RVA: 0x2375F30 Offset: 0x2371F30 VA: 0x2375F30
	private AudioHub.Voice Acquire(int prio) { }

	// RVA: 0x2376204 Offset: 0x2372204 VA: 0x2376204
	public void Stop(string id) { }

	// RVA: 0x2376378 Offset: 0x2372378 VA: 0x2376378
	public void StopAllSfx() { }

	// RVA: 0x2376624 Offset: 0x2372624 VA: 0x2376624
	public void Loop(string id, float level, float pitch = 1, float pan = 0) { }

	// RVA: 0x2376C34 Offset: 0x2372C34 VA: 0x2376C34
	public AudioLowPassFilter LoopLowPass(string id) { }

	// RVA: 0x23768B0 Offset: 0x23728B0 VA: 0x23768B0
	private AudioHub.LoopVoice LoopVoiceOf(string id) { }

	// RVA: 0x23761A8 Offset: 0x23721A8 VA: 0x23761A8
	public void Duck(float level, float seconds) { }

	// RVA: 0x2376D38 Offset: 0x2372D38 VA: 0x2376D38
	public string get_MusicId() { }

	// RVA: 0x2375A14 Offset: 0x2371A14 VA: 0x2375A14
	public void PlayMusic(string id, float fadeIn = 0.6) { }

	// RVA: 0x2376D50 Offset: 0x2372D50 VA: 0x2376D50
	private void StartTrack(int index, bool crossfade) { }

	// RVA: 0x23770B4 Offset: 0x23730B4 VA: 0x23770B4
	public void FadeOutMusic(float seconds) { }

	// RVA: 0x23770D8 Offset: 0x23730D8 VA: 0x23770D8
	public void StopMusic() { }

	// RVA: 0x2372E44 Offset: 0x236EE44 VA: 0x2372E44
	private void ApplyToggles() { }

	// RVA: 0x2377158 Offset: 0x2373158 VA: 0x2377158
	private void Update() { }

	// RVA: 0x2377864 Offset: 0x2373864 VA: 0x2377864
	public void .ctor() { }

	// RVA: 0x2377BD0 Offset: 0x2373BD0 VA: 0x2377BD0
	private static void .cctor() { }
}

