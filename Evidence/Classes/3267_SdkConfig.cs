// Namespace: Dino.BusSand.App
[CreateAssetMenu(menuName = "Sand Bus/SDK Config", fileName = "SdkConfig")]
public sealed class SdkConfig : ScriptableObject // TypeDefIndex: 3267
{
	// Fields
	public const string ResourceName = "SdkConfig";
	[Tooltip("Sand Bus!'s own Databuckets ingest endpoint. Empty: tracking plan events are off (the Dino package still starts the tracker on its default endpoint).")]
	public string databucketEndpoint; // 0x18
	[Tooltip("Where the rate-us feedback text is posted (Bus In!: a studio Apps Script). Empty: the player's mail app.")]
	public string feedbackWebhookUrl; // 0x20
	private static SdkConfig _instance; // 0x0

	// Properties
	public static SdkConfig Instance { get; }

	// Methods

	// RVA: 0x215D6CC Offset: 0x21596CC VA: 0x215D6CC
	public static SdkConfig get_Instance() { }

	// RVA: 0x215D810 Offset: 0x2159810 VA: 0x215D810
	public void .ctor() { }
}

