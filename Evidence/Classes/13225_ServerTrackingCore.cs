// Namespace: Dino.Tracking
internal sealed class ServerTrackingCore // TypeDefIndex: 13225
{
	// Fields
	private readonly int _batchMaxEvents; // 0x10
	private readonly float _batchIntervalSeconds; // 0x14
	private readonly string _platform; // 0x18
	private readonly string _appVersion; // 0x20
	private readonly string _userId; // 0x28
	private readonly string _appId; // 0x30
	private readonly Func<long> _utcNowMs; // 0x38
	private readonly List<ServerTrackingCore.PendingEvent> _batch; // 0x40
	private float _elapsed; // 0x48
	private bool _needsFlush; // 0x4C

	// Properties
	public int PendingCount { get; }

	// Methods

	// RVA: 0x2460B60 Offset: 0x245CB60 VA: 0x2460B60
	public int get_PendingCount() { }

	// RVA: 0x2460BA8 Offset: 0x245CBA8 VA: 0x2460BA8
	public void .ctor(int batchMaxEvents, float batchIntervalSeconds, string platform, string appVersion, string userId, string appId, Func<long> utcNowMs) { }

	// RVA: 0x2460E14 Offset: 0x245CE14 VA: 0x2460E14
	public void Enqueue(string eventName, DinoTrackingParameter[] parameters) { }

	// RVA: 0x2460FB8 Offset: 0x245CFB8 VA: 0x2460FB8
	public void SetUserProperty(string propertyName, object value) { }

	// RVA: 0x2461198 Offset: 0x245D198 VA: 0x2461198
	public bool Tick(float deltaSeconds) { }

	// RVA: 0x24611C4 Offset: 0x245D1C4 VA: 0x24611C4
	public string BuildBatchJson() { }

	// RVA: 0x2461354 Offset: 0x245D354 VA: 0x2461354
	private void WriteEvent(StringBuilder sb, in ServerTrackingCore.PendingEvent ev) { }

	// RVA: 0x24616D8 Offset: 0x245D6D8 VA: 0x24616D8
	private static void WriteParameter(StringBuilder sb, in DinoTrackingParameter p) { }

	// RVA: 0x2461E10 Offset: 0x245DE10 VA: 0x2461E10
	private static void WriteDictionary(StringBuilder sb, IDictionary<string, object> dict) { }

	// RVA: 0x2462130 Offset: 0x245E130 VA: 0x2462130
	private static void WriteValue(StringBuilder sb, string key, object value) { }

	// RVA: 0x2462170 Offset: 0x245E170 VA: 0x2462170
	private static void WriteBareValue(StringBuilder sb, object value) { }

	// RVA: 0x24615EC Offset: 0x245D5EC VA: 0x24615EC
	private static void WriteStringPair(StringBuilder sb, string key, string value) { }

	// RVA: 0x246162C Offset: 0x245D62C VA: 0x246162C
	private static void WriteNumberPair(StringBuilder sb, string key, long value) { }

	// RVA: 0x2461B8C Offset: 0x245DB8C VA: 0x2461B8C
	private static void WriteStringValue(StringBuilder sb, string value) { }

	// RVA: 0x2461DFC Offset: 0x245DDFC VA: 0x2461DFC
	private static bool IsFinite(double d) { }

	// RVA: 0x24627E0 Offset: 0x245E7E0 VA: 0x24627E0
	private static bool IsFinite(float f) { }
}

