// Namespace: Dino.BusSand.App.Meta
public abstract class LiveFeature<TData> : ILiveFeature // TypeDefIndex: 4071
{
	// Fields
	private TData _data; // 0x0

	// Properties
	public abstract string Key { get; }
	public virtual int Order { get; }
	public TData Data { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 13
	public abstract string get_Key();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-LiveFeature<object>.get_Key
	*/

	// RVA: -1 Offset: -1 Slot: 14
	public virtual int get_Order() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE6250 Offset: 0x2AE2250 VA: 0x2AE6250
	|-LiveFeature<object>.get_Order
	*/

	// RVA: -1 Offset: -1
	public TData get_Data() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE6258 Offset: 0x2AE2258 VA: 0x2AE6258
	|-LiveFeature<object>.get_Data
	*/

	// RVA: -1 Offset: -1
	public void Save() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE62FC Offset: 0x2AE22FC VA: 0x2AE62FC
	|-LiveFeature<object>.Save
	*/

	// RVA: -1 Offset: -1
	public void ResetData() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE6398 Offset: 0x2AE2398 VA: 0x2AE6398
	|-LiveFeature<object>.ResetData
	*/

	// RVA: -1 Offset: -1
	internal void DropCache() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE63E8 Offset: 0x2AE23E8 VA: 0x2AE63E8
	|-LiveFeature<object>.DropCache
	*/

	// RVA: -1 Offset: -1 Slot: 15
	public virtual void OnBoot() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE63F0 Offset: 0x2AE23F0 VA: 0x2AE63F0
	|-LiveFeature<object>.OnBoot
	*/

	// RVA: -1 Offset: -1 Slot: 16
	public virtual void OnLevelStart(int level) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE63F4 Offset: 0x2AE23F4 VA: 0x2AE63F4
	|-LiveFeature<object>.OnLevelStart
	*/

	// RVA: -1 Offset: -1 Slot: 17
	public virtual void OnLevelWin(LevelType type, int clearedLevel) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE63F8 Offset: 0x2AE23F8 VA: 0x2AE63F8
	|-LiveFeature<object>.OnLevelWin
	*/

	// RVA: -1 Offset: -1 Slot: 18
	public virtual void OnFinalFail() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE63FC Offset: 0x2AE23FC VA: 0x2AE63FC
	|-LiveFeature<object>.OnFinalFail
	*/

	// RVA: -1 Offset: -1 Slot: 19
	public virtual void OnQuit() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE6400 Offset: 0x2AE2400 VA: 0x2AE6400
	|-LiveFeature<object>.OnQuit
	*/

	// RVA: -1 Offset: -1 Slot: 20
	public virtual void OnEconomyChanged() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE6404 Offset: 0x2AE2404 VA: 0x2AE6404
	|-LiveFeature<object>.OnEconomyChanged
	*/

	// RVA: -1 Offset: -1 Slot: 21
	public virtual void CollectHallCommands(HallQueue q, bool fromGame) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE6408 Offset: 0x2AE2408 VA: 0x2AE6408
	|-LiveFeature<object>.CollectHallCommands
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2AE640C Offset: 0x2AE240C VA: 0x2AE640C
	|-LiveFeature<object>..ctor
	*/
}

