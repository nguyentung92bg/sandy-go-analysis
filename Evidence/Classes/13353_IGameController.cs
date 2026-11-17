// Namespace: Dino.GameCommon
public interface IGameController : IGlobalService<IGameController> // TypeDefIndex: 13353
{
	// Properties
	public abstract GameState State { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract GameState get_State();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Win();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Die();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Surrender();
}

