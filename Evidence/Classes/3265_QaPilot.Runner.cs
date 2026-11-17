// Namespace: 
private sealed class QaPilot.Runner : MonoBehaviour // TypeDefIndex: 3265
{
	// Fields
	private const float PollEvery = 0.2;
	private const float StateEvery = 0.5;
	private static readonly HashSet<string> Screens; // 0x0
	private readonly List<string> _results; // 0x20
	private readonly Vector3[] _corners; // 0x28
	private string _play; // 0x30
	private float _tapGap; // 0x38
	private float _greed; // 0x3C
	private float _nextPoll; // 0x40
	private float _nextState; // 0x44
	private float _nextTap; // 0x48
	private int _taps; // 0x4C
	private int _lastLevel; // 0x50
	private bool _errorLogged; // 0x54
	private PlayState _lastState; // 0x58

	// Properties
	private string InDir { get; }
	private string OutPath { get; }

	// Methods

	// RVA: 0x2157748 Offset: 0x2153748 VA: 0x2157748
	private string get_InDir() { }

	// RVA: 0x21577C0 Offset: 0x21537C0 VA: 0x21577C0
	private string get_OutPath() { }

	// RVA: 0x2157838 Offset: 0x2153838 VA: 0x2157838
	private void Awake() { }

	// RVA: 0x2157D8C Offset: 0x2153D8C VA: 0x2157D8C
	private void Update() { }

	// RVA: 0x2158188 Offset: 0x2154188 VA: 0x2158188
	private void Poll() { }

	// RVA: 0x215A62C Offset: 0x215662C VA: 0x215A62C
	private void Run(string line) { }

	// RVA: 0x2157AC4 Offset: 0x2153AC4 VA: 0x2157AC4
	private void Reply(string id, bool ok, string msg) { }

	[IteratorStateMachine(typeof(QaPilot.Runner.<Shot>d__24))]
	// RVA: 0x215BE74 Offset: 0x2157E74 VA: 0x215BE74
	private IEnumerator Shot(string id, string name) { }

	// RVA: 0x215855C Offset: 0x215455C VA: 0x215855C
	private void Play(float now) { }

	// RVA: 0x2157F18 Offset: 0x2153F18 VA: 0x2157F18
	private void TrackResult() { }

	// RVA: 0x215C168 Offset: 0x2158168 VA: 0x215C168
	private static List<UIPanel> OpenPanels() { }

	// RVA: 0x215BF38 Offset: 0x2157F38 VA: 0x215BF38
	private static UIPanel TopPopup() { }

	// RVA: 0x215BCE8 Offset: 0x2157CE8 VA: 0x215BCE8
	private static GuidePanel Guide() { }

	// RVA: 0x215B2F4 Offset: 0x21572F4 VA: 0x215B2F4
	private Transform FindClickable(string what, out string panel) { }

	[IteratorStateMachine(typeof(QaPilot.Runner.<Clickables>d__31))]
	// RVA: 0x215C4BC Offset: 0x21584BC VA: 0x215C4BC
	private static IEnumerable<Transform> Clickables(UIPanel p) { }

	// RVA: 0x215B954 Offset: 0x2157954 VA: 0x215B954
	private static bool Reachable(Transform t) { }

	// RVA: 0x215C53C Offset: 0x215853C VA: 0x215C53C
	private static string PathOf(Transform t, Transform panel) { }

	// RVA: 0x215C6A4 Offset: 0x21586A4 VA: 0x215C6A4
	private static string Label(Transform t) { }

	// RVA: 0x215C83C Offset: 0x215883C VA: 0x215C83C
	private Dictionary<string, object> Rect(Transform t, Transform panel, float sx, float sy) { }

	// RVA: 0x21588B0 Offset: 0x21548B0 VA: 0x21588B0
	private void WriteState() { }

	// RVA: 0x215CD00 Offset: 0x2158D00 VA: 0x215CD00
	public void .ctor() { }

	// RVA: 0x215CDF0 Offset: 0x2158DF0 VA: 0x215CDF0
	private static void .cctor() { }
}

